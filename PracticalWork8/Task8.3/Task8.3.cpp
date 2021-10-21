#include <iostream>

/// Отримати ціле число.
int getInt(const int &minValue) {
  int value;
 
  while (true) {
    std::cin >> value;
    std::cout << '\n';

    if (value >= minValue)
      return value;

    std::cout << "error: The value is incorrect.\n";
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
  int nRow = getInt(1);

  std::cout << "// Enter the number of column.\n"
               "> ";
  int nColumn = getInt(1);

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