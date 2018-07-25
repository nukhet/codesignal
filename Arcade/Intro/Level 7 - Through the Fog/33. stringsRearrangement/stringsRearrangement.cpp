bool isOneCharDif(std::string s1, std::string s2){
    int dif=0;
    for(int i=0;i<s1.length();i++) {
        if(s1[i]!=s2[i])
            dif++;
    }
    return (dif==1) ? true : false;
}

bool findPath(std::vector<std::string> &inputArray, std::vector<bool> seen, int index){
    bool isPath = true;
    for(int i=0; i<seen.size(); i++) {
        isPath = isPath && seen[i];
    }
    if(isPath)
        return true;
    
    for(int i=0; i <inputArray.size(); i++){
        if(i!=index && !seen[i]){
            if(isOneCharDif(inputArray[i], inputArray[index])){
                seen[i] = true;
                if(findPath(inputArray,seen,i))
                    return true;
                else
                    seen[i] = false;
            }
        }
    }
    return false;
}

bool stringsRearrangement(std::vector<std::string> inputArray) {
    for(int i =0; i<inputArray.size(); ++i){
        std::vector<bool> seen(inputArray.size(), false);
        seen[i] = true;
        if(findPath(inputArray, seen, i))
            return true;
    }
    return false;
}

//A better and more elegant solution.
//Author: catrom.
/*
bool stringsRearrangement(std::vector<std::string> inputArray) {
    while(next_permutation(inputArray.begin(), inputArray.end())) {
        bool flag = 1;
        for(int i = 0; i < inputArray.size() - 1; i++) {
            int c = 0;
            for(int j = 0; j < inputArray[i].size(); j++)
                if(inputArray[i][j] != inputArray[i+1][j]) c++;
            if(c != 1) flag = 0;
        }
        if(flag) return 1;
    }
    return 0;
}
*/
