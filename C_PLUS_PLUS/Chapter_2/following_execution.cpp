#include <iostream>

void doB(){
  std::cout << "In doB()\n";
}

void doA(){
  std::cout << "In doA()\n";

  doB();

  std::cout << "Ending doA()\n";
}


int main(){

  std::cout << "Starting main()\n";

  doA();

  std::cout <<"Ending main()\n";


  return 0;
}
