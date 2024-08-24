#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    
    int arr[2][4];
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> arr[i][j];
        }
    }

    int sum_val = 0, sum_height[4] = {};

    for (int i = 0; i < 2; ++i)
    {
        int sum_width = 0;

        for (int j = 0; j < 4; ++j)
        {
            sum_width += arr[i][j];

            sum_height[j] += arr[i][j];

            sum_val += arr[i][j];
        }

        cout.precision(1);
        cout << (double)sum_width / 4 << " ";
    }

    cout << endl;

    for (int i = 0; i < 4; ++i)
        cout << (double)sum_height[i] / 2 << " ";
    
    cout << endl;

    cout << (double)sum_val / 8;
    return 0;
}