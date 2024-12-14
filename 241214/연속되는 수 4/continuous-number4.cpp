// 1. 이전 숫자보다 현재 숫자가 더 크면 카운트하며 진행
// 2. 이전 숫자보다 현재 숫자가 더 작으면 리셋
// 3. 이전 카운트와 현재 카운트와 비교후 큰 값으로 초기화

// #include <iostream>

// using namespace std;

// int main() {
    
//     int n;
//     int arr[1001];
//     int result = 0;
//     int cnt = 1;

//     cin >> n;

//     for (int t = 0; t < n; ++t) {
//         cin >> arr[t];
//     }

//     for (int i = 1; i < n; ++i) {
        
//         if (arr[i - 1] < arr[i]) {
//             cnt++;
//         }
//         else if (arr[i - 1] >= arr[i]) {
//             if (result <= cnt) {
//                 result = cnt;
//             }

//             cnt = 1;
//         }
//     }

//     if (result <= cnt) 
//         result = cnt;
    

//     cout << result;

//     return 0;
// }


#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n;
int arr[MAX_N];

int main() {
    
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int ans = 0;                // 결과 값
    int cnt = 0;                // 수열 카운팅

    for (int i = 0; i < n; ++i) {

        if (i >= 1 && arr[i] > arr[i - 1])
            cnt++;
        else
            cnt = 1;

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}