#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstring>

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

  //
  // Part 17.4
  //
  cout << "Part 17.4" << endl;

  string anotherString("abcdefg");
  cout << anotherString[anotherString.length()] << endl;
  cout << anotherString[5] << endl;
  anotherString[5] = 'X';
  cout << anotherString << endl;

  string anotherString2("abcdefg");
  //cout << anotherString2.at(anotherString2.length()) << endl;
  cout << anotherString2.at(5) << endl;
  anotherString2.at(5) = 'X';
  cout << anotherString2 << endl;

  string c_string("abcdefg");
  cout << strlen(c_string.c_str()) << endl;
  const char *szString = "abcdefg";

  if (memcmp(c_string.data(), szString, c_string.length()) == 0)
    cout << "Strings are equal" << endl;
  else
    cout << "Strings are not equal" << endl;

  string text("sphinx of black quartz, judge my vow");
  char some_buf[20];
  int someLength = text.copy(some_buf, 5, 10);
  some_buf[someLength] = '\0';

  cout << some_buf << endl;

  //
  // Part 17.5
  //
  cout << "Part 17.5" << endl;

  string string_one;
  string_one = string("One");
  cout << string_one << endl;

  const string string_two("Two");
  cout << string_two << endl;

  string_one.assign(string_two);
  cout << string_one << endl;

  string_one = 'a';
  cout << string_one << endl;

  string chained;
  string_one = chained = "six";
  cout << string_one << " " << chained << endl;

  const string mhm("abcdefg");
  string dest;

  dest.assign(mhm, 2, 3);
  cout << dest << endl;
  dest.assign("abcdefg", 4);
  cout << dest << endl;
  dest.assign(5, 'Q');
  cout << dest << endl;

  string blue("blue");
  string red("red");

  cout << "normal: " << blue << " " << red << endl;
  swap(blue, red);
  cout << "swapped: " << blue << " " << red << endl;
  blue.swap(red);
  cout << "normal: " << blue << " " << red << endl;

  //
  // Part 17.6
  //
  cout << "Part 17.6" << endl;

  string xxx("xxx");
  cout << xxx << endl;

  xxx += string("yyy");
  cout << xxx << endl;

  xxx.append(string("zzz"));
  cout << xxx << endl;

  xxx.append(xxx, 3, 3);
  cout << xxx << endl;

  xxx += "xxx";
  cout << xxx << endl;

  xxx.append("yyy");
  cout << xxx << endl;

  xxx.append("heyHo!", 3);
  cout << xxx << endl;

  xxx += ' ';
  cout << xxx << endl;

  xxx.push_back('!');
  cout << xxx << endl;

  //
  // Part 17.7
  //
  cout << "Part 17.7" << endl;

  string aaa("aaa");
  cout << aaa << endl;

  aaa.insert(2, string("bbb"));
  cout << aaa << endl;

  aaa.insert(4, "ccc");
  cout << aaa << endl;

  const string insert_str("012346557");
  aaa.insert(2, insert_str, 3, 4);
  cout << aaa << endl;

  aaa.insert(aaa.length(), "qwert", 2);
  cout << aaa << endl;

  aaa.insert(2, 4, 'o');
  cout << aaa << endl;

  return 0;
}
