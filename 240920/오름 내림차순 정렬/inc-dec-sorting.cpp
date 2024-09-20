#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // 오름차순으로 정렬
    sort(arr, arr + n);

    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 내림차순으로 정렬
    sort(arr, arr + n, greater<int>());

    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}