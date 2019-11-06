#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  const double TAX = .0775; //sales tax rate
  string name; //sales person's name
  string date; //date
  string item; //item name
  double price; //item price
  double salesTax; //sales tax of the item
  double total; //item total (price + sales tax)

  //inputs for name, date, item, and price
  cout << "Enter your first name: ";
  cin >> name;
  cout << "Enter today's date(mm/dd/yyyy): ";
  cin >> date;
  cout << "Enter item name: ";
  cin >> item;
  cout << "Enter item price: ";
  cin >> price;

  //process to find total price
  salesTax = price * TAX;
  total = price + salesTax;

  //outputs
  cout << endl <<  "------------------------------" << endl << endl;
  cout << "\"Your friendly neighborhood store\"" << endl << endl;
  cout << setw(30) << date << endl << setw(30)<< name << endl << endl;
  cout << fixed << setprecision(2);
  cout << left << setw(20) << item << right << setw(10) << price << endl;
  cout << left << setw(20) << "Sales tax" << right << setw(10) << salesTax << endl;
  cout << left << setw(20) << "Total" << right << setw(10) << total << endl << endl;
  cout << "------------------------------" << endl;
  cout << "Thank you for shopping with us!" << endl << endl;

  return 0;
}
