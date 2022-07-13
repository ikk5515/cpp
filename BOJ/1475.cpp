//BOJ_1475_방_번호
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string str;
    int arr[10] = { 0, };           // 0~9까지이므로 배열의 크기를 10으로 할당
    
    cin >> str;
    // 문자를 정수로 바꿔줌
    for (int i = 0; i < str.size(); i++) {
        arr[str[i] - '0']++;
    }

    int result = 1;
    for (int i = 0 ; i < 10; i++) {
        if (i != 6 && i != 9) {
            result = max(result, arr[i]);
        }
    }
    
    // 6,9의 개수의 합을 2로 나누고 반올림
    result = max(result, (arr[6] + arr[9] + 1) / 2);
    cout << result << "\n";
    
    return 0;    
}