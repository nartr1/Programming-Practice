#include <iostream>
#include <string>

int main(){
  std::string str{"I saw a blue car today!"};
            //Start character, string length to replace into, string to put into string
  str.replace(8, 4, "blue");

  std::cout << str << '\n';

return 0;
}
