#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

string a;

std::vector<std::vector<string>> a_list;
std::vector<string> result;

int main(){

    for(int i = 0; i < 5 ; i++){
        std::vector<string> a_1d_list;

        for(int j=0; j < 5; j++){
            cin >> a;
            if(a != " "){
                a_1d_list.push_back(a);
            }
        }
        a_list.push_back(a_1d_list);
    }

    for(int i = 0; i< 15; i++){
        for(int j = 0; j < 5; j++){
            if(i < a_list[j].size()) {
                result.push_back(a_list[j][i]);
            }
        }
    }
    for(int i = 0; i < result.size(); i++){
        cout << result[i];    
    }
    return 0;

}