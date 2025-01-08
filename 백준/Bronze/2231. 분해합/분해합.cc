#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int f;
    bool found = false;
    for (int i = 1; i < N; i++) {
        int sum = 0; 
        int num = i; 

        int temp = num;
        //각 자리수의 합 구하기
        while (temp > 0) {
            sum += temp % 10; 
            temp /= 10;
        }
        //각 자리수의 합과 생성자를 더한 값이 N일때
        if (num + sum == N) {
            cout << num;
            found = true;
            break;
        }
    
    }
    if (!found) {
        cout << 0;
    }

    return 0;
}
