// programmers_Lv.1_소수 만들기
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool nonprime[100001];
vector<int> primenumbers;


int solution(vector<int> nums) {
    nonprime[0] = nonprime[1] = true;
    for (int i = 2; i <= 100001; ++i)
    {
        if (nonprime[i]) {
            continue;       
        }
        primenumbers.push_back(i);
        
        for (int j = i + i; j <= 100001; j += i) {
            nonprime[j] = true;
        }
    }

    int answer = 0;
    
    int k = 3;
    vector<int> temp;
    for (int i = 0; i < k; i++) {
        temp.push_back(1);       
    }
    for (int i = 0 ; i < nums.size() - k; i++) {
        temp.push_back(0);
    }
    sort(temp.begin(), temp.end());
    
    vector<int> all;
    do {
        int count = 0;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == 1) {
                count += nums[i];
            }
        }
        all.push_back(count);
    } while(next_permutation(temp.begin(), temp.end()));
    
    for (int i = 0; i < all.size(); i++) {
        for (int j = 0; j < 10000; j++) {
            if (all[i] == primenumbers[j]) {
                answer++;
            } else if (all[i] < nonprime[i]) {
                break;
            }
        }
    }
    return answer;
}