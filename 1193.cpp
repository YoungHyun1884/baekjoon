#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int a, n;
    string result;
    cin >> n;
    int max = 1;
    int layer = 2;
    if(n<2){
        result = "1/1";
    }
    else{
        while(n>max){
        max = max + layer;
        layer++;
    }
        a = n-max;
        for(int i = 1; i < a + 1; i++){
        result = to_string(i) + "/" + to_string(layer);
        layer--;
        }

        cout << result;
    }

    

}