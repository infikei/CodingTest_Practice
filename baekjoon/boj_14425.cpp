#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string strArr[10000];

int binarySearch(int N, string K)
{
    int left = 0;
    int right = N - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (K == strArr[mid])
        {
            return 1;
        }
        else if (K < strArr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false); // C++와 C 두 표준 입출력 동기화를 해제한다.
    cin.tie(NULL);                    // 입력과 출력이 묶여있는 것을 풀어준다.

    int N, M, ans = 0;
    string temp;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> strArr[i];
    }
    sort(strArr, strArr + N);

    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        if (binarySearch(N, temp) == 1)
            ans++;
    }
    cout << ans << "\n";

    return 0;
}