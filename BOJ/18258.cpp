//BOJ_18258_큐_2
#include <iostream>
#include <queue>
#include <string>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, number;
    queue<int> q;
    string str;

    cin >> n;
    for (int i = 0; i < n; i++) {    
        cin >> str;
        
        if (str == "push") {
            cin >> number;
            q.push(number);
        } else if (str == "front") {
            if (q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << q.front() << "\n";
            }
        } else if (str == "back") {
            if (q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << q.back() << "\n";
            }
        } else if (str == "pop") {
            if (q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << q.front() << "\n";
                q.pop();
            }            
        } else if (str == "empty") {
            if (q.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (str == "size") {
            cout << q.size() << "\n";
        }
    }
    return 0;
}