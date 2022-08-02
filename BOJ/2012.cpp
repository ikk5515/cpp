//BOJ_2012_등수_매기기
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long N, num, result = 0;
    vector<long long> vct;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        vct.push_back(num);
    }

    sort(vct.begin(), vct.end());

    for (int i = 0; i < N; i++) {
        if (vct[i] == i+1) {
            continue;
        } else {
            result += abs(i+1 - vct[i]);
        }
    }
    cout << result;
    return 0;
}