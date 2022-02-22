#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
  // length, width, height should be ints
  int length{}, width{}, height{}, maxDimensions{10}, tierOneThreshold{100}, tierTwoThreshold{500};
  double baseCost{2.50}, boxVolume{}, tierOneTax{.10}, tierTwoTax{.25};

  // Ask the user for package dimension in inches
  cout << "Welcome to Allen's Postal Service!" << endl;
  cout << "\nPlease ensure your dimensions is 10 inches or less!" << endl;
  cout << "\nPlease enter the length of your box: ";
  cin >> length;
  cout << "\nPlease enter the width of your box: ";
  cin >> width;
  cout << "\nPlease enter the height of your box: ";
  cin >> height;
  // All dimension MUST be 10 inches or less. We cannot ship if over
  if (length > maxDimensions || width > maxDimensions || height > maxDimensions)
  {
    cout << "We apologize. Your shipment CANNOT be greater than 10 inches in any dimensions";
    return 0;
  };
  // Base cost $2.50
  boxVolume = length * width * height;
  // If package volume is greater than 100 cubic inches there is a 10% surcharge
  if (boxVolume > tierOneThreshold && boxVolume <= tierTwoThreshold)
  {
    cout << baseCost * tierOneTax << endl;
    baseCost += baseCost * tierOneTax;
    cout << "Adding tier one tax." << endl;
    // If package colume is greater than 500 cubic inches there is a 25% surcharge
  }
  else if (boxVolume > tierTwoThreshold)
  {
    cout << baseCost * tierTwoTax << endl;
    baseCost += baseCost * tierTwoTax;
    cout << "Adding tier two tax." << endl;
  }
  else
  {
    cout << "No tax added.";
  }
  cout << fixed << setprecision(2);
  cout << "Your total is: $" << baseCost << ".";
}