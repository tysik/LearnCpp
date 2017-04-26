//
// 13.3
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <assert.h>

template <class T>
class Array
{
private:
  int length_;
  T* data_;

public:
  Array() {
    length_ = 0;
    data_ = 0;
  }

  Array(int length) {
    assert(length > 0);
    data_ = new T[length];
    length_ = length;
  }

  ~Array() {
    delete[] data_;
  }

  void Erase() {
    data_ = 0;
    length_ = 0;
  }

  T& operator[](int index) {
    assert(index >= 0 && index < length_);
    return data_[index];
  }

  int getLength();
};

template <typename T>
int Array<T>::getLength() { return length_; }

#endif // ARRAY_HPP
