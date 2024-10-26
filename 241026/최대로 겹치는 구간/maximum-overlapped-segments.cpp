#include <iostream>
using namespace std;

int main() {
    
    int n;
    int arr[201] = {};

    cin >> n;

    // 구간 칠하기
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        for (int j = a + 100; j < b + 100; ++j) {
            arr[j] += 1;
        }
    }

    // 최댓값 구하기
    int result = 0;

    for (int i = 0; i < 201; ++i) {
        if (arr[i] >= result)
            result = arr[i];
    }

    cout << result;

    return 0;
}