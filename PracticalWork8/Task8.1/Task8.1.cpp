#include <iostream>

int main() {
  const char symbol = 'j'; // Символ.
  const int nRow = 4;      // Кількість рядків.
  const int nColumn = 9;   // Кількість стовбчиків.

  for (int i = 0; i <= nRow; ++i) {
    for (int j = 0; j <= nColumn; ++j) {
      std::cout << symbol;
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  return 0;
}