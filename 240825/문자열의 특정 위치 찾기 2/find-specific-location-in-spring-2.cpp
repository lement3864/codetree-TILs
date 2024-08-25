#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int cnt = 0;
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char alp;

    cin >> alp;

    for (int i = 0; i < 5; ++i)
    {
        if (str[i][2] == alp || str[i][3] == alp)
        {
            cout << str[i] << endl;
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}