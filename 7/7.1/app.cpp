#include <iostream>

struct People {
  std::string firstNeme;
  std::string lastName;
};

void printPeople(const People &people, const int &nTimes) {
  for (int i = 0; i <= nTimes; ++i) {
    std::cout << std::string(32, '-') << "\n"
              << "First name: " << people.firstNeme << "\n"
              << "Last name: " << people.lastName << "\n";
  }
  std::cout << std::string(32, '-') << "\n";
  std::cout << '\n';
}

int main() {
  People people{"Sania", "Jaroshevski"};

  printPeople(people, 10);
  return 0;
}