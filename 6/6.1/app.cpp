#include <iostream>

uint16_t getDayOfWeek() {
  uint16_t dayOfWeek;
  while (true) {
    std::cin >> dayOfWeek;
    if (dayOfWeek >= 1 && dayOfWeek <= 7) {
      return dayOfWeek;
    }
    std::cout << '\n';

    std::cout << "ERROR: The day of the week is incorrect.\n";
    std::cout << '\n';

    std::cout << "> ";
  }
}

void printLessonsSchedule(uint16_t &dayOfWeek) {
  switch (dayOfWeek) {
  case 1:
    std::cout << "// Monday\n"
                 "1. Ukrainian language\n"
                 "2. Algebra\n"
                 "3. Physics\n"
                 "4. History of Ukraine\n";
    return;
  case 2:
    std::cout << "// Tuesday\n"
                 "1. Ukrainian literature\n"
                 "2. Biology\n"
                 "3. History of Ukraine\n"
                 "4. Geography\n";
    return;
  case 3:
    std::cout << "// Wednesday\n"
                 "1. English\n"
                 "2. Geometry\n"
                 "3. Chemistry\n"
                 "4. Biology\n";
    return;
  case 4:
    std::cout << "// Thursday\n"
                 "1. Ukrainian literature\n"
                 "2. Physics\n"
                 "3. English\n"
                 "4. World History\n";
    return;
  case 5:
    std::cout << "// Friday\n"
                 "1. Ukrainian language\n"
                 "2. Physics\n"
                 "3. Chemistry\n"
                 "4. Algebra\n";
    return;
  case 6:
  case 7:
    std::cout << "- Weekend -\n";
    return;
  }
}

int main() {
  std::cout << "// Enter the day of week.\n"
               "> ";
  uint16_t dayOfWeek = getDayOfWeek();
  std::cout << '\n';

  // Вивести розклад занять
  printLessonsSchedule(dayOfWeek);
  std::cout << '\n';
  return 0;
}