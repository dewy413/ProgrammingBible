char* split(string word) {
    char* wordsplit = new char[word.length()];
    for(int i = 0; i < word.length(); i++) {
        wordsplit[i] = word[i];
    }
    return wordsplit;
}
