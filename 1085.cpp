#include <iostream>
using namespace std;

int main(){
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    if((w-x) > (h-y)){
        cout << (h-y) << endl;
    }
    else{
        cout << (w-x) << endl;
    }
}

