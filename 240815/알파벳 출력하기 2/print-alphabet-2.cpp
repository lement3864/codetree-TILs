#include <iostream>
using namespace std;

int main() {
    
    int n, cnt = 64;

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int v = 1; v < i; ++v)
        {
            cout << "  ";
        }

        for  (int j = 1; j <= n - i + 1; ++j)
        {
            cnt++;

            cout << (char)cnt << " ";

            if ((char)cnt == 'Z')
                cnt = 64;
        }

        cout << endl;
    }

    return 0;
}