#include <iostream>
using namespace std;

int arr[101];
int maxNum = 0;

int Func(int n) {
    if (n == 0)
        return maxNum;

    if (arr[n] >= maxNum)
        maxNum = arr[n];

    return Func(n - 1);
}

int main() {
    
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << Func(n);

    return 0;
}