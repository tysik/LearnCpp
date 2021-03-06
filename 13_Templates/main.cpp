#include <iostream>
#include <cstring>
#include <iomanip>

#include "cents.hpp"
#include "array.hpp"
#include "static_array.hpp"
#include "storage.hpp"
#include "storage8.hpp"
#include "quiz.hpp"

using namespace std;

// 13.1
template <typename T>
const T& t_max(const T& x, const T& y) {
  return (x > y) ? x : y;
}

template <class T>
T t_average(T* array, int length) {
  T sum = 0;

  for (int idx = 0; idx < length; ++idx)
    sum += array[idx];

  sum /= length;

  return sum;
}

//
// 13.7
//
template <typename T, int size>
void print(StaticArray<T, size>& array) {
  for (int idx = 0; idx < size; ++idx)
    cout << array[idx] << " ";
}

template <int size>
void print(StaticArray<char, size>& array) {
  for (int idx = 0; idx < size; ++idx)
    cout << array[idx];
}

int main() {
  //
  // 13.1
  //
  cout << endl << "Part: 13.1" << endl;

  int i = t_max(3, 7);
  cout << i << endl;

  double d = t_max(6.34, 18.253);
  cout << d << endl;

  char ch = t_max('a', '6');
  cout << ch << endl;

  //
  // 13.2
  //
  cout << endl << "Part: 13.2" << endl;

  Cents nickle(5);
  Cents dime(10);

  Cents bigger = t_max(nickle, dime);

  int array1[] = { 5, 3, 2, 1, 4 };
  cout << t_average(array1, 5) << endl;

  double array2[] = { 3.12, 3.45, 9.23, 6.34 };
  cout << t_average(array2, 4) << endl;

  Cents array3[] = { Cents(5), Cents(10), Cents(15), Cents(14) };
  cout << t_average(array3, 4) << endl;

  //
  // 13.3.
  //
  cout << endl << "Part: 13.3" << endl;

  Array<int> intArray(12);
  Array<double> doubleArray(12);

  for (int idx = 0; idx < intArray.getLength(); ++idx) {
    intArray[idx] = idx;
    doubleArray[idx] = idx + 0.5;
  }

  for (int idx = intArray.getLength() - 1; idx >= 0; --idx) {
    cout << intArray[idx] << "\t" << doubleArray[idx] << endl;
  }

  //
  // 13.4
  //
  cout << endl << "Part: 13.4" << endl;

  StaticArray<int, 12> intStaticArray;

  for (int idx = 0; idx < 12; ++idx)
    intStaticArray[idx] = idx;

  for (int idx = 11; idx >= 0; --idx)
    cout << intStaticArray[idx] << " ";
  cout << endl;

  StaticArray<double, 4> doubleStaticArray;

  for (int idx = 0; idx < 4; ++idx)
    doubleStaticArray[idx] = 4.4 + 0.1 * idx;

  for (int idx = 0; idx < 4; ++idx)
    cout << doubleStaticArray[idx] << " ";
  cout << endl;

  //
  // 13.5
  //
  cout << endl << "Part: 13.5" << endl;

  Storage<int> intValue(5);
  Storage<double> doubleValue(6.7);

  intValue.print();
  doubleValue.print();

  char* some_string = new char[40];

  cout << "Enter your name: ";
  //cin >> some_string;
  strcpy(some_string, "Mateusz");

  Storage<char*> value(some_string);

  delete[] some_string;

  value.print();

  //
  // 13.6
  //
  cout << endl << "Part: 13.6" << endl;

  Storage8<int> intStorage;

  for (int idx = 0; idx < 8; ++idx)
    intStorage.set(idx, idx);

  for (int idx = 0; idx < 8; ++idx)
    cout << intStorage.get(idx) << endl;

  Storage8<bool> boolStorage;

  for (int idx = 0; idx < 8; ++idx)
    boolStorage.set(idx, idx & 3);

  for (int idx = 0; idx < 8; ++idx)
    cout << (boolStorage.get(idx) ? "true" : "false") << endl;

  cout << "int storage: " << sizeof(intStorage) << ", bool storage: " << sizeof(boolStorage) << endl;

  //
  // 13.7
  //
  cout << endl << "Part: 13.7" << endl;

  print(intStaticArray);
  cout << endl;

  StaticArray<char, 14> charArray14;
  strcpy(charArray14.getArray(), "Hello, World!");
  print(charArray14);
  cout << endl;

  StaticArray<char, 12> charArray12;
  strcpy(charArray12.getArray(), "Hello, mom!");
  print(charArray12);
  cout << endl;

  //
  // 13.8
  //
  cout << endl << "Part: 13.8" << endl;

  Storage<int> myInt(5);
  myInt.print();

  int x = 7;
  Storage<int*> myIntPtr(&x);
  x = 2;
  myIntPtr.print();

  char *name = new char[40];
  strcpy(name, "Mateusz");
  Storage<char*> myName(name);

  delete[] name;

  myName.print();

  //
  // QUIZ
  //
  cout << endl << "QUIZ" << endl;

  std::cout << std::fixed << std::setprecision(3);
  Pair1<int> p1(5, 8);
  std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

  const Pair1<double> p2(2.3, 4.5);
  std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

  Pair<int, double> np1(5, 6.7);
  std::cout << "Pair: " << np1.first() << ' ' << np1.second() << '\n';

  const Pair<double, int> np2(2.3, 4);
  std::cout << "Pair: " << np2.first() << ' ' << np2.second() << '\n';

  StringValuePair<int> svp("Hello", 5);
  std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

  return 0;
}
