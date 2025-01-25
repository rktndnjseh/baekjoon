#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> d(n + 1, vector<int>(10, 0));
    
    for (int i = 0; i < 10; i++) {
        d[1][i] = 1;
    }
    
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = j; k < 10; k++) {
                d[i][j] = (d[i][j] + d[i-1][k]) % 10007;
            }
        }
    }
    
    int result = 0;
    for (int i = 0; i < 10; i++) {
        result = (result + d[n][i]) % 10007;
    }
    
    cout << result << endl;
    
    return 0;
}
