// BOJ_2738_행렬 덧셈
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, m; cin >> n >> m;

    int a[101][101];
    int b[101][101];

    for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
            cin >> a[i][j];
       } 
    }
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
            cin >> b[i][j];
       } 
    }

    for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
            cout << a[i][j] + b[i][j] << " ";
       }
       cout << "\n";
    }
    return 0;
}