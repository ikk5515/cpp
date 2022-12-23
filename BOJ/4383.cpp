//BOJ_4383_점프는 즐거워
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n = 0;
    vector<int> v;
    while (cin >> n)
    {
        int diff = 0;
        bool flag = true;
        v.clear();
        bool difference[3001] = { true, };   
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
            difference[i] = false;
        }
        for (int i = 0; i < n-1; i++) {
            diff = abs(v[i]-v[i+1]);
            if (difference[diff] || diff <= 0 || diff >= n) {
                flag = false;
                break;
            } else {
                difference[diff] = true;
            }
        }
        if (flag) {
            cout << "Jolly" << "\n";
        } else {
            cout << "Not jolly" << "\n";
        }
    }
    return 0;
}