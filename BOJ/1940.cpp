//BOJ_1940_주몽
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int N, M;   // 재료의 개수 N, 갑옷을 만드는데 필요한 개수 M
    int ans = 0;
    vector<int> v;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    int start = 0;
    int end = 1;

    while (end < N) {
        if (v[start] + v[end] == M) {
            ans++;
        }
        if (end < N-1) {
            end++;
        } else {
            start++;
            end = start+1;
        }
    }
    cout << ans << "\n";
    return 0;
}