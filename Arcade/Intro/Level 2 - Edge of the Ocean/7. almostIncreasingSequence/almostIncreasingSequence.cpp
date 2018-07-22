bool almostIncreasingSequence(std::vector<int> sequence) {
    int l = sequence.size();
    int c = 0;
    int p = -1;
    
    for(int i=1;i<l;i++){
        int d = sequence[i] - sequence[i-1];
        if(d<=0){
            c++;
            p=i;
        }
    }
    
    if (c > 1) return false;
    if (c == 0) return true;
    if (p == l-1 || p == 1) return true;
    if (sequence[p-1] < sequence[p+1]) return true;
    if (sequence[p-2] < sequence[p]) return true;
    return false;
}
