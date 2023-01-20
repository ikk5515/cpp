// BOJ_2346_풍선 터뜨리기
#include <iostream>
#include <deque>
#include <cmath>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    deque<pair<int,int>> dq;
    int n; cin >> n;
    for (int i = 1; i <= n ; i++) {
        int tmp; cin >> tmp;
        dq.push_back({i,tmp});
    }

    while (!dq.empty()) {
        auto tmp = dq.front();
        cout << tmp.first << " ";
        
        int ball_num = tmp.second;
        dq.pop_front();

        if (ball_num > 0) {
            ball_num--;
            while (ball_num != 0) {
                dq.push_back(dq.front());
                dq.pop_front();
                ball_num--;
            }
        } else {
            while (ball_num != 0) {
                dq.push_front(dq.back());
                dq.pop_back();
                ball_num++;
            }
        }
    }
    return 0;
}