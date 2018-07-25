bool evenDigitsOnly(int n) {
    while(n) {
        if((n%10)%2 != 0) return false;
        n /= 10;
    }
    return true;
}
