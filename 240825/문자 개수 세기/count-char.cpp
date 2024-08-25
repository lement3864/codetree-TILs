#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int cnt = 0;
    string str;
    char alp;

    getline(cin, str);

    cin >> alp;

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == alp)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}