bool areSimilar(std::vector<int> a, std::vector<int> b) {
    int c = 0;
    int p = -1;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            c++;
            if(p>-1 && (a[p]!=b[i] | a[i]!=b[p]))
                c++;
            p=i;
        }    
    }
    if(c<=2) return true;
    return false;
}
