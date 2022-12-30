
int[] randomNumberGenerator(int range, int amount) {

    int[] numbers = new[amount];
    srand((unsigned) time(0));
    int randomNumber;
    for (int index = 0; index < amount; index++) {
        randomNumber = (rand() % range) + 1;
        cout << randomNumber << endl;
    }

}


