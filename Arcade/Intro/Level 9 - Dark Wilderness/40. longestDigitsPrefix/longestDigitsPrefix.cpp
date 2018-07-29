std::string longestDigitsPrefix(std::string inputString) {
    std::string s="";
    for(int i=0; i<inputString.length(); i++) {
        if(inputString[i]>='0' && inputString[i]<='9')
            s += inputString[i];
        else
            break;
    }
    return s;
}
