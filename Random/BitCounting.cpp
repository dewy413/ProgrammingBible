using namespace std;
unsigned int countBits(unsigned long long n) {
  if(n != 0) {
    return int(n % 2 != 0) + countBits(n / 2);
  } else {
    return 0;
  }
}
