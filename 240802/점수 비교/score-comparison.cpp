#include <iostream>
using namespace std;

int main() {
    
    int mathA, engA, mathB, engB;

    cin >> mathA >> engA >> mathB >> engB;

    if (mathA > mathB && engA > engB)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}