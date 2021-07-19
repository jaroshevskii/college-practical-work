#include <iostream>

struct People {
  std::string name;  // Ім'я
  
  uint16_t age;  // Вік
};

uint16_t getValue() {
  uint16_t value;
  std::cin >> value;
  return value;
}

void getPeople(People& people) {
  std::cout << "What your name?\n"
               "> ";
  std::cin >> people.name;
  std::cout << '\n';

  std::cout << "What your age?\n"
               "> ";
  people.age = getValue();
  std::cout << '\n';
}

void printNotification(const uint16_t& age) {
  std::cout << "Notification: ";

  if (age < 18 || age > 59) {
    // Не призивний вік
    std::cout << "Not conscription age\n";
  } else if (age >= 18 || age <= 27) {
    // Підлягає призову на строкову службу або може служити за контрактом
    std::cout << "Is subject to conscription or may serve under contract\n";
  } else if (age >= 28 || age <= 59) {
    // Може служити за контрактом
    std::cout << "May serve under contract\n";
  }
  std::cout << '\n';
}

void printPeople(const People& people) {
  std::cout << "Name: " << people.name << '\n'
            << "Age: " << people.age << '\n';
  std::cout << '\n';
}

int main() {
  People people{};
  
  // Отримати дані людини
  getPeople(people);
  
  // Вивести дані людини
  printPeople(people);

  // Вивести повідомленя
  printNotification(people.age);
  return 0;
}