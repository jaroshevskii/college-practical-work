#include <iostream>

int main() {
  for (uint16_t i = 0; i != 10; ++i) {
    std::cout << std::string(32, '-') << '\n'
              << "First name: Sania\n"
                 "Last name: Jaroshevskii\n";
  }
  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
  return 0;
}