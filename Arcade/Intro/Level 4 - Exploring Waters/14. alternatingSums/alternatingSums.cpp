std::vector<int> alternatingSums(std::vector<int> a) {
    int t1=0, t2=0;
    for(int i=0; i<a.size(); i++){
        if(i%2==0) t1+=a[i];
        else t2+=a[i];
    }
    std::vector<int> r{t1,t2};
    return r;
}
