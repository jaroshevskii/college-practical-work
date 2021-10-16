#include <iostream>

/// Отримати число.
void getNumber(int &number) {
  while (true) {
    std::cin >> number;

    if (number > 0)
      return;

    std::cout << '\n';
    std::cout << "error: The number is incorrect.\n";
    std::cout << '\n';

    std::cout << "// Repeat again.\n"
              << "> ";
    std::cout << '\n';
  }
}

int main() {
  std::cout << "// Enter the symbol.\n"
               "> ";
  char symbol;
  std::cin >> symbol;
  std::cout << '\n';

  std::cout << "// Enter the number of row.\n"
               "> ";
  int nRow;
  getNumber(nRow);
  std::cout << '\n';

  std::cout << "// Enter the number of column.\n"
               "> ";
  int nColumn;
  getNumber(nColumn);
  std::cout << '\n';

  for (int i = 1; i <= nRow; ++i) {
    for (int j = 1; j <= nColumn; ++j) {
      if (i == 1 || i == nRow || j == 1 || j == nColumn)
        std::cout << symbol;
      else
        std::cout << ' ';
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  return 0;
}