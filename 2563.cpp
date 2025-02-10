#include<iostream>
using namespace std;

int main(){
    int arr[101][101] = {0};
    int a,b;//a는 색종이 왼쪽 변과 도화지 왼쪽 변 거리(행)
            //b는 색종이 아래쪽 변과 도화지의 아래쪽 변 사이의 거리(열)
    int num; //색종이 수
    cin >> num;
    int answer = 0;
    
    for(int k=0; k < num ; k++){
        cin >> a >> b;
        for (int i = a; i < a + 10; i++)
            for (int j = b; j < b + 10; j++)
                arr[i][j] = 1;
    }
    for (int i = 1; i < 101; i++)
        for (int j = 1; j < 101; j++)
            if (arr[i][j] == 1)
                answer++;
 
    cout << answer;
    return 0;
}