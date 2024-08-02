#include <iostream>
using namespace std;

int main() {
    
    int aAge, bAge;
    char aSex, bSex;

    cin >> aAge >> aSex >> bAge >> bSex;

    if ((aAge >= 19 && aSex == 'M') || (bAge >= 19 && bSex == 'M'))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}