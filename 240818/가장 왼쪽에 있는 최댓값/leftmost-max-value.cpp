#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int check, len = n, arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    while (true)
    {
        int max_val = -1;

        for (int i = 0; i < len; ++i)
        {
            if (arr[i] > max_val)
            {
                max_val = arr[i];
                check = i;
            }
        }

        cout << check + 1 << " ";

        len = check;

        if (check == 0)
        {
            break;
        }
    }

    return 0;
}