//숫자만_추출
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    vector<int> sr;
    int cnt = 0;

    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] > 47 && str[i] < 58) {
            sr.push_back(str[i]-48);
        }
    }
    int num = 0;
    int n = sr.size();
    for (int i = 0; i < sr.size(); i++) {
        num += sr[i] * pow(10, n);
        n -= 1;
    }
    num /= 10;
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cnt++;
        }
    }
    cout << num << "\n" << cnt;
    return 0;
}