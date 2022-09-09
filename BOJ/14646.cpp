//BOJ_14646_욱제는_결정장애야
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;      // 메뉴의 개수 N;
    int number;
    int arr[100001] = { 0, };
    int cnt = 0, ans = 0;
 
    cin >> N;
    for (int i = 1; i <= 2*N; i++) {
        cin >> number;
        arr[number]++;
        if (arr[number] == 1) {
            cnt++;
        } else {
            cnt--;
        }
        ans = max(cnt, ans);
    }
    cout << ans;

   return 0;
}