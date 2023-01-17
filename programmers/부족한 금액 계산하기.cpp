// programmers_Lv.1_부족한 금액 계산하기

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long all_price = 0;
    for (int i = 1; i <= count; i++) {
        all_price += (price * i);
    }
    if (money >= all_price) {
        answer = 0;
    } else {
        answer = all_price - money;
    }

    return answer;
}