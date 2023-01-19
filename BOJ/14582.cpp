// BOJ_14582_오늘도 졌다
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    vector<int> first;
    vector<int> second;

    bool flag = false;
    for (int i = 0; i < 9; i++) {
        int n; cin >> n;
        first.push_back(n);
    }

    for (int i = 0; i < 9; i++) {
        int n; cin >> n;
        second.push_back(n);
    }

    int first_score = 0;
    int second_score = 0;
    for (int i = 0; i < 9; i++) {
        first_score += first[i];
        if (first_score > second_score) {
            flag = true;
        }
        second_score += second[i];
        
    }
    if (flag) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
    return 0;
}