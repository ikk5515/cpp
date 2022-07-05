//BOJ_4948_베르트랑_공준
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int arr[246913] = { false };        // 소수는 false
    int N, count_Num = 0;
    arr[0] = arr[1] = true;

    while (1)
    {
        cin >> N;
        if (N == 0) {
            break;
        }
        for (int i = 2; i < sqrt(N*2); i++) {
            if (arr[i] == false) {
                for (int j = i+i; j <= N*2; j += i) {
                    arr[j] = true;
                }
            }
        }
        count_Num = 0;
        for (int i = N+1; i <= N*2; i++) {
            if (!arr[i]) {
                count_Num += 1;
            }
        }
        cout << count_Num << "\n";
    }
    return 0;
    
}