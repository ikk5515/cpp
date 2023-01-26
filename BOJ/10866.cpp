// BOJ_10866_덱
#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    deque<int> dq;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        if (str == "push_back") {
            int tmp; cin >> tmp;
            dq.push_back(tmp);
        } else if (str == "push_front") {
            int tmp; cin >> tmp;
            dq.push_front(tmp);
        } else if (str == "pop_front") {
            if (dq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        } else if (str == "pop_back") {
            if (dq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        } else if (str == "front") {
            if (dq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << dq.front() << "\n";
            }
        } else if (str == "back") {
            if (dq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << dq.back() << "\n";
            }
        } else if (str == "size") {
            cout << dq.size() << "\n";
        } else if (str == "empty") {
            if (dq.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
    }
}