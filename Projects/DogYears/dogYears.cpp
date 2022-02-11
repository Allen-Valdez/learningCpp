#include <iostream>

int main()
{
  std::string dogName = "Zeus";
  // My dog Zeus is 3 years old!
  int dogAge = 3,
      // The first 2 years of a dogs life equals to 21 human years
      earlyYears = 21,
      // Each year after the first 2 counts as 4 human years
      laterYears = (dogAge - 2) * 4,
      // Then to get the human yers we need to add the early and later years
      humanYears = earlyYears + laterYears;
  std::cout << "My name is " << dogName << "! Ruff ruff, I am " << humanYears << " years old in human years." << std::endl;
}