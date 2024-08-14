#include <iostream>
using namespace std;

int main() {
    
    int n, cnt = 0;

    cin >> n;

    for (int i = n; i > 0; --i)
    {
        for (int v = 0; v < n - i; ++v)
        {
            cout << "  ";
        }

        for (int j = 0; j < i; ++j)
        {
            if (cnt == 9)
                cnt = 1;
            else
                cnt++;

            cout << cnt << " ";
        }

        cout << endl;
    }

    return 0;
}