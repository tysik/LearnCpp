//
// 13.4
//

#ifndef STATIC_ARRAY_HPP
#define STATIC_ARRAY_HPP

template <class T, int size>
class StaticArray
{
private:
  T array_[size];

public:
  T* getArray();

  T& operator[](int index) {
    return array_[index];
  }
};

template <class T, int size>
T* StaticArray<T, size>::getArray() {
  return array_;
}

#endif // STATIC_ARRAY_HPP
