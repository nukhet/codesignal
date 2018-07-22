int commonCharacterCount(std::string s1, std::string s2) {
    int c=0;
    int a1[26]={0};
    int a2[26]={0};
    int l1 = s1.length();
    int l2 = s2.length();
    
    for (int i = 0 ; i < l1 ; i++)
        a1[s1[i]-'a'] ++;
    for (int i = 0 ; i < l2 ; i++)
        a2[s2[i]-'a'] ++;
    for (int i=0;i<26;i++) {
        if (a1[i] != 0 && a2[i] != 0)
        {
            for (int j=0;j<std::min(a1[i], a2[i]);j++)
                c++;
        }
    }
    return c;
}
