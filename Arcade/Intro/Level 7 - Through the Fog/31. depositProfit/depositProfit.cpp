int depositProfit(int deposit, int rate, int threshold) {
    int y=0;
    double d = double(deposit);
    do{
        d+=(d*rate/100);
        y++;
    } while (d < threshold);
    return y;
    
    //or just
    //return ceil(log(t/d)/log((100+r)/100.0));
}
