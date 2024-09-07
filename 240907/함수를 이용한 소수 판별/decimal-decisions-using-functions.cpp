#include <iostream>
using namespace std;

bool Check(int n) {
    if (n == 1)
        return false;

    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    
    int a, b, result = 0;

    cin >> a >> b;

    for (int i = a; i <= b; ++i)
    {
        if (Check(i))
            result += i;
    }

    cout << result;

    return 0;
}