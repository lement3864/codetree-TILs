#include <iostream>
#include <climits>

using namespace std;

int n;
int max_num = INT_MIN;

int arr[101];

int main() {

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 2; j < n; ++j) {
            int temp = arr[i] + arr[j];

            max_num = max(max_num, temp);
        }
    }

    cout << max_num;

    return 0;
}