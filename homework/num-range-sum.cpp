#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    char ch;
    cout << "input your range num; please use ; to split" << endl;
    while((ch = cin.get()) != EOF) {
        str += ch;
    }

    str.at(0);

    int s1 = str.at(0) - '0';
    int s2 = str.at(2) - '0';

    int sum = 0;
    for (int i = s1; i <= s2; i++) {
        sum += i;
    }

    cout << "sum is " << sum << endl;

    return 0;
}