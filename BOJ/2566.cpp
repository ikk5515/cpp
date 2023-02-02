// BOJ_2566_최댓값
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int arr[10][10] = { 0, };

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }

    int max_num = -1;
    int max_i = -1, max_j= -1;

    for(int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i][j] > max_num) {
                max_num = arr[i][j];
                max_i = i+1;
                max_j = j+1;

            }
        }
    }
    cout << max_num << "\n";
    cout << max_i << " " << max_j;
    return 0;
}