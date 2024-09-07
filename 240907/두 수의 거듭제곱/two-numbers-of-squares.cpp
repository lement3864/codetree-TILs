#include <iostream>
using namespace std;

int Cal(int a, int b) {
    int temp = 1;

    for (int i = 0; i < b; ++i)
        temp *= a;

    return temp;
}

int main() {
    
    int a, b;
    int result;

    cin >> a >> b;

    result = Cal(a, b);

    cout << result;

    return 0;
}