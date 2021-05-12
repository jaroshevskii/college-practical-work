#include <iostream>

struct Man {
  std::string surname;         // Призвіще
  std::string name;            // Ім'я
  std::string nameFromFather;  // По батькові
  
  int years;  // Кількість років
};

// Отримання значення
int getValue(const int minValue, const int maxValue) {
  int value;

  while (std::cin >> value) {
    if (value >= minValue && value <= maxValue) {
      return value;
    } else {
      std::cout << "ERROR: Entered value is not true\n"
                   "> ";
    }
  }
  return 0;
}

// Отримання даних чоловіка
void getManData(Man& man) {
  std::cout << "> man.surname = ";
  std::cin >> man.surname;

  std::cout << "> man.name = ";
  std::cin >> man.name;

  std::cout << "> man.nameFromFather = ";
  std::cin >> man.nameFromFather;

  std::cout << "> man.years = ";
  man.years = getValue(1, 100);
  std::cout << '\n';
}

// Знаходження рекомендації
std::string searchRecommendation(const int years) {
  if (years < 18 || years > 59) {
    // Не призивний вік
    return "not conscription age";
  } else if (years >= 18 || years <= 27) {
    // Підлягає призову на строкову службу або може служити за контрактом
    return "is subject to conscription or may serve under contract";
  } else if (years >= 27 || years <= 59) {
    // Мможе служити за контрактом
    return "may serve under contract";
  }
  return "";
}

// Виведення даних чоловіка
void printManData(const Man& man) {
  std::cout << "Surname: " << man.surname << "\n"
               "Name: " << man.name << "\n"
               "Name from father: " << man.nameFromFather << "\n"
               "Sum sallary: " << man.years << "\n"
               "Recommendation: " << searchRecommendation(man.years) << '\n';
  std::cout << '\n';
}

int main() {
  Man man;

  // Отримання даних чоловіка
  getManData(man);
  
  // Виведення даних чоловіка
  printManData(man);
  return 0;
}