#include <iostream>
#include <cmath>

using namespace std;

double sum(double a, double b) {
  return a + b;
}

int main() {
  double a = 6.20, b = 0.05;
  double getsum = sum(a, b);

  cout << "sum is " << getsum << endl;
  cout << "sqrt is " << sqrt(getsum) << endl;

  return 0;
}