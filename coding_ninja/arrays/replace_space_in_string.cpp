string replaceSpaces(string &str){
    string ch = "@40";
    size_t pos = 0;
    while ((pos = str.find(' ', pos)) != string::npos) {
        str.replace(pos, 1, ch);
        pos += ch.length();
    }
    return str;
}
