#include <iostream>
#include <algorithm>

using namespace std;

int MiddleNum(int n, int arr[]) {
    int temp[n + 1];
    // cout << "temp배열 출력 : ";
    for(int i = 0; i <= n; ++i) {
        temp[i] = arr[i];
        // cout << temp[i] << " ";
    }

    sort(temp, temp + n + 1);

    // // cout << endl << "sort이후 temp배열 출력 : ";
    // for(int i = 0; i <= n; ++i) {
    //     cout << temp[i] << " ";
    // }

    // cout << endl << "중앙값 출력 : ";
    return temp[n / 2];
}

int main() {
    
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; ++i) {
        // 홀수 번째의 원소일때 중앙값 출력
        if(i % 2 == 0) {
            cout << MiddleNum(i, arr) << " ";
        }
        // cout << endl;
    }

    return 0;
}