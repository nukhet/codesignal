std::vector<int> sortByHeight(std::vector<int> a) {
    std::vector<int> tmp;
    for(auto i:a) if(i>-1) tmp.push_back(i);
    sort(tmp.begin(),tmp.end());
    auto p=tmp.begin();
    for(int i=0; i<a.size(); ++i)
        if(a[i]>-1)a[i] = *p++;
    return a;
}
