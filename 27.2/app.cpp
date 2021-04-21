#include <iostream>

// Маніпулятор для включення жирного тексу Linux/MacOS
std::ostream& boldOn(std::ostream& os) {
    return os << "\e[1m";
}

// Маніпулятор для відключення жирного тексу Linux/MacOS
std::ostream& boldOff(std::ostream& os) {
    return os << "\e[0m";
}

struct Student {
  std::string firstName;   // Ім'я
  std::string secondName;  // Призвіще
  std::string thirdName;    // По батькові

  int firstSubgect;   // Кількість балів за перший предмет
  int secondSubgect;  // Кількість балів за другий предмет
};

void getStudentData(Student& student) {
  std::cout << "> student.firstName = ";
  std::cin >> student.firstName;

  std::cout << "> student.secondName = ";
  std::cin >> student.secondName;
  
  std::cout << "> student.tirdName = ";
  std::cin >> student.thirdName;

  std::cout << "> student.firstSubgect = ";
  std::cin >> student.firstSubgect;

  std::cout << "> student.secondSubgect = ";
  std::cin >> student.secondSubgect;
  std::cout << '\n';
}

bool searchResult(const int firstValue, const int secondValue) {
  // Знаходження середнього значення
  int average = (firstValue + secondValue) / 2;

  if (average > 50) {
    return true;
  }
  return false;
}

void printStudentData (Student& student, const int index) {
  // Знаходимо результат вступу
  bool result = searchResult(student.firstSubgect, student.secondSubgect);

  std::cout << "// Information about " << boldOn << index << boldOff << " student\n"
               "First Name: " << boldOn << student.firstName << boldOff << "\n"
               "Second Name: " << boldOn << student.secondName << boldOff << "\n"
               "Third Name: " << boldOn << student.thirdName << boldOff << "\n"
               "First Subgect: " << boldOn << student.firstSubgect << boldOff << "\n"
               "Second Subgect: " << boldOn << student.secondSubgect << boldOff << "\n"
               "Result: " << std::boolalpha << result << '\n';
  std::cout << '\n';
}

int main() {
  const int size = 5;
  Student array[size];

  for (int i = 0; i < size; ++i) {
    // Отримання даних студента
    getStudentData(array[i]);
  }
  
  for (int i = 0; i < size; ++i) {
    // Виведення даних студента
    printStudentData(array[i], i + 1);
  }
  std::cout << '\n';
  return 0;
}
