int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    int max=0, sum=0, len=inputArray.size();
    for(int i=0; i<k; i++)
        sum+=inputArray[i];
    if(sum>max) max=sum;
    for(int j=k; j<len; j++){
        sum+=inputArray[j]-inputArray[j-k];
        if(sum>max) max=sum;
    }
    return max;
}
