//BOJ_6159_코스튬 파티
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    vector<int> v;
    int count = 0;
    int n;cin >> n;
    int hap;cin >> hap;
    
    for (int i = 0; i < n; i++) {
        int num;cin >> num;
        v.push_back(num);
    }
    
    int start = 0;
    int end = 1;

    while (end < n) {
        if (v[start] + v[end] <= hap) {
            count++;
        }
        if (end < n-1) {
            end++;
        } else {
            start++;
            end = start+1;
        }
    }
    cout << count << "\n";
    return 0;
}