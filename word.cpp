/***************
James Bertel
CS111
Final Lab - word.cpp
12-1-17

This function will know the number of A words, number of B words, etc...
It will also tell the the longest and shortest words for each letter.
***************/
#include <iostream>
#include <fstream>
#include "myStrCharFunc.h"
using namespace std;

//variables
const int SIZE = 26; //letters in alphabet
const int MAX = 29; //max letts in word
typedef char cstr[MAX]; 

struct let //struct for each letter
{
  int count;
  cstr shortest;
  cstr longest;
};

//prototypes
void initializeArray(let array[]);
void readFile(let array[]);
void processWord(cstr word, let array[]);
void printInfoOnOneLetter(const let array[]);
void printInfoOnAllLetters(const let array[]);

int main()
{
  //Declare the array
  let array[SIZE];

  initializeArray(array);
  readFile(array);

  //Read each word from the input file and process it
  int choice;

  do{
   cout << "\n1. Show information on all the letters." << endl;
   cout << "2. Show information on one letter." << endl;
   cout << "3. Quit the program" << endl;
   cout << "Enter your choice here: ";
   cin >> choice;

    switch(choice)
      {
      case 1: printInfoOnAllLetters(array);
	break;
      case 2: printInfoOneLetter(array);
	break;
      case 3:
	break;
      default: cout << "\nInvalid choice. Please try again." << endl;
      }

     }while(choice != 3);6

  cout << "\nThank you for using the system. Goodbye." << endl;

  return 0;
}

void initializeArray(let array[])
{
  for(int i = 0; i < SIZE; i++)
    {    
      array[i].count = 0; 
      myStrcpy(array[i].shortest, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
      myStrcpy(array[i].longest, "");
    }
}

void readFile(let array[])
{
  ifstream fin;
  cstr word;

  fin.open("project2.dat");

  if(!fin)
    cout << "Input file not found" << endl;
  else
    {
      fin >> word;
      while(fin)
	{
	  processWord(word, array);
	  fin >> word;
	}
    }
}

void processWord(cstr word, let array[])
{
  int slot = (int)(myToUpper(word[0])) - 65;
  
  array[slot].count++;

  if(myStrlen(word) >= myStrlen(array[slot].longest))
    myStrcpy(array[slot].longest, word);

  else  if(myStrlen(word) <= myStrlen(array[slot].shortest))
    myStrcpy(array[slot].shortest, word);
}

void printInfoOnOneLetter(const let array[])
{
  char letter;
  cout << "\nWhich letter are you interested in?: ";
  cin >> letter;

  int slot = ((int)(myToUpper(letter))) - 65;

  cout << "\nFrequency: " << array[slot].count << endl;

  if(array[slot].count !=0)
    {
      cout << "Shortest: " << array[slot].shortest << endl;
      cout << "Longest: " << array[slot].longest << endl;
    }
}

void printInfoOnAllLetters(const let array[])
{
  cout << endl;

  for(int i = 0; i < SIZE; i++)
    {
      cout << (char)('A' + i) << " "; //outputs each letter
      cout << array[i].count << ": "; //outputs each letter count

      if(array[i].count != 0)
	{ //outputs star for each letter count
	  for(int s = 0; s < array[i].count; s++)
            cout << "*";
	  cout << " " << array[i].longest << " - " << array[i].shortest << endl;
	} //^^ outputs longest and shortest words for each letter
      else
	cout << endl;
    }
}
