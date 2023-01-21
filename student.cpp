#include <iostream>

// Declare the inline function
inline void display_student(const std::string& name, int roll_no, double marks) {
  std::cout << "Name: " << name << std::endl;
  std::cout << "Roll number: " << roll_no << std::endl;
  std::cout << "Marks: " << marks << std::endl;
}

int main() {
  // Call the inline function
  display_student("John Smith", 12345, 87.5);

  return 0;
}
