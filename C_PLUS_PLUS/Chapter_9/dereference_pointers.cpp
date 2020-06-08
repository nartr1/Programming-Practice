#include <iostream>

int main(){
  int value{ 5 };

  std::cout << &value << '\n'; // prints address of value
  std::cout << value << '\n'; // prints contents of value

  int *ptr{ &value }; // ptr points to value
  std::cout << ptr << '\n'; // prints address held in ptr, which is &value
  std::cout << *ptr << '\n'; // dereference ptr (get the value that ptr is pointing to)

return 0;
}
