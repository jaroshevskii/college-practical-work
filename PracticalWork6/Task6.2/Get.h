#ifndef GET_H
#define GET_H

#include <iostream>

/// Отримати ціле число.
void getInt(int &number) {
  std::cin >> number;
}

/// Отримати десяткове число.
void getDouble(double &number) {
  std::cin >> number;
}

#endif // GET_H