#include <iostream>
using namespace std;

int main() {
    
    char alp1, alp2;

    cin >> alp1 >> alp2;

    if ((int)alp1 >= (int)alp2)
    {
        cout << (int)alp1 + (int)alp2 << " " << (int)alp1 - (int)alp2;
    }
    else
    {
        cout << (int)alp2 + (int)alp1 << " " << (int)alp2 - (int)alp1;
    }

    return 0;
}