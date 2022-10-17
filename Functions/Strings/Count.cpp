int count(char* letters, char letter) {
    int counter = 0;
    for(int i = 0; i < sizeof(letters); i++) {
        if(letters[i] == letter) {
            counter++;
        }
    }
    return counter;
}
