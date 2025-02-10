// #include <iostream>
// #include <vector>
// using namespace std;
//  bool prime_prime(int k){
//         if(k < 2) return false;
//         if(k ==2) return true;

//         for(int i = 2; i<k;i++){
//             if(k%i == 0){
//                 return false;
//             }
//         }
//         return true;
//     }
    

// int main(){
//     int n;
//     int prime;
//     vector<int> prime_vector;
//     vector<int> result_vector;

//     cin >> n ;
//     int rest = n;
//     bool is_prime = true;
//     if(n > 2){
//         prime_vector.push_back(2);
//         for(int i = 3; i <= n; i++){
//             for(int j = 2; j < i; j++){
//                 if(i%j == 0){
//                 is_prime =false;
//             }
//             if(is_prime == true){
//                 prime_vector.push_back(i);
//             }
//             }       
//         }
//     }
//     else if (n == 1)
//     {
//         cout << " " << endl;
//     }
    
    
   
//     while(prime_prime(rest) == true){
//         for(int i = 0; i < n; i++){
            
//             while((rest % prime_vector[i]) == 0){
//                 rest = rest / prime_vector[i];
//                 result_vector.push_back(prime_vector[i]);
//             }
            
            
//         }
       
            
//     }
    
    
// }
 
//백준11653 소인수분해
 
#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    if (N == 1) return 0;
 
    for (int i = 2; i <= N; i++) {
        while (N % i == 0) {
            cout << i << endl;
            N = N / i;
        }
    }
 
}