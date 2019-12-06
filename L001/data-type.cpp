//
// Created by lxy on 2019/11/23.
// 数据类型
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // 数字，通常使用double，精度高
    float a = 0.00006f;
    double b = 0.000079;
    a += 1111.f;
    b += 2222.2;
    cout << setiosflags(ios::fixed) << setprecision(3);
    cout << "a = " << a << ", b = " << b << endl;

    // 字符，c++中，单个字符赋值给变量，内部存储的为ASCII码值，对应为二进制数字，可以与数字进行运算
    int i, j;
    char c1, c2;
    c1 = 'a';
    c2 = 98;
    i = 'A';
    j = 66;
    cout << "i = " << i << ", j = " << j << ", c1 = " << c1 << ", c2 = " << c2 << endl;
    cout << "c1 - j = " << c1 - j << endl;
    return 0;
}