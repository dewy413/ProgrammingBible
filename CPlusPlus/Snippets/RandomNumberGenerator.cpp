
int randomNumberGenerator(int array[], int size, int range) {

    srand((unsigned) time(0));
    int randomNumber;
    for (int i = 0; i < size; i++) {
        array[i] = (rand() % range) + 1;
    }

}
