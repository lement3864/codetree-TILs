#include <iostream>
using namespace std;

int main() {
    
    int N, K;
    int result = 0;

    cin >> N >> K;

    int arr[N + 1] = {};

    for (int k = 0; k < K; ++k) {
        int a, b;
        cin >> a >> b;

        for (int i = a; i <= b; ++i) {
            arr[i] += 1;
        }
    }

    for (int i = 0; i < N; ++i) {
        if (arr[i] >= result) {
            result = arr[i];
        }
    }

    cout << result;

    return 0;
}