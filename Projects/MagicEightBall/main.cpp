#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::rand;

int main()
{
  cout << "MAGIC 8-BALL: " << endl;

  srand(time(NULL));

  int answer = rand() % 10;

  cout << answer << endl;

  switch (answer)
  {
  case 0:
    cout << "It is certain." << endl;
    break;
  case 1:
    cout << "Don't count on it." << endl;
    break;
  case 2:
    cout << "Reply hazy, try again." << endl;
    break;
  case 3:
    cout << "It is decidedly so." << endl;
    break;
  case 4:
    cout << "Ask again later." << endl;
    break;
  case 5:
    cout << "Yes - definitely." << endl;
    break;
  case 6:
    cout << "My sources say no." << endl;
    break;
  case 7:
    cout << "Most likely." << endl;
    break;
  case 8:
    cout << "Outlook not so good." << endl;
    break;
  case 9:
    cout << "Cannot predict now." << endl;
    break;
  default:
    cout << "Very doubtful" << endl;
  }
}