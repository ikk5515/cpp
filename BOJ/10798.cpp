//BOJ_10798_세로읽기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    char arr[10][20] = { 0, };
    for (int i = 0 ; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[j][i] >= 65 && arr[j][i] <= 90 || arr[j][i] >= 97 && arr[j][i] <= 122 || arr[j][i] >= 48 && arr[j][i] <= 57) {
                cout << arr[j][i];
            }
        }
    }
    return 0;
}