#include <iostream>

struct Employee {
  std::string surname;         // Призвіще
  std::string name;            // Ім'я
  std::string nameFromFather;  // По батькові
  
  int spentDays;          // Кількість відпрацьованих днів
  int hoursWorkedOut;     // Кількісь відпрацьованих годин
  double profitReceived;  // Отриманий прибуток 
  double sumSalary;       // Заробітня плата за позадовим окладом
  double sumWorkedHours;  // Заробітня плата за відпрацьовані години
  double sumPesent;       // Заробітня плата за відсотком
};

int getValue(const int minValue, const int maxValue) {
  int value;

  while (true) {
    std::cin >> value;

    if (value >= minValue && value <= maxValue) {
      return value;
    } else {
      std::cout << "ERROR: Entered value is not true\n"
                   "> ";
    }
  }
}

void getEmployeeData(Employee& employee) {
  std::cout << "> employee.surname = ";
  std::cin >> employee.surname;

  std::cout << "> employee.name = ";
  std::cin >> employee.name;

  std::cout << "> employee.nameFromFather = ";
  std::cin >> employee.nameFromFather;

  std::cout << "> employee.spentDays = ";
  employee.spentDays = getValue(0, 21);

  std::cout << "> employee.hoursWorkedOut = ";
  employee.hoursWorkedOut = getValue(0, 168);

  std::cout << "> employe.profitRecived = ";
  std::cin >> employee.profitReceived;
  std::cout << '\n';
}

double searchSumSalary(const int spentDays) {
  const int workDays = 21;      // Кількість робочих днів
  const double salary = 100.0;  // Посадовий оклад
  
  // Заробітня плата за позадовим окладом
  double sumSalary = salary / workDays * spentDays;

  // Знаходження заробітньої плати з урахуванням премії
  if (spentDays == workDays) {
    sumSalary +=  sumSalary * 25.0 / 100.0;
  } else {
    sumSalary +=  sumSalary * 10.0 / 100.0;
  }

  // Знаходження заробітньої плати з урахуванням податків
  sumSalary -= sumSalary * 19.5 / 100.0;
  return sumSalary;
}

double searchSumWorkedHours(const int hoursWorkedOut) {
  const double payPerHour = 2.5;  // Оплата за годину

  // Заробітня плата за відпрацьовані години
  double sumWorkedHours = hoursWorkedOut * payPerHour;

  // Знаходження заробітньої плати з урахуванням податків
  sumWorkedHours -= sumWorkedHours * 19.5 / 100.0;
  return sumWorkedHours;
}

double searchSumPesent(const int profitReceived) {
  const double pecent = 25.0;  // Відсоткок

  // Заробітня плата за відсотком
  double sumPecent = profitReceived * pecent / 100.0;

  // Знаходження заробітньої плати з урахуванням податків
  sumPecent -= sumPecent * 19.5 / 100.0;
  return sumPecent;
}

void printEmployeeData(const Employee& employee, const int index) {
  std::cout << "// Information about " << index << " employe\n"
               "Surname: " << employee.surname << "\n"
               "Name: " << employee.name << "\n"
               "Name from father: " << employee.nameFromFather << "\n"
               "Sum sallary: " << employee.sumSalary << "\n"
               "Sum worked hours: " << employee.sumWorkedHours << "\n"
               "Sum pecent: " << employee.sumPesent << '\n';
  std::cout << '\n';
}

int main() {
  const int size = 10;
  Employee array[size];

  for (int i = 0; i < size; ++i) {
    // Отримання даних працівника
    getEmployeeData(array[i]);

    // Знаходження заробітньої плати за посадковим окладом
    array[i].sumSalary = searchSumSalary(array[i].spentDays);

    // Знаходження заробітньої плати за відроблені години
    array[i].sumWorkedHours = searchSumWorkedHours(array[i].hoursWorkedOut);

    // Знаходження заробітньої плати за відсотком
    array[i].sumPesent = searchSumPesent(array[i].profitReceived);
  }
  
  for (int i = 0; i < size; ++i) {
    // Виведення даних працівника
    printEmployeeData(array[i], i + 1);
  }
  return 0;
}