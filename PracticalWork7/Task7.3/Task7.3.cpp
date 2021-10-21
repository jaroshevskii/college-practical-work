#include <iostream>

int main() {
  for (int number = 35; number <= 87; ++number) {
    if (number % 7 == 2 || number % 7 == 5) {
      std::cout << std::string(32, '-') << '\n'
                << "Number: " << number << '\n';
    }
  }
  
  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
  return 0;
}