#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    vector<int> result_vec;
    cin >> n;

    for(int i=1; i<n; i++){
        vector<int> vec; // 벡터를 i가 반복할때마다 초기화 해줘야함
        int result = i;

        string str_n = to_string(i); //숫자 n을 각각의 벡터에 넣기 위해 string문자열로 바꿔주고 char로 받은 후 숫자로 바꿔주기 위해 아스키코드 '0'을 빼준다. char로 받으면 '1'이라는 문자로 저장됨
        for(char c : str_n){
            vec.push_back(c - '0');
        }

        for(int j=0; j<vec.size(); j++){
            result = result + vec[j];
        }
        if(result == n){
            result_vec.push_back(i);
        }
    }
    if(result_vec.empty()){
        cout << '0';
    }
    else{
        sort(result_vec.begin(),result_vec.end());
        cout << result_vec.front();
    }
    
    
}