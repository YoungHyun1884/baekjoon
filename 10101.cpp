#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    
    int a, b, c;
    vector<int> vec;
    for(int i = 0; i<3; i++){
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);

        sort(vec.begin(), vec.end());
        if(vec.front() > vec[1]+vec[2]){
            cout << "Invalid";
        }
        else if (vec[0] == vec[1] && vec[1] == vec[2])
        {
            cout << "Equilateral";
        }
        else if ()
        {
            /* code */
        }
        
        
    }
        
        
        
    
}