#include <iostream>

int main() {
  const int arrayLenght = 10;
  int array[arrayLenght];
  
  std::cout << "// Enter " << arrayLenght << " integers.\n";

  for (int i = 0; i < arrayLenght; ++i) {
    std::cout << "> ";
    std::cin >> array[i];
  }
  std::cout << '\n';

  for (int i = 0; i < arrayLenght; ++i) {
    if (array[i] > 0)
      array[i] *= 2;
  }

  std::cout << std::string(32, '-') << '\n';

  for (int i = 0; i < arrayLenght; ++i)
    std::cout << array[i] << '\n';
  
  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
  return 0;
}