int differentSymbolsNaive(std::string s) {
    int freq[26]={0}, count=0;
    for(int i=0; i<s.length(); i++)
        freq[s[i]-'a']++;
    for(int i=0; i<26; i++)
        if(freq[i]>=1) count++;
    return count;
}
