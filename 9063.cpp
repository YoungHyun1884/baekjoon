#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
    int n,x,y;
    vector<int> x_vec;
    vector<int> y_vec;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y; 
        x_vec.push_back(x);
        y_vec.push_back(y);
    }
    sort(x_vec.begin(), x_vec.end());
    int min_x = x_vec.front();
    int max_x = x_vec.back();

    sort(y_vec.begin(), y_vec.end());
    int min_y = y_vec.front();
    int max_y = y_vec.back();

    int len_x = max_x - min_x;
    int len_y = max_y - min_y;

    cout << len_x * len_y << endl;



}