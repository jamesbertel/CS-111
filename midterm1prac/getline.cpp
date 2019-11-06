#include <iostream>
using namespace std;


int main()
{
  string date, name;

  cout << "Enter today's date (mm/dd/yy): ";
  cin >> date;  //<=== The user intends to enter 9/26/16
  cin.ignore(1000,'\n');
  cout << "Enter sale's person's full name: ";
  getline(cin, name);  //<== The user intends to enter Mike Smith

  cout << name << endl;  //LAST LINE  


  return 0;
}
