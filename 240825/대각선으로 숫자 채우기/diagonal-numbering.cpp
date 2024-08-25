#include <iostream>
using namespace std;

int main() {
    
    int n, m, num = 1;
    int arr[100][100] = {};

    cin >> n >> m;

    int i = 0, j = 0;  

    for (int i = 0; i < n + m + 1; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i - j >= 0 && i - j <= m - 1)
            {
                arr[j][i - j] = num;
                num++;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}