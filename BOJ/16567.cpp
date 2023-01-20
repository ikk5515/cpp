// BOJ_16567_바이너리 왕국
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int arr[1000001] = { 0, };
    int n, m; cin >> n >> m;

    bool flag = false;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1 && flag == false) {
            cnt++;
            flag = true;
        } else if (arr[i] == 0) {
            flag = false;
        }
    }

    for (int i = 0; i < m; i++) {
        int num; cin >> num;
        int chk = 0;
        if (num == 1) {
            int dt; cin >> dt;
            dt--;
            if (arr[dt] == 1) {
                continue;
            } else {
                arr[dt] = 1;
                if (dt-1 >= 0 && arr[dt-1] == 1) {
                    chk++;
                }
                if (dt+1 < n && arr[dt+1] == 1) {
                    chk++;
                }
            }
            if (chk == 2) {
                cnt--;
            } else if (chk == 1) {
                continue;
            } else {
                cnt++;
            }
        } else {
            cout << cnt << "\n";
        }
    }
    return 0;
}