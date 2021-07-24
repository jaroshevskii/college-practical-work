#include <iostream>

struct Employee {
  std::string name1;  // Призвіще
  std::string name2;  // Ім'я
  std::string name3;  // По батькові
  
  uint16_t idWork;  // Ідентифікатор роботи

  uint16_t nSpentDays;    // Кількість відпрацьованих днів
  uint16_t nSpentHours;   // Кількість відпрацьованих годин
  double profitReceived;  // Отриманий прибуток

  double sumSpentDays;    // Заробітня плата за відпрацьовані дні
  double sumSpentHours;   // Заробітня плата за відпрацьовані години
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

  std::cout << "> ID work = ";
  employee.idWork = getValue();
  
  if (employee.idWork == 0) {
    std::cout << "> Spend days = ";
    employee.nSpentDays = getValue();
  } else if (employee.idWork == 1) {
    std::cout << "> Spent hours = ";
    employee.nSpentHours = getValue();
  } else if (employee.idWork == 2) {
    std::cout << "> Profit received = ";
    std::cin >> employee.profitReceived;
  }
  std::cout << '\n';
}

// Вивести дані працівника
void printEmployee(const Employee& employee) {
  std::cout << "Name1: " << employee.name1 << '\n'
            << "Name2: " << employee.name2 << '\n'
            << "Name3: " << employee.name3 << '\n';

  if (employee.idWork == 0) {
    std::cout << "Sum spent days: " << employee.sumSpentDays;
  } else if (employee.idWork == 1) {
    std::cout << "Sum spent hours: " << employee.sumSpentHours;
  } else if (employee.idWork == 2) {
    std::cout << "Sum pesent: " << employee.sumPesent;
  }
  std::cout << '\n';
}

// Задати заробіню плату за відпрацьовані дні
double setSumSpentDays(const uint16_t& nSpentDays) {
  const uint16_t nWorkDays = 21;  // Кількість робочих днів
  const double salary = 100.0;    // Посадовий оклад
  
  // Заробітня плата за відроблені дні
  double sumSpentDays = salary / nWorkDays * nSpentDays;

  // Заробітня плата з урахуванням премії
  if (nSpentDays == nWorkDays) {
    sumSpentDays += sumSpentDays * 25.0 / 100.0;
  } else {
    sumSpentDays += sumSpentDays * 10.0 / 100.0;
  }

  // Заробітня плата з урахуванням податків
  sumSpentDays -= sumSpentDays * 19.5 / 100.0;
  return sumSpentDays;
}

// Задати заробітню плату за відпрацьовані години
double setSumSpentHours(const uint16_t& nSpentHours) {
  const double payPerHour = 2.5;  // Оплата за годину

  // Заробітня плата за відпрацьовані години
  double sumSpentHours = nSpentHours * payPerHour;

  // Заробітня плата з урахуванням податків
  sumSpentHours -= sumSpentHours * 19.5 / 100.0;
  return sumSpentHours;
}

// Задати заробітню плату за відсотом
double setSumPesent(const uint16_t& profitReceived) {
  const double pecent = 25.0;  // Відсоткок
  const double salary = 100.0;  // Посадовий оклад

  // Заробітня плата за відсотком
  double sumPesent = profitReceived * pecent / salary;

  // Заробітня плата з урахуванням податків
  sumPesent -= sumPesent * 19.5 / salary;
  return sumPesent;
}

int main() {
  const uint8_t nEmployee = 3;
  Employee employee[nEmployee];

  for (auto i = 0; i < nEmployee; ++i) {
    // Отримати дані працівника
    getEmployee(employee[i]);
    
    if (employee[i].idWork == 0) {
      // Задати заробіню плату за відпрацьовані дні
      employee[i].sumSpentDays = setSumSpentDays(employee[i].nSpentDays);
    } else if (employee[i].idWork == 1) {
      // Задати заробітню плату за відпрацьовані години
      employee[i].sumSpentHours = setSumSpentHours(employee[i].nSpentHours);
    } else if (employee[i].idWork == 2) {
      // Задати заробітню плату за відсотом
      employee[i].sumPesent = setSumPesent(employee[i].profitReceived);
    }
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