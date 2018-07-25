int absoluteValuesSumMinimization(std::vector<int> a) {
    /* Proof: The median minimizes the sum of absolute deviations. https://math.stackexchange.com/questions/113270/the-median-minimizes-the-sum-of-absolute-deviations-the-l-1-norm */
    return (a.size()%2==0) ? a[a.size()/2-1] : a[a.size()/2];
}
