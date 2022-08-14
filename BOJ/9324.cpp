//BOJ_9324_진짜_메시지
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int M, cnt;
    string str;
    cin >> M;

    for (int i = 0; i < M; i++) {
        cnt = 0;
        int arr[101] = { 0, };
        cin >> str;
        for (int j = 0; j < str.length(); j++) {
            arr[str[j]]++;
            if (arr[str[j]] == 3) {
                arr[str[j]] = 0;
                if (str[j] == str[j+1]) {
                    arr[str[j]]--;
                    continue;
                } else {
                    cnt++;
                    cout << "FAKE" << "\n";
                    break;
                }
            }
        }
        if (cnt == 0) {
            cout << "OK" << "\n";
        }
    }
    return 0;
}