#include <iostream>
using namespace std;

int main() {
    
    int n, m;

    cin >> n >> m;

    int arr[n][n] = {};

    for (int k = 1; k <= m; ++k)
    {
        int r, c;

        cin >> r >> c;

        arr[r - 1][c - 1] = k;
    }

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