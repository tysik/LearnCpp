//
// 13.2
//

#ifndef CENTS_HPP
#define CENTS_HPP

#include <iostream>

class Cents
{
private:
  int cents_;

public:
  Cents(int cents) : cents_(cents) {}

  friend bool operator>(const Cents& c1, const Cents& c2) {
    return (c1.cents_ > c2.cents_);
  }

  friend std::ostream& operator<<(std::ostream& out, const Cents& cents) {
    out << cents.cents_ << " cents ";
    return out;
  }

  void operator+=(Cents cents) {
    cents_ += cents.cents_;
  }

  void operator/=(int value) {
    cents_ /= value;
  }
};

#endif // CENTS_HPP
