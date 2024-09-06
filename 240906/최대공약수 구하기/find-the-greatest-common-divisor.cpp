#include <iostream>
using namespace std;

void GCD(int n, int m) {

    for (int i = n; i >= 0; --i)
    {
        if (n % i == 0 && m % i == 0)
        {
            cout << i;
            break;
        }
    }

}

int main() {
    
    int n, m;

    cin >> n >> m;

    GCD(n, m);

    return 0;
}