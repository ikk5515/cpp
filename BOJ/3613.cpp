//BOJ_3613_Java vs C++
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string str1, str2, result;

    cin >> str1;
    str2 = str1;
    sort(str1.begin(), str1.end());
    if (str1[0] == '_' || str1[0] >= 97 && str1[0] <= 122) { 
        for (int i = 0; i < str2.size(); i++) {
            if (str2[0] == '_' || str2[str2.size()-1] == '_') {
                cout << "Error!" << "\n";
                return 0;
            }
            if (str2[i] == '_') {
                if (str2[i+1] == '_') {
                    cout << "Error!" << "\n";
                    return 0;
                } else {
                    str2[i+1] -= 32;
                }
            }else {
                result.push_back(str2[i]);
            }
        }
    } else {
        if (str2[0] >= 65 && str2[0] <= 90) {
            cout << "Error!" << "\n";
            return 0;
        } else {
            for (int i = 0; i < str2.size(); i++) {
                if (str2[i] == '_') {
                    cout << "Error!" << "\n";
                    return 0;
                }
                if (str2[i] >= 65 && str2[i] <= 90) {
                    str2[i] += 32;
                    result.push_back('_');
                    result.push_back(str2[i]);
                } else {
                    result.push_back(str2[i]);
                }
            }
        }
    }
    cout << result;
    return 0;
}