#include <iostream>
#include <vector>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cin >> n;
    vector<int> a;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum = sum + a[i] * a[j];
            count++; 
        }
    }
    cout << count;
}