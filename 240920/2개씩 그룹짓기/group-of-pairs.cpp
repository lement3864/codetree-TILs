#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N, maxSum = 0;
    cin >> N;

    int arr[2 * N];
    for(int i = 0; i < 2 * N; ++i)
        cin >> arr[i];
    
    sort(arr, arr + 2 * N);

    for(int i = 0; i < N; ++i) {
        if(arr[i] + arr[2 * N - 1 - i] >= maxSum) {
            maxSum = arr[i] + arr[2 * N -1 - i];
        }
    }

    cout << maxSum;

    return 0;
}