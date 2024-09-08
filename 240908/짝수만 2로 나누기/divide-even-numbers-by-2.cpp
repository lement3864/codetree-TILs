#include <iostream>
using namespace std;

void Change(int *x, int n) {
    for (int i = 0; i < n; ++i)
    {
        if (x[i] % 2 == 0)
        {
            x[i] /= 2;
        }
        
    }
}

int main() {
    
    int N, arr[51];

    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    
    Change(arr, N);

    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";

    return 0;
}