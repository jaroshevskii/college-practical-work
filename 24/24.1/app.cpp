#include <iostream>

template <class T>
bool setEqual(T& a, T& b) {
  return a == b ? true : false;
}

void printEqual(const bool& isEqual) {
  std::cout << std::boolalpha;
  std::cout << "Equal: " << isEqual << '\n';
  std::cout << '\n';
  }

void foo1() {
  std::cout << "Enter two int16_t values:\n";
  std::cout << "> ";
  int16_t a;
  std::cin >> a;

  std::cout << "> ";
  int16_t b;
  std::cin >> b;
  std::cout << '\n';

  bool isEqual = setEqual(a, b);
  printEqual(isEqual);
}

void foo2() {
  std::cout << "Enter two double values:\n";
  std::cout << "> ";
  double a;
  std::cin >> a;

  std::cout << "> ";
  double b;
  std::cin >> b;
  std::cout << '\n';
  
  bool isEqual = setEqual(a, b);
  printEqual(isEqual);
}

void foo3() {
  std::cout << "Enter two char values:\n";
  std::cout << "> ";
  char a;
  std::cin >> a;

  std::cout << "> ";
  char b;
  std::cin >> b;
  std::cout << '\n';
  
  bool isEqual = setEqual(a, b);
  printEqual(isEqual);
}

int main() {
  // int16_t
  foo1();
  
  // double
  foo2();

  // char
  foo3();
  return 0;
}