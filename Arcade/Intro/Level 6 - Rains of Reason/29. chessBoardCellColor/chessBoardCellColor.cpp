bool chessBoardCellColor(std::string cell1, std::string cell2) {
    return (((cell1[0]+cell1[1])%2) == ((cell2[0]+cell2[1])%2)) ? true: false;
}
