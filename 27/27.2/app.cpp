#include <iostream>

struct Student {
  std::string name1;  // Призвіще
  std::string name2;  // Ім'я
  std::string name3;  // По ботькові

  uint16_t english;  // Кількість балів за англійську
  uint16_t match;    // Кількість балів за математику

  double averageMark;  // Середній бал
};

uint16_t getValue() {
  uint16_t value;
  std::cin >> value;
  return value;
}

void getStudent(Student& student) {
  std::cout << "> Name1 = ";
  std::cin >> student.name1;

  std::cout << "> Name2 = ";
  std::cin >> student.name2;
  
  std::cout << "> Name3 = ";
  std::cin >> student.name3;
  
  std::cout << "> English = ";
  student.english = getValue();
  
  std::cout << "> Match = ";
  student.match = getValue();
  std::cout << '\n';
}

double setAverageMark(const uint16_t& english, const uint16_t& match) {
  return (english + match) / 2.0;
}

void printStudent(const Student& student) {
  std::cout << "Name1: " << student.name1 << '\n'
            << "Name2: " << student.name2 << '\n'
            << "Name3: " << student.name3 << '\n'
            << "Average mark: " << student.averageMark << '\n';
  std::cout << '\n';
}

void printNonification(const uint16_t& averageMark) {
  std::cout << "Notification: ";
  if (averageMark > 99) {
    std::cout << "XXXXX_TRUE_XXXXX\n";
  } else if (averageMark <= 99) {
    std::cout << "XXXXX_FALSE_XXXXX\n";
  }
  std::cout << '\n';
}

int main() {
  const uint8_t nStudents = 3;
  Student student[nStudents];

  for (auto i = 0; i < nStudents; ++i) {
    // Отримати дані студента
    getStudent(student[i]);
    
    // Задати середній бал
    student[i].averageMark = setAverageMark(student[i].english, student[i].match);
  }
  
  for (auto i = 0; i < nStudents; ++i) {
    std::cout << "--------------------------------\n";
    
    // Вивести дані студента
    printStudent(student[i]);

    printNonification(student[i].averageMark);
  }

  std::cout << "--------------------------------\n";
  std::cout << '\n';
  return 0;
}