// BOJ_2890_카약
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int arr[101] = { 0, };
    int count, cnt = 0, number = 0;
    int R, C; cin >> R >> C;
    vector<string> v;
    string s = "";
    for (int i = 0; i < R; i++) {
        cin >> s;
        v.push_back(s);
    }
    
    for (int i = 0; i < R; i++) {
        s = v[i];
        count = 0, cnt = 0, number = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'F') {
                break;
            }
            if (s[j] > 47 && s[j] < 58) {
                count++;
                number = s[j]-'0';
            } else if (count == 3 && s[j] != 'F') {
                cnt++;
            }
        }
        arr[number] = cnt;
    }

    int result[51] = { 0, };
    for (int i = 1 ; i <= 9; i++) {
        int temp[51] = { 0, };
        for (int j = 1; j <= 9; j++) {
            if (arr[i] > arr[j] && temp[arr[j]] == 0) {
                result[i]++;
                temp[arr[j]] = 1;
            }
        }
    }
    for (int i = 1; i <= 9; i++) {
        cout << result[i]+1 << "\n";
    }
    return 0;
}