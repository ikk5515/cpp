//BOJ_9946_단어_퍼즐
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str1, str2;
    string end = "END";
    int i = 1;

    while (1)
    {
        cin >> str1 >> str2;

        if ((str1.compare(end) == 0) && (str2.compare(end) == 0)) {
            break;
        }
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if (str1 == str2) {
            cout << "Case " << i << ": " << "same" << "\n"; 
            i++;
        } else {
            cout << "Case " << i << ": " << "different" << "\n"; 
            i++;
        }
    }
    return 0;
}