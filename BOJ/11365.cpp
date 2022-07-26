//BOJ_11365_!밀비_급일
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;

    while (1)
    {
        getline(cin, str);
        if (str == "END") {
            break;
        }
        reverse(str.begin(), str.end());
        cout << str << "\n";
    }
    return 0;
}