#include <iostream>
using namespace std;

int main() {
    
    int n, i = 2, arr[101];

    cin >> n;

    arr[0] = 1;
    arr[1] = n;

    while (1)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        i++;

        if (arr[i - 1] > 100)
            break;
    }

    for (int j = 0; j < i; ++j)
    {
        cout << arr[j] << " ";
    }

    return 0;
}