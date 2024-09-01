#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n, cnt = 0;
    string A;

    cin >> n >> A;

    for (int i = 0; i < n; ++i)
    {
        string temp;

        cin >> temp;

        if (A == temp)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}