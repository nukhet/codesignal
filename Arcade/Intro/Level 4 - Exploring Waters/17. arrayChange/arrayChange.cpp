int arrayChange(std::vector<int> inputArray) {
    int sum = 0;
    for(int i=1; i<inputArray.size(); i++) {
        if(inputArray[i] <= inputArray[i-1]) {
            sum += inputArray[i-1] - inputArray[i] + 1;
            inputArray[i] += inputArray[i-1] - inputArray[i] + 1;
        }
    }
    return sum;
}
