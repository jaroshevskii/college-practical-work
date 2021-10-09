#include <iostream>

struct Person {
  std::string firstNeme;
  std::string lastName;
};

/// Надрукувати особу.
void printPerson(const Person &person, const int &nTimes) {
  for (int i = 0; i <= nTimes; ++i) {
    std::cout << std::string(32, '-') << "\n"
              << "First name: " << person.firstNeme << "\n"
              << "Last name: " << person.lastName << "\n";
  }
  std::cout << std::string(32, '-') << "\n";
  std::cout << '\n';
}

int main() {
  Person person{"Sania", "Jaroshevski"};

  printPerson(person, 10);
  return 0;
}