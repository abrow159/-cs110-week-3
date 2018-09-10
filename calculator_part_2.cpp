#include <iostream>
#include <cmath>
using namespace std;

int showMenu() {
  int choice;

  cout << "Choose 1 for addition." << endl;
  cout << "Choose 2 for subtraction." << endl;
  cout << "Choose 3 for multiplication." << endl;
  cout << "Choose 4 for division." << endl;
  cout << "Choose 5 for square root." << endl;
  cout << "Choose 6 for square." << endl;
  cout << "Choose 7 for cube root." << endl;
  cout << "Choose 8 for cube." << endl;
  cout << "Choose 9 for power." << endl;

  cin >> choice;

  while (choice < 1 || choice > 10) {
    cout << "Invalid input, please choose a number between 1 - 9, or choose 10 to exit program." << endl;
    cin >> choice;
  }

  return choice;
}

int addition() {
  int num1, num2;
  cout << "Enter first number " << endl;
  cin >> num1;
  cout << "Enter second number " << endl;
  cin >> num2;
  return num1 + num2;
}

int subtraction() {
  int num1, num2;
  cout << "Enter first number " << endl;
  cin >> num1;
  cout << "Enter second number " << endl;
  cin >> num2;
  return num1 - num2;
}

int multiplication() {
  int num1, num2;
  cout << "Enter first number " << endl;
  cin >> num1;
  cout << "Enter second number " << endl;
  cin >> num2;
  return num1 * num2;
}

int division() {
  int num1, num2;
  cout << "Enter first number " << endl;
  cin >> num1;
  cout << "Enter second number " << endl;
  cin >> num2;
  if (num1 == 0 || num2 == 0) {
    cout << "Invalid input.";
    return 1;
    exit;
  } else {
    return num1/num2;
  }
}

float squareRoot() {
  int num1;
  cout << "Enter number " << endl;
  cin >> num1;
  return sqrt(num1);
}

int square() {
  int num1;
  cout << "Enter number " << endl;
  cin >> num1;
  return num1 * num1;
}

float cubeRoot() {
  int num1;
  cout << "Enter number " << endl;
  cin >> num1;
  return cbrt(num1);
}

int cube() {
  int num1;
  cout << "Enter number " << endl;
  cin >> num1;
  return pow(num1, 3);
}

int power() {
  int num1, num2;
  cout << "Enter first number " << endl;
  cin >> num1;
  cout << "Enter second number " << endl;
  cin >> num2;
  return pow(num1, num2);
}

int main() {
  int choice;
  float result;

  choice = showMenu();

  switch (choice) {
    case(1):
      result = addition();
      break;
    case(2):
      result = subtraction();
      break;
    case(3):
      result = multiplication();
      break;
    case(4):
      result = division();
      break;
    case(5):
      result = squareRoot();
      break;
    case(6):
      result = square();
      break;
    case(7):
      result = cubeRoot();
      break;
    case(8):
      result = cube();
      break;
    case(9):
      result = power();
      break;
    case(10):
      cout << "Exit";
      break;
    default: 
      cout << "Invalid choice";
  }

  cout << result << endl;
  return 0;
}
