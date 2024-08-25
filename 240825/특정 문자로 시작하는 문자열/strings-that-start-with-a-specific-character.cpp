#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << fixed;
    
    int n, cnt = 0, avg = 0;
    string str[20];
    char alp;

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> str[i];

    cin >> alp;

    for (int i = 0; i < n; ++i)
    {
        if (str[i][0] == alp)
        {
            cnt++;
            avg += str[i].length();
        }
    }

    cout.precision(2);
    cout << cnt << " " << (double)avg / cnt;

    return 0;
}