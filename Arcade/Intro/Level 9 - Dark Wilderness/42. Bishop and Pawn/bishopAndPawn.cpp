bool bishopAndPawn(std::string bishop, std::string pawn) {
    return abs((int)bishop[0]-(int)pawn[0]) == abs((int)bishop[1]-(int)pawn[1]);
}
