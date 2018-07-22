std::string reverseString(std::string s) {
    for(int i=0; i<s.size()/2; i++) {
        char t = s[s.size()-1-i];
        s[s.size()-1-i] = s[i];
        s[i] = t;
    }
    return s;
}

std::string reverseParentheses(std::string s) {
    int op = 0;
    int cp = s.size() - 1;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '(')
            op = i;
        if(s[i] == ')') {
            cp = i;
            std::string tmp = s.substr(op+1, cp-op-1);
            return reverseParentheses(s.substr(0,op) + reverseString(tmp) + s.substr(cp+1));
        }
    }
    return s;
}
