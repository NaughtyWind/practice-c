#include <iostream>

using namespace std;

int main() {
  int year[6] = {1, 2, 4, 5, 11, 4556};

  const int* num = &year[1];

  cout << year[0] << endl;
  cout << &year[1] << endl;
  cout << num << endl;
  cout << *num << endl;

  return 0;
}