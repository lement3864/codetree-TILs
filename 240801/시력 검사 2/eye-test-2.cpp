#include <iostream>
using namespace std;

int main() {
    
    double eyes;

    cin >> eyes;

    if (eyes >= 1.0)
    {
        cout << "High";
    }
    else if (eyes >= 0.5)
    {
        cout << "Middle";
    }
    else
    {
        cout << "Low";
    }

    return 0;
}