//BOJ_2822_점수_계산
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    int sum_vec = 0;
    vector<int> result;
    vector<int> vec;
    vector<int> vec_cnt;

    for (int i = 0; i < 8; i++) {
        cin >> n;
        vec.push_back(n);
        vec_cnt.push_back(n);
    }

    sort(vec.begin(), vec.end(), greater<int>());

    for (int i = 0; i < 5; i++) {
        sum_vec += vec[i];
    }
    cout << sum_vec << "\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            if (vec[i] == vec_cnt[j]) {
                vec_cnt[j] = 0;
                result.push_back(j+1);
            }
        }
    }
    sort(result.begin(), result.end());
    for (int i = 0; i < 5; i++) {
        cout << result[i] << " ";
    }
    return 0;
}