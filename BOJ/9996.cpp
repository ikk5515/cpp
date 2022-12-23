//BOJ_9996_한국이 그리울 땐 서버에 접속하지
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    bool flag = false;
    string str1; cin >> str1;
    string first, second;
    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] != '*') {
            first.push_back(str1[i]);
        } else {
            break;
        }
    }

    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] == '*') {
            flag = true;
            continue;
        }
        if (flag) {
            second.push_back(str1[i]);
        }
    }
    int fullSize = first.size() + second.size();
    for (int i = 0; i < n; i++) {
        string str2; cin >> str2;
        int fCount = 0;
        int sCount = 0;
        int ssize = str2.size()-1;

        if (str2.size() < fullSize) {
            cout << "NE" << "\n";
            continue;
        }

        for (int j = 0; j < first.size(); j++) {
            if (str2[j] == first[j]) {
                fCount++;
            } else {
                continue;
            }
        }

        for (int j = second.size(); j > 0; j--) {
            if (str2[ssize--] == second[j-1]) {
                sCount++;
            } else {
                continue;
            }
        }
        if (fCount+sCount == fullSize) {
            cout << "DA" << "\n";
        } else {
            cout << "NE" << "\n";
        }
    }
    return 0;
}