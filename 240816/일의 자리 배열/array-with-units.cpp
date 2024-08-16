#include <iostream>
using namespace std;

int main() {
    
    int arr[11];

    for (int i = 0; i < 2; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 2; i < 10; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] % 10 << " ";
    }

    return 0;
}