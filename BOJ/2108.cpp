//BOJ_2108_통계학
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    int center, minN, range = 0;
    double sAvg = 0.0;
    vector<int> v;
    array<int, 10000> Count = { 0, };
    array<int, 10000>::iterator maxIndex;
    double sum = 0.0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        v.push_back(num);
        sum += num;
        Count[num + 4000]++;
    }   
    sort(v.begin(), v.end());


    int maxNum = *max_element(v.begin(), v.end());   // 최댓값
    int minNum = *min_element(v.begin(), v.end());   // 최솟값

    maxIndex = max_element(Count.begin(), Count.end());
    if (*maxIndex != *max_element(maxIndex+1, Count.end())) {    // 개수가 다름 (최빈값은 유일한 값)
        minN = (int)(maxIndex - Count.begin()) - 4000;          // 처음 값을 넣어줄 때 4000을 더해줬으므로 다시 빼줌
    } else {    // 개수가 같음
        minN = (int)(max_element(maxIndex + 1, Count.end()) - Count.begin()) - 4000;
    }

    sAvg = sum / n;         // 산술평균
    sAvg = (int)round(sAvg);
    center = v[((n+1) / 2)-1];  // 중앙값
    range = maxNum - minNum; // 범위 (최댓값과 최솟값의 차이)

    cout << sAvg << "\n" << center << "\n" << minN << "\n" << range << "\n";
    return 0;
}