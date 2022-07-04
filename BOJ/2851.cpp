//BOJ_2851_슈퍼_마리오
#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    int arr[10001] = { 0, };
    int sum = 0, result = 0;
    

    for (int i = 0; i < 10; i++) {
        int mush;
        cin >> mush;
        arr[i] = mush;
    }

    for (int i = 0; i < 10; i++) {
        sum += arr[i];
        if (sum >= 100) {
            if (abs(100 - sum) > abs(100-(sum-arr[i]))) {
                result = sum - arr[i];
                break;
            } else {
                result = sum;
                break;
            }
        } else {
            result = sum;
        }
    }
    cout << result;
    return 0;
}