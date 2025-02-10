#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c;
    vector<int> vec;
    cin >> a >> b >> c;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    sort(vec.begin(), vec.end());

    if(vec.back() >= vec[0]+vec[1]){
        cout << vec[0] + vec[1] + vec[0]+vec[1] -1;
    }
    else{
        cout << vec[0] + vec[1] + vec[2];
    }

}