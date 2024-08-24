#include <iostream>
using namespace std;

int main() {
    
    int n, max_val = 0, check = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if (arr[j] > arr[i] && check < (arr[j] - arr[i]))
            {
                check = arr[j] - arr[i];
            }
        }
    }

    cout << check;

    return 0;
}