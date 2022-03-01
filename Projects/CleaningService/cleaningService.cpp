#include <iostream>

// Pulling needed functions from library
using std::cin;
using std::cout;
using std::endl;

int main() {

  // Declaring needed variables
  const double smallRoomPrice{25}, largeRoomPrice{35}, salesTax{0.06};
  int smallRoom{0}, largeRoom{0};
  double cost{0}, totalCost{0}, tax{0};
  const int expirationDate{30};

  cout << "Allen's Carpet Cleaning Service" << endl;
  cout << "\nEstimate for carpet cleaning service" << endl;
  cout << "Please enter the amount of small rooms: ";
  cin >> smallRoom;
  cout << "Please enter the amount of large rooms: ";
  cin >> largeRoom;
  cout << "Price per small rooms: $" << smallRoomPrice << endl;
  cout << "Price per large room: $" << largeRoomPrice << endl;
  // Initializing the total cost
  cost = (smallRoomPrice * smallRoom) + (largeRoomPrice * largeRoom);
  cout << "Cost: " << cost << endl;
  tax = cost * salesTax;
  cout << "Tax: $" << tax << endl;
  cout << "==================================" << endl;
  totalCost = cost + tax;
  cout << "Total estimate: $" << totalCost << endl;
  cout << "This estimate is valid for " << expirationDate << " days" << endl;

  return 0;
}