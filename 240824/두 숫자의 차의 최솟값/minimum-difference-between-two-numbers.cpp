#include <iostream>
using namespace std;

int main() {
    
    int n, check = 101;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j]>= arr[i])
            {
                if (arr[j] - arr[i] < check)
                {
                    check = arr[j] - arr[i];
                }
            }
            else
            {
                if (arr[i] - arr[j] < check)
                {
                    check = arr[i] - arr[j];
                }
            }
        }
    }

    cout << check;

    return 0;
}