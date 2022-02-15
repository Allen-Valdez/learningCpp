#include <iostream>
#include <cmath>

int main()
{
  // Declared variables
  double a, b, c, root1, root2;

  std::cout << "Please enter a number for a: ";
  std::cin >> a;
  std::cout << "Please enter a number for b: ";
  std::cin >> b;
  std::cout << "Please enter a number for c: ";
  std::cin >> c;
  // Declaring the equation for root1 that contains a +
  root1 = (-b + std::sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  // Declaring the equation for root2 that contains a -
  root2 = (-b - std::sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  std::cout << "Root 1 is " << root1 << std::endl;
  std::cout << "Root 2 is " << root2 << std::endl;

  return 0;
}