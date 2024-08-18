#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int n, max_val = -1;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i)
    {
        int temp = arr[i];

        if (max_val < temp)
        {
            int count = 0;

            for (int j = 0; j < n; ++j)
            {
                if (arr[j] == temp)
                    count++;
            }

            if (count == 1)
                max_val = temp;
        }
    }

    cout << max_val;

    return 0;
}