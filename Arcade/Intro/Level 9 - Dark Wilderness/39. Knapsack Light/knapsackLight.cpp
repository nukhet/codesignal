int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
    int r = 0;
    if (weight1 + weight2 <= maxW) return value1 + value2;
    if (weight1 <= maxW) r = value1;
    if (weight2 <= maxW && value2 > r) r = value2;
    return r;
}
