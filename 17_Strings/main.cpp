#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>

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

  //
  // Part 17.3
  //
  cout << "Part 17.3" << endl;

  string source2("0123456789");
  cout << source2.length() << " " << source2.size() << endl;

  string empty, notEmpty("Haha!");
  cout << empty.empty() << " " << notEmpty.empty() << endl;

  string someString("0123456789abcdefghijk");
  cout << someString.max_size() << endl;
  cout << "Length: " << someString.length() << endl;
  cout << "Capacity: " << someString.capacity() << endl;

  string nextString("01234567");
  cout << "Length: " << nextString.length() << endl;
  cout << "Capacity: " << nextString.capacity() << endl;

  nextString.reserve(200);
  cout << "Length: " << nextString.length() << endl;
  cout << "Capacity: " << nextString.capacity() << endl;

  nextString.reserve();
  cout << "Length: " << nextString.length() << endl;
  cout << "Capacity: " << nextString.capacity() << endl;

  srand(time(0));

  string huhString;
  huhString.reserve(64);

  for (int idx = 0; idx < 64; ++idx)
    huhString += 'a' + rand() % 26;

  cout << huhString;

  return 0;
}
