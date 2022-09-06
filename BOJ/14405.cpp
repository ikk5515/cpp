//BOJ_14405_피카츄
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    char str[5001] = { 0, };
    bool flag = true;

    cin >> str;
    int i = 0;
    while(str[i] != '\0') {
        if (str[i] == 'p' && str[i+1] == 'i') {
            i += 2;
        } else if(str[i] == 'k' && str[i+1] == 'a') {
            i += 2;
        } else if(str[i] == 'c' && str[i+1] == 'h' && str[i+2] == 'u') {
            i += 3;
        } else {
            flag = false;
            break;
        }
    }
    if (flag == true) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}