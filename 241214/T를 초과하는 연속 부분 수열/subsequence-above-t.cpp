#include <iostream>

#define MAX_N 1000

using namespace std;

int n;
int t;
int arr[MAX_N];


int main() {

    int result = 0;
    int cnt = 0;

    cin >> n >> t;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] > t) {
            cnt++;
            result = max(result, cnt);
        } else {
            cnt = 0;
        }
    }

    cout << result;

    return 0;
}