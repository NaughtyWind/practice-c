#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {  
  array<int, 5> arr = {1, 2, 3, 4, 5};
  cout << arr[0] << endl;
  cout << &arr << endl;

  vector<int> vt;
  vt.push_back(1);
  vt.push_back(2);
  cout << vt[0] << endl;
  cout << &vt << endl;

  return 0;
}