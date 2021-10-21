#include <iostream>

/// Встановити кількість цифр.
int setNumberOfDigits(int number) {
  if (number < 0)
    number *= -1;

  int nDigits = 0;

  while (number) {
    if (number % 10 == 3)
      ++nDigits;

    number /= 10;
  }
  return nDigits;
}

/// Надрукувати кількість цифр.
void printNumberOfDigits(const int &nDigits) {
  std::cout << "Number of digits: " << nDigits << '\n';
  std::cout << '\n';
}

int main() {
  std::cout << "// Enter a integer.\n"
               "> ";
  int number;
  std::cin >> number;
  std::cout << '\n';

  const int nDigits = setNumberOfDigits(number);

  printNumberOfDigits(nDigits);
  return 0;
}