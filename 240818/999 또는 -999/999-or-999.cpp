#include <iostream>
#include <climits>
using namespace std;

int main() {
    int i = 0, num, arr[101];
    int min_val = INT_MAX, max_val = INT_MIN;

    while (true)
    {
        cin >> arr[i];

        if (arr[i] == 999 || arr[i] == -999)
            break;

        // 최대값
        if (arr[i] >= max_val)
            max_val = arr[i];
        
        if (arr[i] <= min_val)
            min_val = arr[i];
    }

    cout << max_val << " " << min_val;

    return 0;
}