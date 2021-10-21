#include <iostream>

/// Особа.
struct Person {
  std::string firstName; // Ім'я
  std::string lastName;  // Призвіще
};

/// Надрукувати особу.
void printPerson(const Person &person, const int &nTimes) {
  for (int i = 0; i <= nTimes; ++i) {
    std::cout << std::string(32, '-') << '\n'
              << "First name: " << person.firstName << '\n'
              << "Last name: " << person.lastName << '\n';
  }
  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
}

int main() {
  const Person person{"Sania", "Jaroshevskii"};

  const int nTimes = 10;

  printPerson(person, nTimes);
  return 0;
}