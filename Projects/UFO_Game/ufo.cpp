#include <iostream>
#include "ufo_functions.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
  greet();
  string codeword{"codecademy"};
  string answer{"__________"};
  int misses{0};
  vector<char> incorrect{};
  bool guess = false;
  char letter{};

  while (answer != codeword && misses < 7)
  {
    display_misses(misses);
    display_status(incorrect, answer);
    cout << "Please enter your guess: " << endl;
    cin >> letter;
    for (int i{0}; i < codeword.length(); i++)
    {
      if (letter == codeword[i])
      {
        answer[i] = letter;
        guess = true;
      }
    }
    if (guess)
    {
      cout << "Correct!" << endl;
    }
    else
    {
      cout << "Incorrect! The tractor beam pulls the person in further." << endl;
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }
  end_game(answer, codeword);
}