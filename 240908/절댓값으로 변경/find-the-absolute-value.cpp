#include <iostream>
using namespace std;

void Cal(int n, int *arr) {
    for (int i = 0; i < n; ++i)
        if (arr[i] < 0)
            arr[i] = -arr[i];
}

int main() {
    
    int N, arr[51];

    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    
    Cal(N, arr);

    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";

    return 0;
}