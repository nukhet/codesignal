std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    std::vector<std::string> res;
    int maxlen=0;
    for(auto str:inputArray)
        if(str.size()>maxlen) maxlen=str.size();
    for(auto str:inputArray) 
        if(str.size()==maxlen) res.push_back(str);
    return res;
}
