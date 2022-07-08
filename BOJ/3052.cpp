//BOJ_3052_나머지
#include <iostream>
using namespace std;

int main() {
    int arr[43] = {0,};
    int number = 0, count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> number;
        arr[number%42] = number;
    }

    for (int i = 0; i < 42; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}