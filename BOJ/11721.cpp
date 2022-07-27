//BOJ_11721_열_개씩_끊어_출력하기
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
        count++;
        if (count/10 != 0) {
            cout << "\n";
            count = 0;
        }
    }
    return 0;
}