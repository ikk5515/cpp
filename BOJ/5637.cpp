//BOJ_5637_가장 긴 단어
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string str1;
    string ans;
    string temp, temp2;
    vector<string> v;
    vector<string> v2;
    
    while(true) {
        getline(cin, str1);
        stringstream ss(str1);
        
        string word;
        while (getline(ss, word, ' ')) {
            v.push_back(word);
        }
        if (v[v.size()-1] == "E-N-D") {
            break;
        }
    }
    bool flag = true;
    for (int i = 0; i < v.size()-1; i++) {        
        temp = v[i];
        temp2.clear();
        flag = true;

        for (int j = 0; j < temp.size(); j++) {
            if ((temp[j] >= 'A' && temp[j] <= 'Z') || (temp[j] >= 'a' && temp[j] <= 'z') || temp[j] == '-') {
                temp2.push_back(temp[j]);
                flag = true;
            } else {
                if (temp2.length() != 0) {
                    v2.push_back(temp2);
                }
                temp2.clear();
                flag = false;
            }
        }
        if (flag) {
            v2.push_back(temp2);
        }
    }
    for (int i = 0 ; i < v2.size(); i++) {
        if (v2[i].size() != 0) {
            ans = v2[i];
            break;
        }
    }
    for (int i = 0; i < v2.size(); i++) {
        if (v2[i].size() > ans.size()) {
            ans = v2[i];
        }
    }
    transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
    cout << ans << "\n";
    return 0;
}