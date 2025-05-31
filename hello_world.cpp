#include <iostream>

int
main()
{
std::cout << "Введите имя пользователя: ";
  std::string name;
  std::getline(std::cin, name);
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
