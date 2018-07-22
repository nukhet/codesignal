int adjacentElementsProduct(std::vector<int> inputArray) {
    int r = INT_MIN;
    for(int i=1; i<inputArray.size(); i++) {
        r = max(r, inputArray[i] * inputArray[i - 1]);  
    }
    return r;
}
