#include <iostream>
using namespace std;

int main() {
    
    int mathA, mathB, enA, enB;

    cin >> mathA >> enA >> mathB >> enB;

    if (mathA > mathB)
    {
        cout << "A";
    }
    else if (mathB > mathA)
    {
        cout << "B";
    }
    else if (mathA == mathB)
    {
        if (enA > enB)
        {
            cout << "A";
        }
        else
        {
            cout << "B";
        }
    }

    return 0;
}