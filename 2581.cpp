#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


bool is_prime(int k){
    if(k < 2) return false;
    if(k ==2) return true;

    for(int i = 2; i<k;i++){
        if(k%i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int m,n;
    int sum = 0;
    cin >> m;
    cin >> n;
    vector<int> prime_list;
    for(int i=m; i<n+1; i++){
        if(is_prime(i)){
            prime_list.push_back(i);
            sum = sum + i;
        }
    }
   
    if(!prime_list.empty()){
        cout << sum <<endl;
        cout << prime_list[0] << endl;
    }
    else{
        cout << "-1" <<endl;
    }
    
    
}