#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  int gryffindor{}, hufflepuff{}, ravenclaw{}, slytherin{};
  int answer1{}, answer2{}, answer3{}, answer4{}, max{};
  string house{};

  cout << "The Sorting Hat Quiz!" << endl;
  cout << "Q1) When I'm dead, I want people to remember me as: " << endl;
  cout << "1) The Good" << endl;
  cout << "2) The Great" << endl;
  cout << "3) The Wise" << endl;
  cout << "4) The Bold" << endl;
  cin >> answer1;

  // Switch statement for question 1
  switch (answer1)
  {
  case 1:
    hufflepuff++;
    break;
  case 2:
    slytherin++;
    break;
  case 3:
    ravenclaw++;
    break;
  case 4:
    gryffindor++;
    break;
  default:
    cout << "Invalid input" << endl;
  }

  cout << "Q2) Dawn or Dusk?" << endl;
  cout << "1) Dawn" << endl;
  cout << "2) Dusk" << endl;
  cin >> answer2;

  // Switch statement for question 2
  switch (answer2)
  {
  case 1:
    gryffindor++;
    ravenclaw++;
    break;
  case 2:
    hufflepuff++;
    slytherin++;
    break;
  default:
    cout << "Invalid input" << endl;
  }

  cout << "Q3) Which kind of instrument most pleases your ear?" << endl;
  cout << "1) The violin" << endl;
  cout << "2) The trumpet" << endl;
  cout << "3) The piano" << endl;
  cout << "4) The drum" << endl;
  cin >> answer3;

  // switch statement for question 3
  switch (answer3)
  {
  case 1:
    slytherin++;
    break;
  case 2:
    hufflepuff++;
    break;
  case 3:
    ravenclaw++;
    break;
  case 4:
    gryffindor++;
    break;
  default:
    cout << "Invalid input" << endl;
  }

  cout << "Q4) Which road tempts you most?" << endl;
  cout << "1) The wide, sunny grassy lane" << endl;
  cout << "2) The narrow, dark, lantern-lit alley" << endl;
  cout << "3) The twisting, leaf-strewn path through woods" << endl;
  cout << "4) The cobbled street lined (ancient buildings)" << endl;
  cin >> answer4;

  // switch statement for question 4
  switch (answer4)
  {
  case 1:
    hufflepuff++;
    break;
  case 2:
    slytherin++;
    break;
  case 3:
    gryffindor++;
    break;
  case 4:
    ravenclaw++;
    break;
  default:
    cout << "Invalid input" << endl;
  }

  // If statement to find the winner
  if (gryffindor > max)
  {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max)
  {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max)
  {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max)
  {
    max = slytherin;
    house = "Slytherin";
  }
  cout << house << "!" << endl;
}