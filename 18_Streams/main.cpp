#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  //
  // Part 18.1
  //
  cout << "Part: 18.1" << endl;

  cout << "Enter your age: " << endl;

  int age;
  //cin >> age;
  age = 2;

  if (age <= 0) {
    cerr << "Oops!" << endl;
    exit(1);
  }

  cout << "You entered " << age << " years" << endl;

  //
  // Part 18.2
  //
  cout << "Part: 18.2" << endl;

//  char buf[10]{'a'};
//  cin >> setw(10) >> buf;
//  cout << buf << endl;

//  char ch;
//  while (cin.get(ch))
//    cout << ch;

//  char strBuf[11];
//  cin.get(strBuf, 11);
//  cout << strBuf << endl;

//  cin.get(strBuf, 11);
//  cout << strBuf << endl;

//  char strBuf[11];
//  cin.getline(strBuf, 11);
//  cout << strBuf << endl;

//  cin.getline(strBuf, 11);
//  cout << strBuf << endl;

//  cout << cin.gcount() << " characters read" << endl;

  string str;
  getline(cin, str);
  cout << str << endl;

  return 0;
}
