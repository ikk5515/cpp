//BOJ_2581_소수
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

int main() {
    int M, N;
    cin >> M >> N;      // M 이상 N 이하

    int check[10001] = { false };       // 소수이면 false

    check[0] = check[1] = true;         // 0과 1은 소수가 아니므로 true
    for (int i = 2; i < sqrt(N); i++) {
        if (check[i] == false)  {
            for (int j = i+i; j <= N; j += i) {
                check[j] = true;
            }
        }
    }

    vector<int> v;
    for (int i = 1; i <= N; i++) {
        if (check[i] == false) {
            if (i >= M) {
                v.push_back(i);
            }
        }
    }
    if (v.empty()) {
        cout << -1 << "\n";
    }
    else {
        cout << accumulate(v.begin(), v.end(), 0) << "\n" << *min_element(v.begin(), v.end()) << "\n";
    }
    
    
    return 0;
}