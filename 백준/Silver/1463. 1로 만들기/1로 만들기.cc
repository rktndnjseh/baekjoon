#include <iostream>
using namespace std;
int d[1000001];

int make_it_one(int n){   
    for(int i=2;i<n+1;i++){
        d[i] = d[i-1]+1;
        if(i % 2 == 0)
        d[i] = min(d[i], d[i/2] + 1);
        if(i % 3 == 0)
        d[i] = min(d[i], d[i/3] + 1);
    }
    return d[n];
}

int main(void){
    int n;
    cin >> n;
    cout << make_it_one(n);   
}