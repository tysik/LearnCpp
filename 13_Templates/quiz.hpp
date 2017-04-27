#ifndef QUIZ_HPP
#define QUIZ_HPP

#include <string>

template <typename T>
class Pair1
{
private:
  T value1_, value2_;

public:
  Pair1(T value1, T value2) : value1_(value1), value2_(value2) {}
  ~Pair1() {}

  T& first() { return value1_; }
  const T& first() const { return value1_; }
  T& second() { return value2_; }
  const T& second() const { return value2_; }
};

template <typename T1, typename T2>
class Pair
{
private:
  T1 v1_;
  T2 v2_;

public:
  Pair(T1 v1, T2 v2) : v1_(v1), v2_(v2) {}
  ~Pair() {}

  T1& first() { return v1_; }
  const T1& first() const { return v1_; }
  T2& second() { return v2_; }
  const T2& second() const { return v2_; }
};

template <class T>
class StringValuePair : public Pair<std::string, T>
{
public:
  StringValuePair(const std::string& key, const T& value) : Pair<std::string, T>(key, value) {}
};

#endif // QUIZ_HPP
