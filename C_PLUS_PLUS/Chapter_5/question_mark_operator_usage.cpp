#include <iostream>

int main(){
  bool inBigClassroom { false };
  const int classSize { inBigClassroom ? 30 : 20 };
  std::cout << "The class size is: " << classSize;
return 0;
}

//The above code will compile, however the below will now. This special case is for the ? operator
/*
#include <iostream>

int main(){
  bool inBigClassroom { false };
  if (inBigClassroom)
    const int classSize { 30 };
  else
    const int classSize { 20 };
  std::cout << "The class size is: " << classSize;
return 0;
}
*/
