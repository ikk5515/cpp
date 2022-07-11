//BOJ_22993_서든어택3
#include <iostream>
#include <stdbool.h>
#include <algorithm>
using namespace std;

long long points[100001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    bool flag = true;
    long long point = 0, result = 0;
    
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> point;
        points[i] = point;
    }

    sort(points+1, points+n);
    result = points[0];
    for (int i = 0; i < n; i++) {
        if (result > points[i+1]) {
            result += points[i+1];
        } else if (result == points[i+1]) {
            flag = false;
            break;
        } else {
            flag = false;
            break;
        }
    }
    if (flag == true) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}