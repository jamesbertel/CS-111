#include <iostream>
using namespace std;

int main()
{
  string fullName, address, major;
  char gender, ch;

  cout << "Enter your full name: ";
  getline(cin, fullName); //_ _ Mike _ Smith _ _<enter>
  cout << "=>" << fullName << "<=" << endl;

  cout << "Enter your gender (m or f): ";
  cin >> gender; //_ m _ _<enter>
  cout << "=>" << gender << "<=" << endl;

  // cin.ignore();
  // cin.ignore(2, '\n');
  // cin.ignore(100, '\n');
                                                                                 cout << "Enter a character: ";                                                                                             
  cin.get(ch);                                                                                                             
  cout << "=>" << ch << "<=" << endl;                                                                                          
  cout << "Enter your address: ";
  getline(cin, address); //123 1st st, sm, ca<enter>
  cout << "=>" << address << "<=" << endl;

  cout << "Enter your major: ";
  getline(cin, major); //computer science<enter>
  cout << "=>" << major << "<=" << endl;

  return 0;
}
