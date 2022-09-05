//BOJ_11815_짝수?_홀수?
#include <iostream>
#include <math.h>
using namespace std;

// int cnt = 1;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;              // 주어지는 수의 개수
    long long number;
    long long root;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> number;
        root = sqrt(number);
        if (number == root*root) {
            cout << 1 << " ";
        } else {
            cout << 0 << " ";
        }

        /*
        for (int i = 1; i * i <= number; i++) {
            if (number % i == 0) {
                cnt++;
            }
        }
        if (cnt%2 == 0) {
            cout << 0 << " ";
        } else {
            cout << 1 << " ";
        }
        cnt = 1;
        */
    }
    return 0;
}