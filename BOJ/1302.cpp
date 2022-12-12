//BOJ_1302_베스트셀러
#include <iostream>
#include <map>
using namespace std;

map <string, int> m;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string bookName;
        cin >> bookName;
        m[bookName]++;
    }
    
    for (auto result : m) {
        cnt = max(cnt, result.second);
    }
    
    for (auto result : m) {
        if (cnt == result.second) {
            cout << result.first;
            return 0;
        }
    }
}