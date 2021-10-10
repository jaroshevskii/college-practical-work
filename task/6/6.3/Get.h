#ifndef GET_H
#define GET_H

#include <iostream>

/// Отримати ціле число.
int getInt(int &number) {
  std::cin >> number;
  return number;
}

#endif // GET_H