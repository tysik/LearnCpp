#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
  try {
    double a = -1.0;

    {
      throw a;
    }

    throw -1;
  }
  catch (int x) {
    cerr << "Catched: " << x << endl;
  }
  catch (double) {
    cerr << "Catched double" << endl;
  }
  catch (const string &str) {
    cerr << "Catched string: " << str << endl;
  }

  try {
    throw 4.5;
    cout << "This will never print" << endl;
  }
  catch (double x) {
    cerr << "We caught double: " << x << endl;
  }

  double x = -10.0;
  try {
    if (x < 0.0)
      throw "Cannot take sqrt of negative number.";

    cout << "Sqrt(" << x << ") = " << sqrt(x) << endl;
  }
  catch (const char* exception) {
    cerr << "Error: " << exception << endl;
  }

  cout << "Continuing on our merry way!" << endl;

  return 0;
}
