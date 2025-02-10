#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int up, down, v;
    cin >> up >> down >> v;

    int day = ceil(static_cast<double>(v - down) / (up - down));

    cout << day;
}
