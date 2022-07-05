// BOJ_10816_숫자_카드2
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
int number[10000001] = {0,};
int countn[10000001] = {0,};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N = 0, input = 0;
  int M;

  cin >> N; // N개의 수를 처음에 입력받음
  
  for (int i = 0; i < N; i++) {
    cin >> input;
    if (input < 0) {
      countn[abs(input)]++;
      continue;
    } else {
      number[input] += 1;
    }
  }

  cin >> M;
  for (int i = 0; i < M; i++) {
    cin >> input;
    if (input >= 0) {
      cout << number[input] << " ";
    } else if (input < 0) {
      if (countn[abs(input)] > 0) {
        cout << countn[abs(input)] << " ";
      } else {
        cout << 0 << " ";
      }
    }
  }
  return 0;
}