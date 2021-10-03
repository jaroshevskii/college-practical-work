#include <iostream>

void printCos(int16_t begin, const int16_t &end, const int16_t &step) {
  while (begin <= end) {
    std::cout << "cos(" << begin << ") = " << cos(begin) << '\n';

    begin += step;
  }
}

void printSin(int16_t begin, const int16_t &end, const int16_t &step) {
  do {
    std::cout << "sin(" << begin << ") = " << sin(begin) << '\n';

    begin += step;
  } while (begin <= end);
}

int main() {
  std::cout << std::string(32, '-') << '\n';
  printCos(0, 300, 5);

  std::cout << std::string(32, '-') << '\n';
  printSin(0, 300, 5);

  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
  return 0;
}
