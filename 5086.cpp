#include <iostream>
using namespace std;

int main() {
    int fst, scd;

    while (true) {
        cin >> fst >> scd; // ❗ 입력 먼저 받기

        // 종료 조건
        if (fst == 0 && scd == 0) break;

        if (scd % fst == 0) {
            cout << "factor\n";  // 줄바꿈 추가
        } 
        else if (fst % scd == 0) {
            cout << "multiple\n";  // 줄바꿈 추가
        } 
        else {
            cout << "neither\n";  // 줄바꿈 추가
        }
    }

    return 0;
}
