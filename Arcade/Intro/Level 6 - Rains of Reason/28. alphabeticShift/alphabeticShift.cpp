std::string alphabeticShift(std::string inputString) {
    for(int i=0; i<=inputString.length(); i++)
        inputString[i] = char(int(inputString[i]+1-97)%26 +97);
    return inputString;
}
