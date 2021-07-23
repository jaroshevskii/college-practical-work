#include <iostream>

struct Employee {
  std::string name1;  // Призвіще
  std::string name2;  // Ім'я
  std::string name3;  // По батькові

  uint16_t nDaysWorked;  // Кількість відпрацьованих днів
  
  double a;  // Заробітня плата
};

uint16_t getValue() {
  uint16_t value;
  std::cin >> value;
  return value;
}

void getEmployee(Employee& employee) {
  std::cout << "> Name1 = ";
  std::cin >> employee.name1;

  std::cout << "> Name2 = ";
  std::cin >> employee.name2;
  
  std::cout << "> Name3 = ";
  std::cin >> employee.name3;

  std::cout << "> Days worked = ";
  employee.nDaysWorked = getValue();
  std::cout << '\n';
}

double setA(const uint16_t& nDaysWorked) {
  const uint8_t workDays = 21;  // Кількість робочих днів

  const double a = 100.0;  // Посадовий оклад
  return a / workDays * nDaysWorked;
}

void printEmployee(const Employee& employee) {
  std::cout << "Name1: " << employee.name1 << '\n'
            << "Name2: " << employee.name2 << '\n'
            << "Name3: " << employee.name3 << '\n'
            << "A: " << employee.a << '\n';
  std::cout << '\n';
}

int main() {
  const uint8_t nEmployee = 3;
  Employee employee[nEmployee];

  for (auto i = 0; i < nEmployee; ++i) {
    getEmployee(employee[i]);
    
    // Задати заробітню плату
    employee[i].a = setA(employee[i].nDaysWorked);
  }
  
  
  for (auto i = 0; i < nEmployee; ++i) {
    std::cout << "--------------------------------\n";
    
    printEmployee(employee[i]);
  }

  std::cout << "--------------------------------\n";
  std::cout << '\n';
  return 0;
}