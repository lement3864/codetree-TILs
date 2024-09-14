#include <iostream>
using namespace std;

int n, m, cnt = 0;
int arr[101];

void SumArr() {
    while(m >= 1) {
        if (m % 2 == 0) {
            cnt += arr[m - 1];
            m /= 2;
        }
        else {
            cnt += arr[m - 1];
            m--;
        }
    }
}

int main() {
    
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    SumArr();

    cout << cnt;

    return 0;
}