#include <iostream>
using namespace std;

int main() {
    
    int n, a, b;

    cin >> n;

    for (int t = 0; t < n; ++t)
    {
        int prod_val = 1;

        cin >> a >> b;

        for (int i = a; i <= b; ++i)
        {
            prod_val *= i;
        }

        cout << prod_val << endl;
    }

    return 0;
}