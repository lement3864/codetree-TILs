#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n, cnt = 0;
    string result = "", num;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> num;

        result += num;
    }

    for (int i = 0; i < result.length(); ++i)
    {
        cout << result[i];
        cnt++;

        if (cnt == 5)
        {
            cout << endl;
            cnt = 0;
        }
    }

    return 0;
}