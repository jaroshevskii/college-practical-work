#include <iostream>

/// Отримати індекс.
int getIndex(const int *array, const int &arrayLenght, const int &value) {
  for (int i = 0; i < arrayLenght; ++i) {
    if (array[i] < value)
      return i;
  }

  std::cout << "error: No index found.\n";
  std::cout << '\n';
  return 0;
}

/// Надрукувати індекс.
void printIndex(const int &index) {
  std::cout << "Index: " << index << '\n';
  std::cout << '\n';
}

int main() {
  const int arrayLenght = 10;
  int array[arrayLenght];

  std::cout << "// Enter " << arrayLenght << " integers.\n";

  for (int i = 0; i < arrayLenght; ++i) {
    std::cout << "> ";
    std::cin >> array[i];
  }
  std::cout << '\n';

  std::cout << "// Enter the integer.\n"
               "> ";
  int value;
  std::cin >> value;
  std::cout << '\n';

  const int index = getIndex(array, arrayLenght, value);

  printIndex(index);
  return 0;
}