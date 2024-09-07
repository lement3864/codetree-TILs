#include <iostream>
using namespace std;

bool Check(int n) {
    if (n == 1)
        return false;

    if ((n / 10 + n % 10) % 2 == 0)
    {
        for (int i = 2; i < n; ++i)
        {
            if (n % i == 0)
                return false;
        }

        return true;
    }
    else
        return false;


}

int main() {
    
    int a, b;
    int cnt = 0;

    cin >> a >> b;

    for (int i = a; i <= b; ++i)
    {
        if (Check(i))
            cnt++;
    }

    cout << cnt;

    return 0;
}