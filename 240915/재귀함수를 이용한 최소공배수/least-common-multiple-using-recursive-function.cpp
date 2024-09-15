#include <iostream>
using namespace std;

int arr[11];

int Func(int n) {
    if(n == 1)
        return arr[0];

    return Func(n - 1) * arr[n - 1];
}

int main() {
    
    int n;

    cin >> n;

    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << Func(n);

    return 0;
}