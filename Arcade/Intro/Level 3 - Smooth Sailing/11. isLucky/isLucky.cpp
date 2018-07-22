bool isLucky(int n) {
    int digit = 0;
    int n_temp = n;
    
    //Find number of digits
    while(n_temp) {
        n_temp /= 10;
        digit++;
    }
    
    int first_half = 0, second_half=0, place=1;
    for(int i=0; i<digit; i++){
        int curr = (n/place)%10;
        if(i < digit/2)
            second_half += curr;
        else
            first_half += curr;
        place*=10;
    }
    
    if(first_half == second_half)
        return true;
    else
        return false;
}
