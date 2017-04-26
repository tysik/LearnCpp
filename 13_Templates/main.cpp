#include <iostream>

#include "cents.hpp"
#include "array.hpp"

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

  return 0;
}
