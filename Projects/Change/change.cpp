#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  // Declaring the variables
  const int dollar{100}, quarter{25}, dime{10}, nickel{5}, penny{1};
  int cents{0}, totalDollar{0}, totalQuarter{0}, totalDime{0}, totalNickel{0}, totalPenny{0}, balance{0};

  cout << "Please input the amount in cents: ";
  cin >> cents;

  totalDollar = cents / dollar;
  balance = cents % dollar;
  totalQuarter = balance / quarter;
  balance %= quarter;
  totalDime = balance / dime;
  balance %= dime;
  totalNickel = balance / nickel;
  balance %= nickel;
  totalPenny = balance;

  cout << "Dollars: " << totalDollar << endl;
  cout << "Quarters: " << totalQuarter << endl;
  cout << "Dimes: " << totalDime << endl;
  cout << "Nickels: " << totalNickel << endl;
  cout << "Pennies: " << totalPenny << endl;
}