#include <iostream>

struct Employee {
  std::string name1;  // Призвіще
  std::string name2;  // Ім'я
  std::string name3;  // По батькові

  uint16_t nSpentDays;  // Кількість відпрацьованих днів
  
  double sumSalary;  // Заробітня плата за позадовим окладом
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

  std::cout << "> Spent days = ";
  employee.nSpentDays = getValue();
  std::cout << '\n';
}

double setSumSalary(const uint16_t& nSpentDays) {
  const uint8_t nWorkDays = 21;  // Кількість робочих днів
  const double salary = 100.0;   // Посадовий оклад
  return salary / nWorkDays * nSpentDays;
}

void printEmployee(const Employee& employee) {
  std::cout << "Name1: " << employee.name1 << '\n'
            << "Name2: " << employee.name2 << '\n'
            << "Name3: " << employee.name3 << '\n'
            << "Sum salary: " << employee.sumSalary << '\n';
  std::cout << '\n';
}

int main() {
  const uint8_t nEmployee = 3;
  Employee employee[nEmployee];

  for (auto i = 0; i < nEmployee; ++i) {
    getEmployee(employee[i]);
    
    // Задати заробітню плату за посадовим окладом
    employee[i].sumSalary = setSumSalary(employee[i].nSpentDays);
  }
  
  for (auto i = 0; i < nEmployee; ++i) {
    std::cout << "--------------------------------\n";
    
    printEmployee(employee[i]);
  }

  std::cout << "--------------------------------\n";
  std::cout << '\n';
  return 0;
}