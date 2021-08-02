#include <iostream>

uint16_t getMonthNumber() {
  uint16_t monthNumber;
  while (true) {
    std::cin >> monthNumber;
    if (monthNumber >= 1 && monthNumber <= 12) {
      return monthNumber;
    }
    std::cout << '\n';

    std::cout << "ERROR: The month number is incorrect.\n";
    std::cout << '\n';

    std::cout << "> ";
  }
}

void printMonth(const uint16_t &monthNumber) {
  std::cout << "Month: ";
  switch (monthNumber) {
  case 1:
    std::cout << "January\n";
    return;
  case 2:
    std::cout << "February\n";
    return;
  case 3:
    std::cout << "March\n";
    return;
  case 4:
    std::cout << "April\n";
    return;
  case 5:
    std::cout << "May\n";
    return;
  case 6:
    std::cout << "June\n";
    return;
  case 7:
    std::cout << "July\n";
    return;
  case 8:
    std::cout << "August\n";
    return;
  case 9:
    std::cout << "September\n";
    return;
  case 10:
    std::cout << "October\n";
    return;
  case 11:
    std::cout << "November\n";
    return;
  case 12:
    std::cout << "December\n";
    return;
  }
}

int main() {
  std::cout << "// Enter the month number.\n"
               "> ";
  uint16_t monthNumber = getMonthNumber();
  std::cout << '\n';
  
  printMonth(monthNumber);
  std::cout << '\n';
  return 0;
}