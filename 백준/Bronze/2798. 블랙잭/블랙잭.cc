#include <iostream>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int *num = new int[N];
    for(int i = 0;i<N;i++){
        cin>> num[i];
    }   
    int sum = 0;
    for(int i = 0; i<N; i++){
        for(int j = i + 1; j < N; j++) {
            for(int k = j+1; k < N; k++){
                if(num[i] + num[j] +num[k] > M){
                    continue;
                }
                else{
                    sum = max(sum, num[i] + num[j] +num[k]);
                }
            }
        }   
    }
       
    cout<<sum;

    delete num;
    return 0;
}