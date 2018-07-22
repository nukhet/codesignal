int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    int sum=0;
    for(int j=0; j<matrix[0].size(); j++) {
        for(int i=0; i<matrix.size(); i++) {
            if(matrix[i][j] == 0)
              break;
            else
              sum += matrix[i][j];
        }
    }
    return sum;
}
