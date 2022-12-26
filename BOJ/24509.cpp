//BOJ_24509_상품의 주인은?
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int ans[100] = { 0, };
    int answer[5] = { 0, };
    int result;
    vector<vector<int>> v;
    vector<int> v2;
    bool flag = false;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        v2.clear();
        int a; cin >> a;
        v2.push_back(a);
        for (int j = 0; j < 4; j++) {
            int b; cin >> b;
            v2.push_back(b);
        }
        v.push_back(v2);
    }
    sort(v.begin(), v.end());

    for (int i = 1; i < 5 ;i++) {
        flag = false;
        for (int j = 0; j < n; j++) {
            if (v[j][i] > ans[i]) {
                result = j;
                ans[i] = v[j][i];
                answer[i-1] = v[j][0];
                flag = true;
            }
        }
        if (!flag) {
            for (int l = 0; l < n; l++) {
                if (v[l][0] != 0) {
                    result = l;
                    ans[i] = v[l][i];
                    answer[i-1] = v[l][0];
                    break;  
                }
            }
        }

        for (int k = 0; k < 5; k++) {
            v[result][k] = 0;
        }
    }
    for (int i = 0 ; i < 4; i++) {
        cout << answer[i] << " ";
    }
    return 0;

}