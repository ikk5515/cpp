//BOJ_4673_셀프_넘버
#include <iostream>
using namespace std;

int d(int n) {
    int a = n;
    for (int j = 0; j < 5; j++) {
        a += n%10;
        n /= 10;
    }
    if (a > 10000) {
        return 0;
    } else {
        return a;
    }
}

int main() {
    int arr[10001] = { 0, };

    for (int i = 1; i <= 10000; i++) {
        arr[i] = i;
    }
    for (int i = 1; i <= 10000; i++) {
        arr[d(i)] = 0;
    }
    for (int i = 1; i <= 10000; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << "\n";
        }
    }
    return 0;
}