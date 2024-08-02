#include <iostream>
using namespace std;

int main() {
    
    int midterm, finals;

    cin >> midterm >> finals;

    if (midterm >= 90 && finals >= 95)
    {
        cout << 100000;
    }
    else if (midterm >= 90 && finals >= 90)
    {
        cout << 50000;
    }
    else
    {
        cout << 0;
    }

    return 0;
}