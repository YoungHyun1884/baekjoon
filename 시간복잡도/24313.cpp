#include <iostream>

using namespace std;

int f(int n, int a1, int a0){
    return a1 * n + a0;
}
int g(int n){
    return n;
}


int main(){
    int a1 , a0 ,c , n0;
    cin >> a1 >> a0 ;
    cin >> c;
    cin >> n0;
    if(f(n0,a1,a0) <= c * g(n0) && a1 <= c){
        cout << "1";
    }
    else{
        cout << "0";
    }
    
}