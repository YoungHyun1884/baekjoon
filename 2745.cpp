#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n,a,b,c,d;
    cin >> n;
    for(int i = 0; i < n; i++){
        int re;
        cin >> re;

        if(re >= 25){
            a = re / 25;
            b = (re % 25) / 10;
            c = ((re % 25) % 10) / 5;
            d =((re % 25) % 10) % 5;
            cout << a << " " << b << " " << c << " " << d << "\n";


        }
        else if (re >= 10 && re < 25)
        {
            a = 0;
            b = re / 10;
            c = (re % 10) / 5;
            d = (re % 10) % 5;
            cout << a << " " << b << " " << c << " " << d << "\n";


        }
        else if(re >= 5 && re < 10){
            a=0;
            b=0;
            c = re / 5;
            d = re % 5;
            cout << a << " " << b << " " << c << " " << d << "\n";

        }
        else if(re < 5){
            a=0;
            b=0;
            c=0;
            d = re / 1;
            cout << a << " " << b << " " << c << " " << d << "\n";

        }

    }



}