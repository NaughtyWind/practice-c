#include <iostream>

using namespace std;

void sum();
void updateNum(int &num);
int getArrSum(int arr[], int len);
int getArrRangeSum(int* start, int* end);

void sum() {
  cout << "1 + 2 = " << 3 << endl;
}

void updateNum(int &num) {
  num = 4;
}

int getArrSum(int arr[], int len) {
  int sum = 0;
  for (int i = 0; i < len; i++) {
    sum += arr[i];
  }
  return sum;
}

int getArrRangeSum(int* start, int* end) {
  int sum = 0;
  const int* pt;
  for (pt = start; pt != end; pt++) {
    sum += *pt;
  }
  return sum;
}

int main() {
  sum();
  cout << "----------我是分割线----------" << endl;
  int a = 3;
  updateNum(a);
  cout << a << endl;
  cout << "----------我是分割线----------" << endl;
  int cookies[] = {1, 2, 3, 4, 5};
  int total = getArrSum(cookies, 5);
  cout << "arr sum is " << total << endl;
  cout << "----------我是分割线----------" << endl;
  int sum = getArrRangeSum(cookies, cookies + 2);
  cout << "range sum is " << sum << endl;

  return 0;
}