#include <iostream>
using namespace std;

int bridge(int n, int m) {
    int dp[n+1][m+1] ={0};
    
    for (int j = 1; j <= m; j++) {
        dp[1][j] = j;
    }
    
    for (int i = 2; i <= n; i++) {
        for (int j = i; j <= m; j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
          //  cout<<"i는 "<<i<<"입니다. "<<"j는 "<<j<<"입니다. "<<"dp[i][j]는 "<<dp[i][j]<<" :::::::::    "<<"dp[i-1][j-1]: "<<dp[i-1][j-1]<<" + "<<"dp[i][j-1]: "<<dp[i][j-1]<<"입니다.\n";
        }
    }
    return dp[n][m];
}

int main() {
    int n, m;
    int T;
    cin>>T;
 for(int i=0;i<T;i++){
    cin >> n >> m;
    (n <= m)?
    cout << bridge(n, m)<<"\n"
    :cout << bridge(m, n)<<"\n";
 }   
    

    return 0;
}