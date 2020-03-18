#include <iostream>
#include <string>

using namespace std;

/**
 * 指针 带星号输出是值，不带星号是内存地址
 */
int main() {
  string arr[7] = {"lxy", "is", "?"};
  string *apointer = arr;
  string name = "lxy";
  string *npointer = &name;
  cout << "apointer: " << apointer << endl;
  cout << "npointer: " << npointer << endl;
  cout << "apointer[0]: " << apointer[0] << endl;
  cout << "*apointer: " << *apointer << endl;
  cout << "*npointer: " << *npointer << endl;

  cout << "\n";

  struct person {
    string name;
    int age;
  };

  person p = {"lxy", 25};
  person *strucPointer = &p;
  cout << "strucPointer: " << strucPointer << endl;

  cout << "\n";

  int *pt = new int;
  *pt = 1001;
  cout << "*pt: " << *pt << endl;
  cout << "pt: " << pt << endl;
  delete pt;

  int *pArr = new int[10];
  cout << "0: " << pArr[0] << ", 1: " << pArr[1] << endl;
  delete []pArr;
  
  cout << "\n";

  int num = 123;
  int *pNum = &num;
  cout << "before *pNum: " << *pNum << endl;
  cout << "before pNum: " << pNum << endl;
  *pNum += 1;
  cout << "after *pNum: " << *pNum << endl;
  cout << "after pNum: " << pNum << endl;

  cout << "\n";

  int mylist[3] = {100, 200, 300};
  int *pList = mylist;
  cout << "before pList: " << pList << endl;
  cout << "before *pList: " << *pList << endl;
  pList += 1;
  cout << "after pList: " << pList << endl;
  cout << "after *pList: " << *pList << endl;

  return 0;
}