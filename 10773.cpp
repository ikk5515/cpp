#include <iostream>
#include <stack>

using namespace std;

int main() {
    int K;      // K번 입력
    int n;      // 입력할 수
    int sum = 0;    // 최종으로 적어낸 수
    cin >> K;
    stack<int> stack;

    for (int i = 0; i < K; i++) {
        cin >> n; 
        if (n != 0) {
            stack.push(n);
        }
        if (n == 0) {
            stack.pop();
        }
    }

    while (!stack.empty()) {
        sum += stack.top();
        stack.pop();
    }
    cout << sum << "\n";
    return 0;
}