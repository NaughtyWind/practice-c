#include <iostream>
#include <array>

using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " * " << i << " = " << i * j << "\t";
        }
        cout << endl;
    }

    const int row = 3;
    const int col = 5;

    int dobuleArr[row][col] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
    };



    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "outer index " << i << ", inner index " << j << ", value is " << dobuleArr[i][j] << endl;
        }
    }
    return 0;
}