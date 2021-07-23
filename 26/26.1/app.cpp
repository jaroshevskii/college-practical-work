#include <iostream>

struct Employee {
  std::string name1;  // Призвіще
  std::string name2;  // Ім'я
  std::string name3;  // По батькові
  
  uint16_t nYearsWorked;  // Кількість відпрацьованих років

  double a;  // Сума проданого товару
  double b;  // Комісійна винагорода
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

  std::cout << "> Years worked = ";
  employee.nYearsWorked = getValue();

  std::cout << "> A = ";
  std::cin >> employee.a;
  std::cout << '\n';
}

double setB(const uint16_t& nYearsWorked, const uint16_t& a) {
  uint8_t pesent = 10;

  if (a >= 5000.0) {
    pesent += 5;
  }

  if (nYearsWorked > 10) {
    ++pesent;
  }
  return a - (a - a / 100.0 * pesent);
}

void printEmployee(const Employee& employee) {
  std::cout << "Name1: " << employee.name1 << '\n'
            << "Name2: " << employee.name2 << '\n'
            << "Name3: " << employee.name3 << '\n'
            << "B: " << employee.b << '\n';
  std::cout << '\n';
}

int main() {
  const uint8_t nEmployee = 3;
  Employee employee[nEmployee];

  for (auto i = 0; i < nEmployee; ++i) {
    getEmployee(employee[i]);

    // Задати комісійну винагороду
    employee[i].b = setB(employee[i].nYearsWorked, employee[i].a);
  }

  for (auto i = 0; i < nEmployee; ++i) {
    std::cout << "--------------------------------\n";
    
    printEmployee(employee[i]);
  }

  std::cout << "--------------------------------\n";
  std::cout << '\n';
  return 0; 
}