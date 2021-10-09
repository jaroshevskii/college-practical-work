#include <iostream>

#include "Get.h"

/// Отримати день тижня.
void getDayOfWeek(int &dayOfWeek) {
  while (true) {
    getInt(dayOfWeek);

    if (dayOfWeek >= 1 && dayOfWeek <= 5)
      return;

    std::cout << '\n';
    std::cout << "error: The day of the week is not true.\n";
    std::cout << '\n';

    std::cout << "// Repeat again.\n"
                 "> ";
  }
}

/// Надрукувати розклад занять.
void printTimetable(const int &dayOfWeek) {
  switch (dayOfWeek) {
  case 1:
    std::cout << "// Monday\n"
                 "  1. Ukrainian language\n"
                 "  2. Algebra\n"
                 "  3. Physics\n"
                 "  4. History of Ukraine\n";
    std::cout << '\n';
    return;
  case 2:
    std::cout << "// Tuesday\n"
                 "  1. Ukrainian literature\n"
                 "  2. Biology\n"
                 "  3. History of Ukraine\n"
                 "  4. Geography\n";
    std::cout << '\n';
    return;
  case 3:
    std::cout << "// Wednesday\n"
                 "  1. English\n"
                 "  2. Geometry\n"
                 "  3. Chemistry\n"
                 "  4. Biology\n";
    std::cout << '\n';
    return;
  case 4:
    std::cout << "// Thursday\n"
                 "  1. Ukrainian literature\n"
                 "  2. Physics\n"
                 "  3. English\n"
                 "  4. World History\n";
    std::cout << '\n';
    return;
  case 5:
    std::cout << "// Friday\n"
                 "  1. Ukrainian language\n"
                 "  2. Physics\n"
                 "  3. Chemistry\n"
                 "  4. Algebra\n";
    std::cout << '\n';
    return;
  }
}

int main() {
  std::cout << "// Enter the day of the week.\n"
               "> ";
  int dayOfWeek;
  getDayOfWeek(dayOfWeek);
  std::cout << '\n';

  printTimetable(dayOfWeek);
  return 0;
}