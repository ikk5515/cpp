//BOJ_14659_한조서열정리하고옴ㅋㅋ
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count = 0, number = 0, result = 0;
    int arr[30001] = { 0, };

    for (int i = 0; i < N; i++) {
        cin >> number;
        arr[i] = number;
    }

    for (int i = 0; i < N; i++) {
        count = 0;
        for (int j = i+1; j < N; j++) {
            if (arr[i] > arr[j]) {
                count++;
            } else {
                break;
            }
        }
        result = max(result, count);
    }
    cout << result;
    return 0;
}