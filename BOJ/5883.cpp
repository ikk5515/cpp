// BOJ_5883_아이폰 9S
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    vector<int> all;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        all.push_back(tmp);
    }

    int max_cnt = 0;
    int cnt = 0;

    vector<int> new_one;
    for (int i = 0; i < n; i++) {
        new_one.clear();
        for (int j = 0; j < n; j++) {
            if (all[i] != all[j]) {
                new_one.push_back(all[j]);
            }
        }

        cnt = 0;
        for (int k = 0; k < new_one.size(); k++) {
            bool flag = false;
            int cnt = 1;
            for (int h = k+1; h < new_one.size(); h++) {
                if (new_one[k] != new_one[h]) {
                    break;
                } else {
                    cnt++;
                }
            }
            max_cnt = max(max_cnt, cnt);   
        }
    }
    cout << max_cnt;
}