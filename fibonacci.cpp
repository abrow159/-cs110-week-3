#include <iostream>
using namespace std;

void printFib(int num) {
  int fib_sequence[num] = {0, 1};

  for (int i = 2; i < num; i++) {
    fib_sequence[i] = (fib_sequence[i - 1]) + (fib_sequence[i - 2]);
  }

  for (int j = 0; j < num; j++) {
    cout << " " << fib_sequence[j] << endl;
  }
}

int main() {
  int num;
  cout << "Enter a number to print a fibonacci sequence." << endl;

  cin >> num;

  printFib(num);
  return 0;
}
