#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int T, N, C, sum;
    float G, GPA;
    cin >> T;
    while(T-->0){
        cin >> N;
        sum = 0;
        GPA = 0;
        for(int i = 0; i < N; i++){
            cin >> C;
            cin >> G;
            sum += C;
            GPA += C * G;
        }
        cout << sum <<" "<<GPA/sum<<"\n";
    }
}