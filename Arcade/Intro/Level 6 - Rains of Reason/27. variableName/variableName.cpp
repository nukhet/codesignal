bool variableName(std::string name) {
    return (std::regex_match (name, std::regex("^[a-zA-Z_][a-zA-Z0-9_]{0,31}") ));
}
