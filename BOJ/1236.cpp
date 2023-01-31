// BOJ_1236_성 지키기
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n, m; cin >> n >> m;
    
    char arr[50][50] = { 0, };
    int x[50] = { 0, },y[50] = { 0, };
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'X') {
                x[j] = 1;
                y[i] = 1;
            }
        }
    }
    int xCnt = 0;
    for (int i = 0; i < m; i++) {
        if (x[i] == 0) {
            xCnt++;
        }
    }

    int yCnt = 0;
    for (int i = 0; i < n; i++) {
        if (y[i] == 0) {
            yCnt++;
        }
    }
    int ans = max(xCnt, yCnt);
    cout << ans;
    return 0;
}