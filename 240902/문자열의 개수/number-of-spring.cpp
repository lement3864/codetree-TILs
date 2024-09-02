#include <iostream>
#include <string>

using namespace std;

int main() {

    int cnt = 0;
    string arr[201] = {};

    while (true)
    {
        string text;

        cin >> text;

        if (text == "0") break;
        else
        {
            arr[cnt] = text;
            cnt++;
        }
    }

    cout << cnt << endl;

    for (int i = 0; i < cnt; ++i)
    {
        if (i % 2 == 0)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}