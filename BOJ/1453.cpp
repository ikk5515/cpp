//BOJ_1453_피시방 알바
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int count = 0;
    int arr[101] = { 0, };

    for (int i = 0; i < n; i++) {
        bool flag = true;
        int num; cin >> num;
        for (int j = 0; j < i; j++) {
            if (arr[j] == num) {
                count++;
                flag = false;
            }
        }
        if (flag) {
            arr[i] = num;
        }
    }
    cout << count << "\n";
    return 0;
}