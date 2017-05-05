#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

//
// Part 18.5
//
bool InputMatches(string strUserInput, string strTemplate) {
  if (strTemplate.length() != strUserInput.length())
    return false;

  for (uint idx = 0; idx < strTemplate.length(); ++idx) {
    switch (strTemplate[idx]) {
    case '#':
      if(!isdigit(strUserInput[idx]))
        return false;
      break;
    case '_':
      if (!isspace(strUserInput[idx]))
        return false;
      break;
    case '@':
      if (!isalpha(strUserInput[idx]))
        return false;
      break;
    case '?':
      break;
    default:
      if (strUserInput[idx] != strTemplate[idx])
        return false;
    }
  }

  return true;
}

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

//  string str;
//  getline(cin, str);
//  cout << str << endl;

  //
  // Part 18.3
  //
  cout << "Part: 18.3" << endl;

//  cout.setf(ios::showpos);
//  cout << 27 << endl;
//  cout.unsetf(ios::showpos);
//  cout << 28 << endl;

//  //cout.unsetf(ios::dec);
//  //cout.setf(ios::hex);
//  cout.setf(ios::hex, ios::basefield);
//  cout << 27 << endl;

//  cout << hex << 27 << endl;
//  cout << 28 << endl;
//  cout << dec << 29 << endl;

//  cout << true << " " << false << endl;
//  cout.setf(ios::boolalpha);
//  cout << true << " " << false << endl;
//  cout << noboolalpha << true << " " << false << endl;
//  cout << boolalpha << true << " " << false << endl;

//  cout << 5 << endl;
//  cout.setf(ios::showpos);
//  cout << 5 << endl;
//  cout << noshowpos << 5 << endl;
//  cout << showpos << 5 << endl;

//  cout << 12345678.9 << endl;
//  cout.setf(ios::uppercase);
//  cout << 12345678.9 << endl;
//  cout << nouppercase << 12345678.9 << endl;
//  cout << uppercase << 12345678.9 << endl;

//  cout << 27 << endl;
//  cout.setf(ios::dec, ios::basefield);
//  cout << 27 << endl;
//  cout.setf(ios::oct, ios::basefield);
//  cout << 27 << endl;
//  cout.setf(ios::hex, ios::basefield);
//  cout << 27 << endl;

//  cout << dec << 27 << endl;
//  cout << oct << 27 << endl;
//  cout << hex << 27 << endl;

//  cout << showpoint << endl;
//  cout << setprecision(3) << 123.456 << endl;
//  cout << setprecision(4) << 123.456 << endl;
//  cout << setprecision(5) << 123.456 << endl;
//  cout << setprecision(6) << 123.456 << endl;
//  cout << setprecision(7) << 123.456 << endl;

//  cout << fixed << endl;
//  cout << setprecision(3) << 123.456 << endl;
//  cout << setprecision(4) << 123.456 << endl;
//  cout << setprecision(5) << 123.456 << endl;
//  cout << setprecision(6) << 123.456 << endl;
//  cout << setprecision(7) << 123.456 << endl;

//  cout << scientific << endl;
//  cout << setprecision(3) << 123.456 << endl;
//  cout << setprecision(4) << 123.456 << endl;
//  cout << setprecision(5) << 123.456 << endl;
//  cout << setprecision(6) << 123.456 << endl;
//  cout << setprecision(7) << 123.456 << endl;

//  cout << -12345 << endl;
//  cout << setw(10) << -12345 << endl;
//  cout << setw(10) << left << -12345 << endl;
//  cout << setw(10) << right << -12345 << endl;
//  cout << setw(10) << internal << -12345 << endl;

//  cout.fill('*');
//  cout << -12345 << endl;
//  cout << setw(10) << -12345 << endl;
//  cout << setw(10) << left << -12345 << endl;
//  cout << setw(10) << right << -12345 << endl;
//  cout << setw(10) << internal << -12345 << endl;

  //
  // Part 18.4
  //
  cout << "Part: 18.4" << endl;

  stringstream os;
  os << "en garde!" << endl;
  cout << os.str();

  os.str("A, ha!\n");
  cout << os.str();

  os << "Omg! Huhuhuu!" << endl;
  string someString1, someString2;
  os >> someString1;
  os >> someString2;
  cout << someString1 << " - " << someString2 << endl;

  stringstream os2;
  int nvalue = 12345;
  double dvalue = 56.78;
  os2 << nvalue << " " << dvalue;

  string st1, st2;
  os2 >> st1 >> st2;
  cout << st1 << " " << st2 << endl;

  stringstream os3;
  os3 << "12345 67.89";
  int nval;
  double dval;
  os3 >> nval >> dval;

  cout << nval << " " << dval << endl;

  os.str(""); // Erase buffer
  os2.str(string());
  os3.str("");
  os3.clear();

  cout << os.str();
  cout << os2.str();
  cout << os3.str();

  //
  // Part 18.5
  //
  cout << "Part: 18.5" << endl;

//  string strName;
//  string strValue;

//  while (true) {
//    cout << "Enter your name: ";
//    getline(cin, strName);

//    bool bRejected = false;
//    for (unsigned int idx = 0; idx < strName.length() && !bRejected; ++idx) {
//      if (isalpha(strName[idx]))
//        continue;

//      if (strName[idx] == ' ')
//        continue;

//      bRejected = true;
//    }

//    if (bRejected)
//      continue;

//    cout << "Enter a phone number (###) ###-####: ";
//    getline(cin, strValue);
//    if (InputMatches(strValue, "(###) ###-####"))
//      break;
//  }

//  cout << "Correct name: " << strName << endl;
//  cout << "Correct number: " << strValue << endl;

  int nAge;

//  while (true) {
//    cout << "Enter your age: ";
//    cin >> nAge;

//    if (cin.fail()) {
//      cin.clear();
//      cin.ignore(1000, '\n');
//      continue;
//    }

//    cin.ignore(1000, '\n');
//    if (cin.gcount() > 1)
//      continue;

//    if (nAge <= 0)
//      continue;

//    break;
//  }

  while (true) {
    cout << "Enter your age: ";
    string strAge;
    cin >> strAge;

    bool bValid = true;
    for (uint idx = 0; idx < strAge.length(); ++idx) {
      if (!isdigit(strAge[idx])) {
        bValid = false;
        break;
      }
    }

    if (!bValid)
      continue;

    stringstream strStream;
    strStream << strAge;
    strStream >> nAge;

    if (nAge <= 0)
      continue;

    break;
  }

  cout << "Correct age: " << nAge << endl;

  return 0;
}
