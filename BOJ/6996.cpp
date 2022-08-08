//BOJ_6996_애너그램
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    string r_str1, r_str2;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str1 >> str2;
        r_str1 = str1, r_str2 = str2;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if (str1 == str2) {
            cout << r_str1 << " & " << r_str2  << " are " << "anagrams."<< "\n";
        } else {
            cout << r_str1 << " & " << r_str2  << " are NOT " << "anagrams."<< "\n";
        }
    }
    return 0;
}