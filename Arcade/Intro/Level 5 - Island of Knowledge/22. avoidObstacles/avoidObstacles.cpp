int avoidObstacles(std::vector<int> inputArray) {
    int jumps = 2;
    while(jumps) {
        bool b = true;
        for(int i:inputArray)
            b = b && (i%jumps!=0);
        if(b) return jumps;
        jumps++;
    }
}
