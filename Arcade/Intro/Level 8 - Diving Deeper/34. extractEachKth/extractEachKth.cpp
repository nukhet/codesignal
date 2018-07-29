std::vector<int> extractEachKth(std::vector<int> inputArray, int k) {
    for(int i=k-1; i<inputArray.size(); i+=k-1) {
        inputArray.erase(inputArray.begin()+i);
    }
    return inputArray;
}
