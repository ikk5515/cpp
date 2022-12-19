//BOJ_10699_오늘 날짜
#include <iostream>
#include <ctime>

using namespace std;

int main() {

    time_t curTime = time(NULL);
    struct tm *t = localtime(&curTime);

    cout << t->tm_year + 1900 << "-" << t->tm_mon+1 << "-" << t->tm_mday;
    return 0;
}