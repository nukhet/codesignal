int shapeArea(int n) {
    return (n==1 ? 1 : 4*(n-1)+shapeArea(n-1));
    
    /*
    if(n==1)
      return 1;
    else
      return 4*(n-1)+shapeArea(n-1);
    */
}
