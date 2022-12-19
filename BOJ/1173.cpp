//BOJ_1173_운동
#include <iostream>

using namespace std;

int main() {
    int N,m,M,T,R;
    int result = 0;
    int ans = 0;
    int count = 0;
    cin >> N >> m >> M >> T >> R;

    result = m;
    if (result + T > M) {       // 운동을 N분 할 수 없는 경우
        cout << -1 << "\n";
        return 0;
    }
    while (ans != N)
    {
        if (result + T <= M) {
            ans++;
            result += T;
            count++;
        } else if (result + T > M) {
            if (result - R < m) {
                result = m;
                count++;
            } else {
                result -= R;
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}