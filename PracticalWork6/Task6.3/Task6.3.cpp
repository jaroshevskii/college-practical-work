#include <iostream>

#include "Get.h"

/// Отримати номер місяця.
void getMonthNumber(int &monthNumber) {
  while (true) {
    getInt(monthNumber);

    if (monthNumber >= 1 && monthNumber <= 12)
      return;

    std::cout << '\n';
    std::cout << "error: The month number is incorrect.\n";
    std::cout << '\n';

    std::cout << "// Repeat again.\n"
                 "> ";
  }
}

/// Встановити місяць.
std::string setMonth(const int &monthNumber) {
  switch (monthNumber) {
  case 1:
    return "January";
  case 2:
    return "February";
  case 3:
    return "March";
  case 4:
    return "April";
  case 5:
    return "May";
  case 6:
    return "June";
  case 7:
    return "July";
  case 8:
    return "August";
  case 9:
    return "September";
  case 10:
    return "October";
  case 11:
    return "November";
  case 12:
    return "December";
  default:
    return "Unknown";
  }
}

/// Надрукувати місяць.
void printMonth(const std::string &month) {
  std::cout << "Month: " << month << "\n";
  std::cout << '\n';
}

int main() {
  std::cout << "// Enter the month number.\n"
               "> ";
  int monthNumber;
  getMonthNumber(monthNumber);
  std::cout << '\n';

  std::string month = setMonth(monthNumber);

  printMonth(month);
  return 0;
}