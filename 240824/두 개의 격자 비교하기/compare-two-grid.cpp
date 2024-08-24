#include <iostream>
using namespace std;

int main() {
    
    int n, m;

    cin >> n >> m;

    int arr1[n][m], arr2[n][m];

    // 배열 2개 입력 받기 =============
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr2[i][j];
        }
    }

    // ================================

    // 두 배열의 같은 위치에 값이 같으면 0출력
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (arr1[i][j] == arr2[i][j])
                cout << 0 << " ";
            else
                cout << 1 << " ";
        }

        cout << endl;
    }

    return 0;
}