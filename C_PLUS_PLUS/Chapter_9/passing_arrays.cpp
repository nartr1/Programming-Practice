#include <iostream>

void passValue(int value){
  value = 99;
}

void passArray(int prime[5]){
  for(int i=0; i<5;i++){
    prime[i] = 10+i;
  }
}

int main(){
  int value = 1;
  std::cout << "before passvalue: " << value << '\n';
  passValue(value);
  std::cout << "after passvalue: " << value << '\n';


  int prime[] = {2, 3, 5, 7, 9};
  std::cout << "before passarray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << "\n";
  passArray(prime);
  std::cout << "after passarray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << "\n";

return 0;
}
