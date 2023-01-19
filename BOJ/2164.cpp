// BOJ_2164_카드2
#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    queue<int> q;
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    queue<int> q2;
    while(q.size() != 1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front() << "\n";
    
    return 0;
}