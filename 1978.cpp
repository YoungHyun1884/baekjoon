#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num < 2) return false;  // 1과 0은 소수가 아님
    for (int i = 2; i * i <= num; i++) {  // √num까지만 검사
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N, n, count = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> n;
        if (is_prime(n)) count++;  // 소수이면 count 증가
    }
    
    cout << count << endl;
    return 0;
}
