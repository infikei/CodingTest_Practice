#include <iostream>
using namespace std;

int DP[1001];

int main() {
    ios_base::sync_with_stdio(false); // C++와 C 두 표준 입출력 동기화를 해제한다.
    cin.tie(NULL);                    // 입력과 출력이 묶여있는 것을 풀어준다.

    int n;
    cin >> n;

    DP[1] = 1;
    DP[2] = 2;
    for (int i = 3; i <= n; i++) {
        DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
    }

    cout << DP[n] << "\n";

    return 0;
}