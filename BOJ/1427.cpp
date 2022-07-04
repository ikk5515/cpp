//BOJ_1427_소트인사이드
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char num;
    vector <char> ch;

    while (1)
    {
        cin.get(num);
        if (num == '\n') {
            break;
        }
        ch.push_back((int)num);

    }
    sort(ch.begin(), ch.end(), greater<int>());

    for (int i = 0 ; i < ch.size(); i++) {
        cout << ch[i];
    }
    return 0;
}