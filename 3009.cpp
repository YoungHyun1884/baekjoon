#include <iostream>
using namespace std;
#include <algorithm>

int main(){
    int a1,a2, b1, b2 ,c1, c2,x,y;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> c1 >> c2;
    if(a1 == b1){
        x = c1;
    }
    else if (a1 == c1)
    {
        x = b1;
    }
    else if (b1 == c1)
    {
        x = a1;
    }

    if(a2 == b2) {
        y = c2;
    }
    else if (a2 == c2)
    {
        y = b2;
    }
    else if (b2 == c2)
    {
        y = a2;
    }

    cout << x << " " << y << endl;
    
    
    
    



}