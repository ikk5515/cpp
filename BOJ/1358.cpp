//BOJ_1358_하키
#include <iostream>
#include <cmath>
using namespace std;

double W, H, X, Y, P;

bool square(double x, double y) {           // 점이 사각형 내부,경계에 있는지 확인하는 함수
    if (x >= X && x <= X+W && y >= Y && y <= Y+H) {
        return true;
    }
    else {
        return false;
    }
}

double distance(double a, double b, double aa, double bb) {     // 두 점 사이에 거리
    return (sqrt(pow(aa-a, 2) + pow(bb-b, 2)));                 // d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
}

bool semiCircle (double x, double y) {
    if (distance(x, y, X, Y+H/2) <= H/2) {        // 점과 점 사이 거리 <= 좌측에 위치한 원 반지름
        return true;                        // 점이 좌측원 안에 위치
    }
    if (distance(x, y, X+W, Y+H/2) <= H/2) {      // 점과 점 사이 거리 <= 우측에 위치한 반원의 반지름
    return true;                        // 점이 우측원 안에 위치
    }
    return false;                       // 둘 다 아닌경우 밖에 위치
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count = 0;              // 링크 안에 위치한 인원을 세기위한 변수
    
    cin >> W >> H >> X >> Y >> P;

    for (int i = 0; i < P; i++) {
        double x, y;
        cin >> x >> y;
        if (square(x,y) || semiCircle(x,y)) {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}