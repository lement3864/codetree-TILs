#include <iostream>

using namespace std;

int main() {
    
    int n;
    int result = 0;
    int arr[101] = {};
    
    cin >> n;

    // 선분 칠하기
    for (int k = 0; k < n; ++k) {
        int x1, x2;
        cin >> x1 >> x2;

        for (int i = x1; i <= x2; ++i)
            arr[i]++;
    }

    // 최대값 출력
    for (int i = 0; i < 101; ++i) {
        if (arr[i] >= result)
            result = arr[i];
    }

    cout << result;

    return 0;
}