#include <iostream>
using namespace std;

int main() {
    
    int n, cnt = 65;

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << (char)cnt;

            if ((char)cnt == 'Z')
                cnt = 65;
                
            cnt++;
        }

        cout << endl;
    }

    return 0;
}