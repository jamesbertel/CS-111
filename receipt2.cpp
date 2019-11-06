/*
James Bertel
CS111
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double TAX = .0775; //sales tax rate
  string fullName; //sales person's name
  string date; //date
  string item; //item name
  double price; //item price
  double salesTax; //sales tax of the item
  double total; //item total (price + sales tax)
  char ch; //enter to continue

  //intro
  cout << "This program will ask you for today's date, the sale person's full name, item name, and price. It will then show the store receipt including the sales tax and total purchase price. When you are ready, press enter to continue the program.";
  cin.get(ch);

  //inputs for name, date, item, and price

  cout << "Enter today's date(mm/dd/yyyy): ";
  cin >> date;
  cin.ignore(100, '\n');
  cout << "Enter your full name: ";
  getline(cin, fullName);
  cout << "Enter item name: ";
  getline(cin, item);
  cout << "Enter item price: ";
  cin >> price;

  //process to find total price
  salesTax = price * TAX;
  total = price + salesTax;

  //outputs
  cout << endl <<  "------------------------------" << endl << endl;
  cout << "\"Your friendly neighborhood store\"" << endl << endl;
  cout << setw(30) << date << endl << setw(30)<< fullName << endl << endl;
  cout << fixed << setprecision(2);
  cout << left << setw(20) << item << right << setw(10) << price << endl;
  cout << left << setw(20) << "Sales tax" << right << setw(10) << salesTax << endl;
  cout << left << setw(20) << "Total" << right << setw(10) << total << endl << endl;
  cout << "------------------------------" << endl;
  cout << "Thank you for shopping with us!" << endl << endl;

  return 0;
}
