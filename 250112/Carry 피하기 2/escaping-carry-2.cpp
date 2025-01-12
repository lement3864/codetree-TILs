// 1. 3개의 숫자 픽
// 2. carry가 발생하지 않으면 result와 비교해서 최댓값 체크
// 2-1. 각 숫자의 1의 자리를 더해서 10이 넘으면 carry임/ 1. 3개의 숫자 픽
// 2. carry가 발생하지 않으면 result와 비교해서 최댓값 체크
// 2-1. 각 숫자의 1의 자리를 더해서 10이 넘으면 carry임

#include <iostream>

using namespace std;

int n;
int result = -1;

int arr[21];

bool Checked(int i, int j, int k) {
    int a = arr[i];
    int b = arr[j];
    int c = arr[k];

    if (a / 1000 + b / 1000 + c / 1000 >= 10)
        return false;
    else {
        a %= 1000;
        b %= 1000;
        c %= 1000;
    }
    if (a / 100 + b / 100 + c / 100 >= 10)
        return false;
    else {
        a %= 100;
        b %= 100;
        c %= 100;
    }
    if (a / 10 + b / 10 + c / 10 >= 10)
        return false;
    else {
        a %= 10;
        b %= 10;
        c %= 10;
    }
    if (a % 10 + b % 10 + c % 10 >= 10)
        return false;

    return true;
}

int main() {

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (Checked(i, j, k)) {
                    result = max(result, arr[i] + arr[j] + arr[k]);
                }
            }
        }
    }

    cout << result;

    return 0;
}