//BOJ_11724_연결_요소의_개수
#include <iostream>
#include <vector>
using namespace std;

bool visited[1001];     // 방문기록
vector<int> vec[1001];  // 인접리스트
int cnt = 0;            // 연결요소의 개수

// 방문기록을 남김
void dfs(int x) {
    visited[x] = true;
    for (int i = 0; i < vec[x].size(); i++) {       // 최대값은 벡터 원소에 해당하는 크기만큼 반복
        int y = vec[x][i];
        if (!visited[y]) {
            dfs(y);
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int comp, n;                // 연결요소 comp, 간선의 개수 n
    cin >> comp >> n;
    
    for (int i = 0; i < n; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        // 무방향 그래프
        vec[num1].push_back(num2);
        vec[num2].push_back(num1);
    }

    for (int i = 1; i <= comp; i++) {
        if (visited[i] == false) {
            cnt++;
            dfs(i);
        }
    }
    cout << cnt << "\n";
    return 0;
}