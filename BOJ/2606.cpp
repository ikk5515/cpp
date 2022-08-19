//BOJ_2606_바이러스
#include <iostream>
#include <vector>
using namespace std;
bool visited[101];              // 인접 리스트
vector<int> graph[101];
int cnt = 0;

// dfs(깊이 우선 탐색)
void dfs(int x) {
    visited[x] = true;
    for (int i = 0; i < graph[x].size(); i++) {         // 인접한 노드 사이즈만큼 탐색
        int y = graph[x][i];
        if (!visited[y]) {          // 방문하지 않았으면, 즉 visited가 False 일 때 not을 해주면 True가 되므로 아래 dfs실행
            dfs(y);
            cnt++;
        }
    }
}

int main() {
    int comp, n;                // 노드의 개수 comp, 엣지의 개수 n
    cin >> comp >> n;
    for (int i = 0; i < n; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        graph[num1].push_back(num2);
        graph[num2].push_back(num1);
    }   // 엣지 연결
    dfs(1);
    cout << cnt << "\n";
    return 0;
}