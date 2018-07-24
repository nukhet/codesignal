std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
    int sx = matrix.size(), sy = matrix[0].size();
    std::vector<std::vector<int>> r (sx, std::vector<int>(sy));
    for(int i=0; i<sx; i++) {
        for(int j=0; j<sy; j++) {
            r[i][j]+= i>0 && j>0 && matrix[i-1][j-1];
            r[i][j]+= i>0 && matrix[i-1][j];
            r[i][j]+= i>0 && j<sy-1 && matrix[i-1][j+1];
            r[i][j]+= j>0 && matrix[i][j-1];
            r[i][j]+= j<sy-1 && matrix[i][j+1];
            r[i][j]+= i<sx-1 && j>0 && matrix[i+1][j-1];
            r[i][j]+= i<sx-1 && matrix[i+1][j];
            r[i][j]+= i<sx-1 && j<sy-1 && matrix[i+1][j+1];
        }
    }
    return r;
}
