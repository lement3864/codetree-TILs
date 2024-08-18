// 최대값을 먼저 찾고 그 다음 작은 값을 찾기
#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int n;
    int max_val = INT_MIN;
    int second_val = INT_MIN;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        if (arr[i] >= max_val)
            max_val = arr[i];
        
        if (arr[i] >= second_val && arr[i] < max_val)
            second_val = arr[i];
    }

    cout << max_val << " " << second_val;

    return 0;
}