//BOJ_24390_또 전자레인지야?
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int count = 1;
    int tenSec = 10;
    int halfSec = 30;
    int oneMin = 60;
    int tenMin = 600;

    int input = 0;
    int sec = 0;

    string str1; cin >> str1;
    
    input += (str1[0]-'0') * 600;    
    input += (str1[1]-'0') * 60;
    input += (str1[3]-'0') * 10;
    input += (str1[4]-'0');

    while (input != 0) {
        if (input >= tenMin) {
            input -= tenMin;
            count++;
            continue;
        } else if (input >= oneMin) {
            input -= oneMin;
            count++;
            continue;
        } else if (input >= halfSec) {
            input -= halfSec;

        } else {
            input -= tenSec;
            count++;
            continue;
        }
    }
        cout << count << "\n";
    return 0;
}