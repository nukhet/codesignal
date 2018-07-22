bool checkPalindrome(std::string inputString) {
    int l = inputString.length();
    for(int i=0; i<l/2; i++) {
        if(inputString[i] != inputString[l-1-i])
            return false;
    }
    return true;
}
