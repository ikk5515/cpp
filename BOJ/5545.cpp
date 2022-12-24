//BOJ_5545_최고의 피자
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    bool flag = true;
    vector<int> v;          // 토핑의 열량
    int ans = 0;
    int k = 0;              // 피자의 가격
    int n; cin >> n;        // 토핑의 종류
    int c; cin >> c;        // 도우의 가격
    int d; cin >> d;        // 토핑의 가격
    int cc; cin >> cc;      // 도우의 열량
    ans += cc;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    k += c;     // 도우의 가격을 더함

    sort(v.begin(), v.end(), greater<int>());
    
    int temp = ans / k;
    int temp2 = (ans + v[0]) / (k+d);
    int temp3 = 0;
    if (n == 1) {   // 토핑의 가격을 더함
        if (temp2 > temp) {
            ans = temp2;
            cout << ans << "\n";
            return 0;
        } else {
            ans = temp;
            cout << ans << "\n";
            return 0;
        }
    } else {
        temp2 = temp;
        for (int i = 0; i < v.size(); i++) {
            ans += v[i];
            k = c + d*(i+1);
            temp3 = ans / k;
            if (temp3 >= temp2) {
                temp2 = temp3;
            } else {
                flag = false;
                ans = temp2;
                break;
            }
        }
    }
    if (flag) {
        cout << temp3 << "\n";
    } else {
        cout << ans << "\n";
    }
    return 0;
}