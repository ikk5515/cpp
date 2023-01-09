//BOJ_2891_카약과 강풍
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int N, S, R = 0;        // 팀의 수 N, 카약이 손상된 팀의 수 S, 카약을 하나 더 가져온 팀의 수 R
    cin >> N >> S >> R;

    vector<int> number;
    vector<int> other;

    for (int i = 0; i < S; i++) {
        int tmp; cin >> tmp;
        number.push_back(tmp);
    }

    for (int i = 0; i < R; i++) {
        int tmp; cin >> tmp;
        other.push_back(tmp);
    }

    int cnt = number.size();
    sort(other.begin(), other.end());
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < R; j++) {
            if (number[i] == other[j]) {
                cnt--;
                number[i] = 1000;
                other[j] = 100;
                if (cnt == 0) {
                    cout << 0 << "\n";
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i < S; i++) {
        for (int j = 0; j < R; j++) {
            if (number[i] == other[j]+1 || number[i] == other[j]-1) {
                cnt--;
                other[j] = 100;
                if (cnt == 0) {
                    cout << 0 << "\n";
                    return 0;
                }
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}