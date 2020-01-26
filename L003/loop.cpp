#include <iostream>

using namespace std;

int main() {
    int i = 0;
    while(i++ < 1) {
        cout << i << endl;
    }
    int j = 0;
    int m = -1;
    cout << (m = j++) << endl;

    int n = 0;
    int k = -1;
    cout << (k = ++n) << endl;

    

    return 0;
}