#include <iostream>

struct People {
  std::string name1;  // Призвіще
  std::string name2;  // Ім'я
  std::string name3;  // По ботькові

  uint16_t age;  // Вік
};

uint16_t getValue() {
  uint16_t value;
  std::cin >> value;
  return value;
}

// Отримати дані людини
void getPeople(People& people) {
  std::cout << "> Name1 = ";
  std::cin >> people.name1;

  std::cout << "> Name2 = ";
  std::cin >> people.name2;

  std::cout << "> Name3 = ";
  std::cin >> people.name3;

  std::cout << "> Age = ";
  people.age = getValue();
  std::cout << '\n';
}

// Вивести повідомлення
void printNotification(const uint16_t& age) {
  std::cout << "Notification: ";
  if (age < 18 || age > 59) {
    // Не призивний вік
    std::cout << "Not conscription age.\n";
  } else if (age >= 18 || age <= 27) {
    // Підлягає призову на строкову службу або може служити за контрактом
    std::cout << "Is subject to conscription or may serve under contract.\n";
  } else if (age >= 28 || age <= 59) {
    // Може служити за контрактом
    std::cout << "May serve under contract.\n";
  }
  std::cout << '\n';
}

// Вивести дані людини
void printPeople(const People& people) {
  std::cout << "Name1: " << people.name1 << '\n'
            << "Name2: " << people.name2 << '\n'
            << "Name3: " << people.name3 << '\n'
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