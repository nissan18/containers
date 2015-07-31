#include "rational.h"

ostream& operator<<(ostream& os, const Rational& r) {
  os << r._numerator << '/' << r._denominator;
  return os;
}

Rational::Rational() : _numerator(0), _denominator(1)
{}

Rational::Rational(int numerator, int denominator) : _numerator(numerator), _denominator(denominator)
{}
