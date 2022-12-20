//BOJ_1157_단어 공부
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int arr[200] = { 0, };
    bool flag = false;
    string s;
    int count = 0;
    char result;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        char c = toupper(s[i]);
        arr[c]++;
    }
    for (int i = 0; i < end(arr)-begin(arr); i++) {
        if (arr[i] != 0) {
            if (arr[i] > count) {
                count = arr[i];
                result = i;
                flag = true;
            } else if (arr[i] == count) {
                flag = false;
            }
        }
    }
    if (flag) {
        cout << result << "\n";
    } else {
        cout << "?" << "\n";
    }
    
    return 0;
}