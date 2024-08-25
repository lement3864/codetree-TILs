#include <iostream>
using namespace std;

int main() {
    
    int n;
    int arr[10][10] = {};

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {   
            // 첫 번째 행과 열은 1로 채우기
            if (i == 0 || j == 0)
            {
                arr[i][j] = 1;
            }
            // 위의 값 + 바로 왼쪽 값 + 왼쪽 위의 값으로 채우기
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1] + arr[i - 1][j - 1]; 
            }
        }
    }

    // 출력
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}