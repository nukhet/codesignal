char firstDigit(std::string inputString) {
    for(int i=0; i<inputString.length(); i++) {
        if(isdigit(inputString[i]))
            return inputString[i];
    }
    return 0;
}
