#include <iostream>
#include <string>

using namespace std;

struct person
{
  /* data */
  string name;
  int age;
  double money;
};


int main() {
  person p = {
    "lxy",
    25,
    16.5
  };

  cout << &p << endl;
  cout << "name: " << p.name << ", age: " << p.age << ", money: " << p.money << endl;

  person pArr[2] = {
    { "lxy", 25, 16.5 },
    { "lxy", 25, 13.5 },
  };

  cout << pArr[1].money << endl;

  return 0;
}