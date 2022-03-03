#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string alphabet{"` abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key{" `XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
  int response{0};
  bool repeat{true};
  string secretMessage{}, encryptedMessage{}, decryptedMessage{};

  do
  {
    cout << "Hello there Special Agent [REDACTED]. Would you like to send an encrypted message?" << endl;
    cout << endl;
    cout << "1) Yes, I would" << endl;
    cout << "2.) Not at the moment" << endl;
    cin >> response;
    switch (response)
    {
    case 1:
      cout << "Roger, standing by..." << endl;
      repeat = false;
      break;
    case 2:
      cout << "Very well sir, stay frosty" << endl;
      repeat = false;
      break;
    default:
      cout << "Invalid Input" << endl;
    }
  } while (repeat);

  cin.ignore();
  getline(cin, secretMessage);

  for (char c : secretMessage)
  {
    int letterPos = alphabet.find(c);
    if (letterPos != string::npos)
    {
      char newChar{key.at(letterPos)};
      encryptedMessage += newChar;
    }
    else
    {
      encryptedMessage += c;
    }
  }

  cout << "Encrypted Message: " << encryptedMessage << endl;

  for (char c : encryptedMessage)
  {
    int letterPos = key.find(c);
    if (letterPos != string::npos)
    {
      char newChar{alphabet.at(letterPos)};
      decryptedMessage += newChar;
    }
    else
    {
      decryptedMessage += c;
    }
  }
  cout << "Decrypted Message: " << decryptedMessage << endl;
  cout << endl;
}