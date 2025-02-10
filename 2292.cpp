#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int N;
    cin >> N; // 입력받기

    int layer = 1; // 몇 번째 껍질인지 나타내는 변수
    int range = 1; // 각 껍질의 최대값

    // N이 range에 포함될 때까지 반복
    while (N > range) {
        range += 6 * layer; // 껍질 범위 증가
        layer++; // 다음 껍질로 이동
    }

    cout << layer << endl; // 최소 이동 횟수 출력
    return 0;
}
