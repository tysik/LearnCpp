//
// 13.6
//

#ifndef STORAGE8_HPP
#define STORAGE8_HPP

template <class T>
class Storage8
{
private:
  T array_[8];

public:
  void set(int index, const T& value) {
    array_[index] = value;
  }

  const T& get(int index) {
    return array_[index];
  }
};

template <>
class Storage8<bool>
{
private:
  unsigned char data_;

public:
  Storage8() : data_(0) {}

  void set(int index, bool value) {
    unsigned char mask = 1 << index;

    if (value)
      data_ |= mask;
    else
      data_ &= ~mask;
  }

  bool get(int index) {
    unsigned char mask = 1 << index;
    return (data_ & mask) != 0;
  }
};

#endif // STORAGE8_HPP
