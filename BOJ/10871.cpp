//BOJ_10871_X보다_작은_수
#include <iostream>
#include <array>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, a;
    int result[10001] = { 0, };

    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        cin >> result[i];
    }

    for (int i = 0; i < n; i++) {
        if (result[i] < a) {
            cout << result[i] << " ";
        }
    }
    return 0;
}