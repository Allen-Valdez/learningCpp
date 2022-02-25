#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
  string phrase{"a whale of a deal!"};

  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
  vector<char> result{};

  for (auto c : phrase) {
    for (auto ch : vowels) {
      if (ch == c) {
        result.push_back(c);
        if (c == 'e' || c == 'u') {
          result.push_back(c);
        }
      }
    }
  }

  // Time to post the result
  for (auto c : result) {
    cout << c;
  }
  cout << endl;
}