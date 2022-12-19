//BOJ_1049_끊어진 기타줄
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int p_Result = 0;   // 필요한 가격의 최솟값
    int count;
    int N, M;       // 끊어진 기타줄 N개와 브랜드 M
    cin >> N >> M;

    int arrN[101] = { 0, };
    int arrM[101] = { 0, };

    for (int i = 0; i < M; i++) {
        cin >> arrN[i] >> arrM[i];
    }

    int piece_min_Price = 10000;
    int bundle_min_Price = 10000;
    for (int i = 0; i < M; i++) { 
        bundle_min_Price = min(bundle_min_Price, arrN[i]);
        piece_min_Price = min(piece_min_Price, arrM[i]);
    }
    
    count = N;
    while (count > 0)
    {
        if (count >= 6 && bundle_min_Price <= piece_min_Price * 6) {
            count -= 6;
            p_Result += bundle_min_Price;
        } else if (count >= 6 && piece_min_Price * 6 <= bundle_min_Price) {
            count -= 6;
            p_Result += piece_min_Price * 6;
        } else if (count <= 6 && piece_min_Price * count <= bundle_min_Price) {
            count -= 1;
            p_Result += piece_min_Price;
        } else if (count <= 6 && bundle_min_Price <= piece_min_Price * count) {
            count -= 6;
            p_Result += bundle_min_Price;
        }
        else if(piece_min_Price * 6 <= bundle_min_Price) {
            count -= 1;
            p_Result += piece_min_Price;
        }
    }

    cout << p_Result << "\n";
    return 0;
}