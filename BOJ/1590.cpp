// BOJ_1590_캠프가는_영식
#include <iostream>
#include <climits>
using namespace std;

long long  arr[1000001];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, T; // 버스의 개수 N, 버스터미널에 도착하는 시간 T
    int S, I, C; // 버스 시작시간 S, 간격 I, 대수 C
    int ans = INT_MAX, tmp = INT_MAX;
    int cnt = 0;

    cin >> N >> T;
    for (int i = 0; i < N; i++)
    {
        cin >> S >> I >> C;
        for (int j = 0; j < C; j++) {
            arr[j] = S;
            if (arr[j] == T) {
                cout << 0;
                return 0;
            } else if ((S - T) > 0) {
                tmp = S - T;
                cnt++;
                break;
                }
            S += I;
            }
        ans = min(tmp, ans);
    }
    if (cnt != 0) {
        cout << ans;
        }
        else
        {
            cout << -1;
        }
    return 0;
}
