//BOJ_14647_준오는 조류혐오야!!
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m;   //행과 열을 입력받음
    int count = 0, result = 0;
    int row[501] = { 0, };
    int col[501] = { 0, };
    cin >> n >> m;

    int num = 0;
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) {
            cin >> num;
            while (num != 0)
            {
                if (num % 10 == 9) {
                    row[i]++;
                    col[j]++;
                }
                num /= 10;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        count += row[i];            // 9의 전체개수를 구함
        result = max(row[i], result);
    }
    for (int i = 0; i < m; i++) {
        result = max(col[i], result);
    }

    cout << count - result;     // 9의 전체개수 - 최대갯수
    return 0;
}