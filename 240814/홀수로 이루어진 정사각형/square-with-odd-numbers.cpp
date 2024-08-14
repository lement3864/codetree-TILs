#include <iostream>
using namespace std;

int main() {
    
    int n;

    cin >> n;

    for (int i = 1; i <= 2 * n; i += 2)
    {
        for (int j = 0; j < 2 * n; j += 2)
        {
            cout << 10 + i + j << " ";
        }

        cout << endl;
    }

    return 0;
}