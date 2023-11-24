#include <iostream>

class Animal {
public:
  // Constructor
  Animal(std::string name, int age) : name(name), age(age) {}

  // member function
  void makeSound() const { std::cout << "Generic animal sound!" << std::endl; }

private:
  std::string name;
  int age;
};
int main() {
  Animal cat("Whiskers", 3);
  Animal dog("Buddy", 2);

  std::cout << "Details of the cat:" << std::endl;
  std::cout << "Name: " << cat.getName() << ", Age: " << cat.getAge()
            << std::endl;

  std::cout << "Details of the dog:" << std::endl;
  std::cout << "Name: " << dog.getName() << ", Age: " << dog.getAge()
            << std::endl;

  return 0;
}
