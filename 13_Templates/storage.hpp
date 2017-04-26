//
// 13.5
//

#ifndef STORAGE_HPP
#define STORAGE_HPP

#include <iostream>

template <class T>
class Storage
{
private:
  T value_;

public:
  Storage(T value) {
    value_ = value;
  }

  ~Storage() {}

  void print() {
    std::cout << value_ << "\n";
  }
};

template <>
void Storage<double>::print() {
  std::cout << std::scientific << value_ << "\n";
}

template<>
Storage<char*>::Storage(char* value) {
  int length = 0;
  while (value[length] != 0)
    ++length;
  ++length;

  value_ = new char[length];

  for (int idx = 0; idx < length; ++idx)
    value_[idx] = value[idx];
}

template<>
Storage<char*>::~Storage() {
  delete[] value_;
}

#endif // STORAGE_HPP
