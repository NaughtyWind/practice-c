#include <iostream>
#include <ctime>

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

    float second = 1.0;
    clock_t delay = second * CLOCKS_PER_SEC;
    clock_t start = clock();

    while (clock() < second * delay) {
    }

    cout << "done" << endl;

    double money[5] = {4.99, 5.01, 1.11, 2.22};
    for (double item : money) {
        cout << item << endl;
    }

    // char ch;
    // int count = 0;
    // cout << "input your characters; enter # to quit;" << endl;
    // // cin 读取char值时，将忽略空格和换行。发送给cin的输入会被缓冲，当按下enter时，缓冲才会被发送给程序，
    // // 所以使用cin.get(char) 代替cin >> ch，这样不会忽略空格和换行
    // cin.get(ch); // 获取一个字符串
    // while (ch != '#') {
    //     cout << ch;
    //     count++;
    //     cin.get(ch); // 准备获取下一个字符串
    // }

    // cout << endl << count << " characters read" << endl;

    cout << "input your characters; enter # to quit;" << endl;

    char ch1;
    int count1 = 0;
    cin.get(ch1);
    // 测试键盘模拟eof结束
    while (cin.fail() == false) {
        cout << ch1;
        ++count1;
        cin.get(ch1);
    }
    cout << endl << count1 << " characters read" << endl;

    return 0;
}