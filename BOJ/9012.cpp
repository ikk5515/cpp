// BOJ_9012_괄호
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    bool flag = true;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        stack<char> st;
        flag = true;
        string str; cin >> str;

        for (int j = 0; j < str.size(); j++) {
            if (str[j] == '(') {
                st.push('(');
            } else if (str[j] == ')') {
                if (st.empty()) {
                    flag = false;
                    break;
                } else {
                    st.pop();
                }
            }
        }
        if (!st.empty() || !flag) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
    return 0;
}