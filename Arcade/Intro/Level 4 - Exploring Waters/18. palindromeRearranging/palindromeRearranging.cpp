bool palindromeRearranging(std::string inputString) {
    if(inputString.length()==1) return true;
    int i=0;
    while (i<=1 && inputString.length()>1) {
        std::size_t found = inputString.find(inputString.at(i), i+1);
        if (found!=std::string::npos){
            inputString.erase (found,1);
            inputString.erase (i,1);
        }
        else
            i++;
    }
    return (inputString.length()<=1) ? true : false;
}
