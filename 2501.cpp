#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> num_list;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            num_list.push_back(i);
        }
    }

    // 벡터 크기를 int로 변환하여 비교
    int size_int = static_cast<int>(num_list.size());

    if (k <= size_int) {
        cout << num_list[static_cast<size_t>(k - 1)] << endl;  // ✅ `size_t` 변환 추가
    } else {
        cout << "0" << endl;
    }

    return 0;
}
