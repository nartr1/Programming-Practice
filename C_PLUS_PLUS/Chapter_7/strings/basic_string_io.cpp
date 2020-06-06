#include <string>
#include <iostream>

int main(){
  using namespace std;

  cout << "Enter your full name: ";
  string name{};
  getline(cin, name);

  cout << "Enter your age: ";
  string age{};
  getline(cin, age);

  cout << "Your name is " << name << " and your age is " << age << "\n";

return 0;
}
