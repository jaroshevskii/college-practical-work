#ifndef GET_H
#define GET_H

#include <iostream>

/// Отримати ціле число.
void getInt(int &value) {
  std::cin >> value;
}

/// Отримати десяткове число.
void getDouble(double &value) {
  std::cin >> value;
}

#endif // GET_H