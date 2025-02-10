#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == -1) break;  // -1 입력 시 종료

        vector<int> divisors;
        int sum = 0;

        // n의 약수 찾기 (n 제외)
        for (int i = 1; i < n; i++) {  // i < n 으로 변경
            if (n % i == 0) {
                divisors.push_back(i);
                sum += i;
            }
        }

        // 완전수 판별 및 출력
        if (sum == n) {
            cout << n << " = ";
            for (size_t i = 0; i < divisors.size(); i++) {
                cout << divisors[i];
                if (i != divisors.size() - 1) cout << " + ";
            }
            cout << endl;
        } else {
            cout << n << " is NOT perfect." << endl;
        }
    }
    return 0;
}
