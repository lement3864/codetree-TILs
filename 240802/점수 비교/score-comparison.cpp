#include <iostream>
using namespace std;

int main() {
    
    int mathA, engA, mathB, engB;

    cin >> mathA >> engA >> mathB >> engB;

    cout << (mathA > mathB) && (engA > engB);

    return 0;
}