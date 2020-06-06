#include <iostream>

int getValueFromUser(){

  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

return input;
}

int main(){

  int num { getValueFromUser() }; // I'm actually surprised this works. The program must allocate space for an int first before calling the getValueFromUser function. This is common convention as well

  std::cout << num << " doubled is: " << num * 2 << '\n';

return 0;
}
