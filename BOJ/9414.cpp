//BOJ_9414_프로그래밍_대회_전용_부지
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;      // 테스트 케이스 개수
    int n = 0, number;
    long long ans = 0;
    long long result = 5000000;
    vector<int>vec;

    cin >> T;
    while (n != T)
    {
        cin >> number;
        if (number != 0) {
            vec.push_back(number);
            continue;
        } else {
            sort(vec.begin(), vec.end(), greater<int>());
        }
        for (int i = 0; i < vec.size(); i++) {
            ans += 2 * pow(vec[i], i+1);
        }
        if (ans <= 5000000) {
            cout << ans << "\n";
            ans = 0;
        } else {
            cout << "Too expensive" << "\n";
            ans = 0;
        }
        n++;
        vec.clear();
    }
    return 0;
}