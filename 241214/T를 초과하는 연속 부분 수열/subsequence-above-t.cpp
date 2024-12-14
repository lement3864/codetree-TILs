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

    for (int i = 0; i < n - 1; ++i)
        cin >> arr[i];

    
    for (int i = 0; i < n; ++i) {
        if (arr[i] > t && i >= 1 && arr[i] > arr[i - 1]) {
            cnt++;
        }
        else {
            cnt = 0;
        }

        result = max(result, cnt);
    }

    cout << result;

    return 0;
}