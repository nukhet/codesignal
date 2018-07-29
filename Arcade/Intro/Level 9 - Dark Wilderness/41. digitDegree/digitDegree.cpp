int findSum(int n){
    int sum=0;
    while(n>0) {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int digitDegree(int n) {
    if(n<10) return 0;
    int count=0;
    while(n>=10) {
        n=findSum(n);
        count++;
    }
    return count;
}
