#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n , r;
    cin >> n;
    int a = 1;
    for(int i=0; i<n;i++){
        a = a * 2;
    }
    r = (a+1)*(a+1);
    cout << r;
}

