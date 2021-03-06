#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // C++와 C 두 표준 입출력 동기화를 해제한다.
    cin.tie(NULL);                    // 입력과 출력이 묶여있는 것을 풀어준다.

    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    sort(a, a + 3);
    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }

    return 0;
}