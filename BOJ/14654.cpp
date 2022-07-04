//BOJ_14654_스테판_쿼리
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int first_Team[301];            // 첫번째 팀
    int second_Team[301];           // 두번째 팀
    int score_A = 0, score_B = 0;   // 첫번째 팀과 두번째 팀의 점수
    int n, result = 0;              // n번의 라운드 수와 최대 연승의 값 result

    cin >> n;                       // 라운드 수 n을 입력받음

    for (int i = 0; i < n; i++) {   // 첫번째 팀의 가위바위보 정보
        cin >> first_Team[i];
    }
    for (int i = 0; i < n; i++) {   // 두번째 팀의 가위바위보 정보
        cin >> second_Team[i];
    }

    for (int i = 0; i < n; i++) {
        // 첫번째 팀이 이길 경우
        if(first_Team[i] == 1 && second_Team[i] == 3) {
            score_A++;
            score_B = 0;
        } else if (first_Team[i] == 2 && second_Team[i] == 1) {
            score_A++;
            score_B = 0;
        } else if (first_Team[i] == 3 && second_Team[i] == 2) {
            score_A++;
            score_B = 0;
        }
        // 두번째 팀이 이길 경우
        else if(second_Team[i] == 1 && first_Team[i] == 3) {
            score_B++;
            score_A = 0;
        } else if (second_Team[i] == 2 && first_Team[i] == 1) {
            score_B++;
            score_A = 0;
        } else if (second_Team[i] == 3 && first_Team[i] == 2) {
            score_B++;
            score_A = 0;
        }
        // 비길 경우
        else if (first_Team[i] == second_Team[i]) {
            if (score_A != 0) {     // 만약 A팀이 전에 이겼다면
                score_B++;          // B팀이 승리
                score_A = 0;
            } else {                // B팀이 전에 이겼다면
                score_A++;          // A팀이 승리
                score_B = 0;
            }
        }
        result = max({result, score_A, score_B});
    }
    cout << result;
    return 0;
}