#include <iostream>
using namespace std;

int main() {
    
    char alp;

    cin >> alp;

    if (alp == 'a')
    {
        alp = 'z';
        cout << alp;
    }
    else
    {
        cout << char(alp - 1);
    }

    return 0;
}