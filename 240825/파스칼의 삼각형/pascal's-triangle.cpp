#include <iostream>
using namespace std;

int main() {
    
    int n;
    int arr[15][15] = {};

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            // 배열의 외각 1로 채우기
            if (j == 0 || j == i)
            {
                arr[i][j] = 1;
            }
            // 위쪽 행의 두 값의 합을 채우기
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
        }
    }

    // 출력
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}