#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int cnt = 0;
    string str[10];
    char alp;

    for (int i = 0; i < 10; ++i)
    {
        cin >> str[i];
    }   

    cin >> alp;

    for (int i = 0; i < 10; ++i)
    {
        if (str[i][str[i].length() - 1] == alp)
        {
            cout << str[i] << endl;
            cnt++;
        }
    }

    if (cnt == 0)
        cout << "None";

    return 0;
}