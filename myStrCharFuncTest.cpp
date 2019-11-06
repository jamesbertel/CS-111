#include <iostream>
using namespace std;
#include "myStrCharFunc.h"

int main()
{
  char wd[10] = "Hello";
  cout << wd << endl; //Hello

  //testing myStrCpy
  myStrcpy(wd, "hi");
  cout << wd << endl; //Hi

  //testing strlen
  cout << myStrlen(wd) << endl; //2

  //testing myToUpper
  cout << myToUpper('a') << endl; //A
  cout << myToUpper('t') << endl; //T
  cout << myToUpper('F') << endl; //F

  return 0;
}
