#include <iostream>
using namespace std;

int main() {
    
    int n, cnt = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 2)
            cnt++;
        
        if (cnt == 3)
        {
            cout << i + 1;
            break;
        }

    }

    return 0;
}