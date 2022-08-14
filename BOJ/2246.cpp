// BOJ_2246_콘도_선정
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, D, C;                            // 콘도의 개수 N, 바닷가로부터 거리 D, 콘도의 숙박비 C
    int cnt = 0;                            // 임의의 수
    int ans = 0;                            // 후보 콘도의 개수
    int price[10001] = { 0, };
    int dis[10001] = { 0, };

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> D >> C;
        dis[i] = D;
        price[i] = C;
    }

    for (int i = 0; i < N; i++) {
        cnt = 0;
        for (int j = 0; j < N; j++) {
            if (i != j) {
                if (dis[i] > dis[j]) {
                    if (price[i] >= price[j]) {     // 거리가 가깝지만 숙박비가 싼 경우
                        cnt++;
                        break;
                    }
                }
                if (price[i] > price[j]) {
                    if (dis[i] >= dis[j]) {         // 숙박비가 싸지만 거리가 가까운 경우
                        cnt++;
                        break;
                    }
                }
            }
        }
        if (cnt == 0) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}