#ifndef RATIONAL
#define RATIONAL

#include <iostream>

using namespace std;

class Rational {
  friend ostream& operator<<(ostream& os, const Rational& r);
public:
  Rational();
  Rational(int numeration, int denominator);
private:
  int _numerator;
  int _denominator;
};

#endif
