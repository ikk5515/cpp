//분노 유발자
#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, tmp = 0;
    int arr[101] = { 0, };

    cin >> n;
    for (int i = 1; i <= n ; i++) {
        cin >> arr[i];
    }
    for (int i = 1 ; i <= n; i++) {
        tmp = 0;
        for (int j = i+1; j <= n; j++) {
            if (arr[i] > arr[j]) {
                tmp++;
                if (tmp == n-i) {
                    cnt++;
                }
                continue;
            } else {
                break;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}