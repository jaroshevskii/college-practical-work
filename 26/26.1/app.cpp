#include <iostream>

struct Employee {
  std::string name1;  // Призвіще
  std::string name2;  // Ім'я
  std::string name3;  // По батькові
  
  uint16_t nYearsWorked;  // Кількість відпрацьованих років
  
  double profitReceived;  // Отриманий прибуток
  double sumPesent;       // Заробітня плата за відсотком
};

uint16_t getValue() {
  uint16_t value;
  std::cin >> value;
  return value;
}

// Отримати дані працівника
void getEmployee(Employee& employee) {
  std::cout << "> Name1 = ";
  std::cin >> employee.name1;

  std::cout << "> Name2 = ";
  std::cin >> employee.name2;
  
  std::cout << "> Name3 = ";
  std::cin >> employee.name3;

  std::cout << "> Years worked = ";
  employee.nYearsWorked = getValue();

  std::cout << "> Profit received = ";
    std::cin >> employee.profitReceived;
  std::cout << '\n';
}

// Задати заробітню плату за відсотом
double setSumPesent(const uint16_t& nYearsWorked, const uint16_t& profitReceived) {
  uint8_t pesent = 10;  // Відсоток

  if (profitReceived >= 5000.0) {
    pesent += 5;
  }

  if (nYearsWorked > 10) {
    ++pesent;
  }
  
  const double salary = 100.0;  // Посадовий оклад
  return profitReceived * pesent / salary;
}

// Вивести дані працівника
void printEmployee(const Employee& employee) {
  std::cout << "Name1: " << employee.name1 << '\n'
            << "Name2: " << employee.name2 << '\n'
            << "Name3: " << employee.name3 << '\n'
            << "Sum pesent: " << employee.sumPesent << '\n';
  std::cout << '\n';
}

int main() {
  const uint8_t nEmployee = 3;
  Employee employee[nEmployee];

  for (auto i = 0; i < nEmployee; ++i) {
    // Отримати дані працівника
    getEmployee(employee[i]);

    // Задати комісійну винагороду
    employee[i].sumPesent = setSumPesent(employee[i].nYearsWorked, employee[i].profitReceived);
  }

  for (auto i = 0; i < nEmployee; ++i) {
    std::cout << "--------------------------------\n";
    
    // Вивести дані працівника
    printEmployee(employee[i]);
  }

  std::cout << "--------------------------------\n";
  std::cout << '\n';
  return 0; 
}