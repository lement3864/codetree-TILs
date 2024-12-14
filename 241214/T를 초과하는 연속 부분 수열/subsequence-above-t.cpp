// 1. 이전 숫자보다 현재 숫자가 크고, t보다 크면 카운트
// 2. 조건에서 벗어나면 리셋

#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n; 
int t;
int arr[MAX_N];

int main() {
    
    cin >> n >> t;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = 0;
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        if (i >= 1 && arr[i - 1] > t && arr[i] > t && arr[i] > arr[i - 1])
            cnt++;
        else
            cnt = 1;
        
        result = max(result, cnt);
    }
    
    cout << result;

    return 0;
}