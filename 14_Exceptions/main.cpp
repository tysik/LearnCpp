#include <iostream>
#include <cmath>

#include "unwinding.hpp"

using namespace std;

//
// 14.3
//
double mySqrt(double x) {
  if (x < 0.0)
    throw "Cannot take sqrt of negative number";

  return sqrt(x);
}

int main(int argc, char *argv[]) {
//  try {
//    double a = -1.0;

//    {
//      throw a;
//    }

//    throw -1;
//  }
//  catch (int x) {
//    cerr << "Catched: " << x << endl;
//  }
//  catch (double) {
//    cerr << "Catched double" << endl;
//  }
//  catch (const string &str) {
//    cerr << "Catched string: " << str << endl;
//  }

//  try {
//    throw 4.5;
//    cout << "This will never print" << endl;
//  }
//  catch (double x) {
//    cerr << "We caught double: " << x << endl;
//  }

//  double x = -10.0;
//  try {
//    if (x < 0.0)
//      throw "Cannot take sqrt of negative number.";

//    cout << "Sqrt(" << x << ") = " << sqrt(x) << endl;
//  }
//  catch (const char* exception) {
//    cerr << "Error: " << exception << endl;
//  }

//  cout << "Continuing on our merry way!" << endl;

//  //
//  // 14.3
//  //
//  cout << endl << "Part: 14.3" << endl;

//  double d = -1.0;

//  try {
//    double a = mySqrt(d);
//    cout << "Result: " << a << endl;
//  }
//  catch (const char* e) {
//    cerr << "Error: " << e << endl;
//  }

//  cout << "Start main" << endl;

//  try {
//    first();
//  }
//  catch (int) {
//    cerr << "main caught int exception\n";
//  }

//  cout << "End main\n";

  //
  // 14.4
  //
  cout << endl << "Part: 14.4" << endl;

  try {
    throw 5;
  }
  catch (double) {
    cerr << "Caught double" << endl;
  }
  catch (...) {
    cerr << "Caught something else" << endl;
  }

  return 0;
}
