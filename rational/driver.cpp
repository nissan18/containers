#include "rational.h"
#include <iostream>

using namespace std;

int main() {
  Rational r(3,5), q(1,2);
  cout << "Hello rational\n";
  cout << r << ", " << q << endl;

  // cout << r << " + " <<  q << " = " << r + q << endl;
  // cout << r << " - " <<  q << " = " << r - q << endl;
  // cout << r << " * " <<  q << " = " << r * q << endl;
  // cout << r << " / " <<  q << " = " << r / q << endl;

  return 0;
}
