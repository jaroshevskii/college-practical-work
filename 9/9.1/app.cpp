#include <iostream>

uint16_t setNumberOfDigits(int16_t value) {
  uint16_t nDigits = 0;
  while (value) {
    if (value % 10 == 3 || value % 10 == -3) {
      ++nDigits;
    }
    
    value /= 10;
  }
  return nDigits;
}

void printNumberOfDigits(const uint16_t &nDigits) {
  std::cout << "Number of digits: " << nDigits << '\n';
}

int main() {
  std::cout << "// Enter a natural number.\n"
               "> ";
  int16_t value;
  std::cin >> value;
  std::cout << '\n';
  
  // Встановити кількість цифр.
  uint16_t nDigits = setNumberOfDigits(value);

  printNumberOfDigits(nDigits);
  std::cout << '\n';
  return 0;
}