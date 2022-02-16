#include <iostream>

int main() {
  // Declaring the currency
  double pesos, reais, soles, dollars;
  // Googling the current value to 1 US dollar, then saving it to a value
  double pesosConversion = 0.00025, reaisConversion = 0.19, solesConversion = 0.26;
  // One peso is 0.00025
  std::cout << "Please enter the number of Colombian Pesos: ";
  std::cin >> pesos;
  // One reais is 0.19
  std::cout << "Please enter the number of Brazilian Reais: ";
  std::cin >> reais;
  // One Soles is 0.26
  std::cout << "Please enter the number of Peruvian Soles: ";
  std::cin >> soles;
  // Now to convert the values I need to multiply the conversion rate with the amount of currency at hand, then saving it to the value of dollars
  dollars = (pesosConversion * pesos) + (reaisConversion * reais) + (solesConversion * soles);
  // Lastly, display the amount in US dollars
  std::cout << "Total: US Dollars = $" << dollars << "! Nice." << std::endl;
}