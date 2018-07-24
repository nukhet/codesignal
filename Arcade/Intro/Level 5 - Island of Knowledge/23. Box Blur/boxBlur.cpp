std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    int medx = image.size()-2;
    int medy = image[0].size()-2;
    std::vector<std::vector<int>> sum(medx);
    for(int i=1; i<=medx; i++) {
        std::vector<int> scol(medy);
        for(int j=1; j<=medy; j++) {
            scol[j-1] = (image[i-1][j-1] + image[i-1][j] + image[i-1][j+1] + image[i][j-1] + image[i][j] + image[i][j+1] + image[i+1][j-1] + image[i+1][j] + image[i+1][j+1])/9;
        }
        sum[i-1] = scol;
    }
    return sum;
}
