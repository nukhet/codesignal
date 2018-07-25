std::vector<int> arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {
    std::replace(inputArray.begin(), inputArray.end(), elemToReplace, substitutionElem);
    return inputArray;
}
