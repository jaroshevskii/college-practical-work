#include <iostream>

uint16_t getFunctionNumber() {
  uint16_t functionNumber;
  while (true) {
    std::cin >> functionNumber;

    if (functionNumber >= 1 && functionNumber <= 7) {
      return functionNumber;
    } else {
      std::cout << '\n';
      std::cout << "ERROR: The function number is incorrect.\n";
      std::cout << '\n';
    }

    std::cout << "> ";
  }
}


int main() {
  std::cout << "// Enter the function number.\n"
               "> ";
  uint16_t functionNumber = getFunctionNumber();
  std::cout << '\n';

  return 0;
}