#include <iostream>
using namespace std;

int fibo(int n){
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}
int main(void) {
    cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    cout << fibo(n);
}
