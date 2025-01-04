#include <iostream>
#include <algorithm>

using namespace std;

int n;
int max_val = -1;

int arr[21][21];

int main() {

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 2; ++j) {
            max_val = max(max_val, arr[i][j] + arr[i][j + 1] + arr[i][j + 2]);
        }
    }

    cout << max_val;

    return 0;
}