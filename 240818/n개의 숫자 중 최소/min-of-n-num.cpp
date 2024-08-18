#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int n, min_val = INT_MAX, cnt = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        if (arr[i] <= min_val)
            min_val = arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == min_val)
            cnt++;
    }

    cout << min_val << " " << cnt;

    return 0;
}