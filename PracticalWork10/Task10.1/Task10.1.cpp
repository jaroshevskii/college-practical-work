#include <iostream>

int main() {
  const int arrayLenght = 5;
  int array[arrayLenght];
  
  std::cout << "// Enter " << arrayLenght << " integers.\n";

  for (int i = 0; i < arrayLenght; ++i) {
    std::cout << "> ";
    std::cin >> array[i];
  }
  std::cout << '\n';
  
  std::cout << std::string(32, '-') << '\n';

  for (int i = arrayLenght - 1; i >= 0; --i)
    std::cout << array[i] << '\n';
  
  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
  return 0;
}