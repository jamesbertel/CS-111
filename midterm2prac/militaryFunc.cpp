#include <iostream>
using namespace std;

void showProgInfo();
void getInfo(string &name, char&gen, int &age);
bool verifyEligibility(char gen, int age);
void printLetter(bool elig, string name);

int main()
{
  showProgInfo();

  string name;
  char gender;
  int age;

  getInfo(name, gender, age);

  bool elig = verifyEligibility(gender, age);
  printLetter(elig, name);
  return 0;
}

void printLetter(bool elig, string name)
{
  if(elig==true)
    cout << "Dear " << name << ", Please consider joining the military" << endl;
  else
    cout << "Thank you for applying." << endl;
}

bool verifyEligibility(char gen, int age)
{
  if(gen != 'm' && gen != 'M')
    return false;
  else
    {
      if( age >= 18)
	return true;
      else 
	return false;
    }
}

void showProgInfo()
{
  cout << "********************************************************************" << endl;
  cout << "This program will tell you if you are eligible to join the military." << endl;
  cout << "********************************************************************" << endl;
}

void getInfo(string &name, char &gen, int &age)
{
  cout << "Enter first name: ";
  cin >> name;
  cout << "Enter gender: ";
  cin >> gen;
  cout << "Enter age: ";
  cin >> age;
}
