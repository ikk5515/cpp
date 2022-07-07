//BOJ_10989_수_정렬하기_3
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    scanf("%d", &N);
    int arr[10001] = { 0 , };

    for (int i = 0; i < N; i++) {
        int tmp;
        scanf ("%d", &tmp);
        arr[tmp - 1]++;
    }

    for (int i = 0; i < 10000; i++) {
        if (arr[i] != 0) {
            for (int j = 0; j < arr[i]; j++) {
                printf("%d\n", i+1);
            }
        }
    }
    return 0;
}