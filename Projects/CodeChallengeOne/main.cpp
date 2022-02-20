#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
  bool validOption = false;
  char userChoice;
  vector<int> vec {};

  do {
    cout << "\n================================================" << endl;
    cout << "Please select one of the following options: " << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "C - Deletes everything in the list" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
    cin >> userChoice;

    if(userChoice == 'p' || userChoice == 'P') {
      if (vec.size() == 0) {
        cout << "[] - the list is empty" << endl;
      } else {
          cout << "[ ";
        for (auto num : vec) {
          cout << num << " ";
        }
          cout << "]";
      }
    } else if (userChoice == 'a' || userChoice == 'A') {
      int addNum{};
      cout << "Please enter an integer: ";
      cin >> addNum;
      cout << addNum << " added";
      vec.push_back(addNum);
    } else if (userChoice == 'm' || userChoice == 'M') {
      if (vec.size() == 0) {
        cout << "Unable to calculate the mean - no data" << endl;
      } else {
        int sum{};
        for (auto num : vec) {
          sum+= num;
        }
        double mean = static_cast<double> (sum) / vec.size();
        cout << "The average of the elements in the list is " << mean << "." << endl;
      }
    } else if (userChoice == 's' || userChoice == 'S') {
      if (vec.size() == 0) {
        cout << "Unable to determine the smallest number - list is empty" << endl;
      } else {
        int smallestNum = vec.at(0);
        for (auto num : vec) {
          if (smallestNum > num) {
            smallestNum = num;
          }
        }
        cout << "The smallest number is " << smallestNum << endl;
      }
    } else if (userChoice == 'l' || userChoice == 'L') {
      if (vec.size() == 0) {
        cout << "Unable to determine the largest number - list is empty" << endl;
      } else {
        int largestNum = vec.at(0);
        for (auto num : vec) {
          if (largestNum < num) {
            largestNum = num;
          }
        }
        cout << "The smallest number is " << largestNum << endl;
      }
    } else if (userChoice == 'q' || userChoice == 'Q') {
      cout << "Goodbye..." << endl;
      validOption = true;
    } else if (userChoice == 'c' || userChoice == 'C') {
      if (vec.size() == 0) {
        cout << "Uhh... its already cleared chief" << endl;
      } else {
        vec.clear();
        cout << "List is cleared!";
      }
    } else {
      cout << "Unknown selection, please try again" << endl;
    }
  }while (!validOption);
}