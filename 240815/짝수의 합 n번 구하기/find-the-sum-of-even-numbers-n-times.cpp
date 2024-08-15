#include <iostream>
using namespace std;

int main() {
    
    int n, a, b;

    cin >> n;

    for (int t = 0; t < n; ++t)
    {
        int sum_val = 0;

        cin >> a >> b;

        for (int i = a; i <= b; ++i)
        {
            if (i % 2 == 0)
                sum_val += i;
        }

        cout << sum_val << endl;
    }

    return 0;
}