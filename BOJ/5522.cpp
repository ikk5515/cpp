//BOJ_5522_์นด๋_๊ฒ์
#include <iostream>
using namespace std;

int main() {
    int a, result = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        result += a;
    }
    cout << result;
    return 0;
}