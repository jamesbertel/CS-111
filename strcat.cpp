/********************************************************
CS111 Lab on c-strings
Template prepared by Kazumi Slott
********************************************************/
#include <iostream>
using namespace std;

void myStrcat(char dest[], const char source[]);

int main()
{
  char str2[80] = "Dave "; //puts "Dave" in string
  myStrcat(str2, "Smith");
  cout << str2 << endl; //Dave Smith

  return 0;
}

void myStrcat(char dest[], const char source[])
{
  int d;

  //Move d to the end of dest ('\0')
  for(d=0; dest[d] != '\0'; d++)
    ;
  
  //put source into dest
  int i;
  /*for(i=0; source[i] != '\0'; d++, i++)
    dest[d] = source[i];
  OR,
  */

  for(i=0; source[i] != '\0'; i++)
    dest[d+i] = source[i];
}
