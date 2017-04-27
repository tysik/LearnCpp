#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// This is not needed as in c++ 11 we have to_string function
template <typename T>
inline string ToString(T input) {
  ostringstream oStream;
  oStream << input;
  return oStream.str();
}

template <typename T>
inline bool FromString(const string& input, T &output) {
  istringstream iStream(input);
  return (iStream >> output) ? true :  false;
}

int main() {
  //
  // Part 17.2
  //
  cout << "Part 17.2" << endl;

  string source("my_string");

  string output1(source);
  cout << output1 << endl;

  string output2(source, 3);
  cout << output2 << endl;

  string output3(source, 3, 4);
  cout << output3 << endl;

  const char* newSource("my string");
  string output4(newSource);
  cout << output4 << endl;

  string output5(newSource, 4);
  cout << output5 << endl;

  string output6(4, 'Q');
  cout << output6 << endl;

  string four(ToString(4));
  string sixPseven(ToString(6.7));
  string a(ToString('A'));
  cout << four << " " << sixPseven << " " << a << endl;

  double dX;
  if (FromString("3.4", dX))
    cout << dX << endl;
  if (FromString("ABC", dX))
    cout << dX << endl;

  return 0;
}
