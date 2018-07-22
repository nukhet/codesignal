int makeArrayConsecutive2(std::vector<int> statues) {
    std::sort(statues.begin(), statues.end());
    int missing = 0;
    for(int i = 0; i < statues.size() - 1; i++){
        missing += statues[i+1] - statues[i] - 1;
    }
    return missing;
}
