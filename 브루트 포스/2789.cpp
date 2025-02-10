#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m,card;
    vector<int> sum_vec;
    vector<int> card_vec;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> card;
        card_vec.push_back(card);
    }
    // sort(card_vec.begin(), card_vec.end(),greater<int>()();
    sort(card_vec.begin(), card_vec.end());
    reverse(card_vec.begin(),card_vec.end());

    for(int i =0; i<card_vec.size();i++){
        int max = card_vec[i];
        for(int j=i+1; j<card_vec.size(); j++){
            int max_1 = card_vec[j];
            for(int k=j+1; k<card_vec.size();k++){
                int max_2 = card_vec[k];
                int sum = max+max_1+max_2;
                if(sum > m){
                    continue;
                }
                else{
                    sum_vec.push_back(sum);
                }
            }
        }
    }
    sort(sum_vec.begin(),sum_vec.end());
    cout << sum_vec.back() << endl;
}