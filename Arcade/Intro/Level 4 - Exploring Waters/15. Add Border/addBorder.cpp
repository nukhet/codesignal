std::vector<std::string> addBorder(std::vector<std::string> picture) {
    for(std::string &s: picture)
        s = "*"+s+"*";
    picture.insert(picture.begin(), string(picture[0].size(),'*'));
    picture.insert(picture.end(), string(picture[0].size(),'*'));
    return picture;
}
