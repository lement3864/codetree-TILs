#include <iostream>
using namespace std;

int arr[11];

// 최대 공약수를 구하는 함수
int Gcd(int a, int b) {
    if(b == 0)
        return a;
    return Gcd(b, a % b);
}

// 최소공배수 구하는 함수
int Lcm(int a, int b) {
    return (a * b) / Gcd(a, b);
}

int Func(int n) {
    if(n == 1)
        return arr[0];
    
    return Lcm(arr[n - 1], Func(n - 1));
}

int main() {
    
    int n;

    cin >> n;

    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << Func(n);

    return 0;
}