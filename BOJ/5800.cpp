//BOJ_5800_성적통계
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int k, n;                       // 반의 수 k, 학생 수 n  
    int smax = -1, smin = 101, lgap = -1;
    cin >> k;
    int arr[101] = { 0, };

    for (int i = 0; i < k; i++) {
        cin >> n;
        
        for (int j = 0 ; j < n; j++) {
            cin >> arr[j];
            smax = max(arr[j], smax);
            smin = min(arr[j], smin);
        }
        sort(arr, arr+n, greater<int>());
        
        for (int p = 0; p < n-1; p++) {
            lgap = max(arr[p]-arr[p+1], lgap);
        }
        cout << "Class " << i+1 << "\n";
        cout << "Max "<< smax << ", "<< "Min " << smin <<", " << "Largest gap " << lgap << "\n";
        smax = -1, smin = 101, lgap = -1;
    }
    return 0;
}