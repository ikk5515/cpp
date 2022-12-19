//BOJ_10807_개수 세기
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    int arr[200] = { 0, };
    int count = 0;

    cin >> n;
    for (int i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}