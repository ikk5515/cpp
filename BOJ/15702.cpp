//BOJ_15702_중간고사_채점
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>>vec;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, M;                   // 문제의 개수 N개, 응시자 수 M명
    int score[101] = { 0, };
    int hap;                    // 각 학생의 점수
    int person;
    int ans_per = 0, ans_score = 0;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }

    for (int i = 0; i < M; i++) {
        char ch[101];
        hap = 0;
        cin >> person;
        for (int j = 0; j < N; j++) {
            cin >> ch[j];
            if (ch[j] == 'O') {
                hap += score[j];
            }
        }
        ans_score = max(ans_score, hap);
        vec.push_back(make_pair(person, hap));
    }

    stable_sort (vec.begin(), vec.end());

    for (int i = 0; i < M; i++) {
        if (ans_score == vec[i].second) {
            ans_per = vec[i].first;
            break;
        }
    }
    cout << ans_per << " " << ans_score << "\n";
    return 0;
}