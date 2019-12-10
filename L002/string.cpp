#include <iostream>
#include <string>

using namespace std;

int main() {
  string str = "lxy";
  string name[3] = {str, str, str};
  string getStr = str + name[1] + "  aaaa";
  cout << str << endl;
  cout << name << endl;
  cout << str + " " + name[1] << endl;

  // method
  cout << str.size() << endl;
  cout << str.length() << endl;
  cout << str.substr(0, 1) << endl;
  cout << str.at(1) << endl;
  cout << getStr.replace(0, 2, "b") << endl;

  return 0;
}