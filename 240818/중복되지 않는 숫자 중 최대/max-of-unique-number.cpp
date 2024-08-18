#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int n;
    int max_val = INT_MIN, check = INT_MAX;
    bool count = false;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int t = 0; t < n; ++t)
    {
        count = false;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == max_val)
            {
                check = arr[i];
                max_val = INT_MIN;
                count = true;
                break;
            }

            if (arr[i] < check && arr[i] >= max_val)
            {
                max_val = arr[i];
            }
        }

        if (max_val <= check && count == false)
        {
            cout << max_val;
            break;
        }
    }

    if (count << true)
    {
        cout << -1;
    }

    return 0;
}