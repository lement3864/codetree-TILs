#include <iostream>
using namespace std;

int main() {
    
    int m, n;

    cin >> m;

    for (int t = 0; t < m; ++t)
    {
        int cnt = 0;
        
        cin >> n;

        while(n != 1)
        {
            if (n % 2 == 0)
            {
                n /= 2;
                cnt++; 
            }
            else
            {
                n = 3 * n + 1;
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}