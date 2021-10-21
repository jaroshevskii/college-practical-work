#include <iostream>

/// Надрукувати косінус.
void printCos(const int &start, const int &finish, const int &step) {
  int value = start;

  std::cout << std::string(32, '-') << '\n';

  while (value <= finish) {
    std::cout << "cos(" << value << ") = " << cos(value) << '\n';

    value += step;
  }

  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
}

/// Надрукувати сінус.
void printSin(const int &start, const int &finish, const int &step) {
  int value = start;

  std::cout << std::string(32, '-') << '\n';

  do {
    std::cout << "sin(" << value << ") = " << sin(value) << '\n';

    value += step;
  } while (value <= finish);
  
  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
}

int main() {
  printCos(0, 300, 5);

  printSin(0, 300, 5);
  return 0;
}
