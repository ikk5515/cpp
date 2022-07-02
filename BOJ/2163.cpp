//BOJ_2163_초콜릿_자르기
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, M;
    int result = 0;

    cin >> N >> M;

    if (N == M) {
        result = pow(N, 2) - 1;
    }
    else {
        result = N * M - 1;
    }

    cout << result << endl;
    return 0;
}