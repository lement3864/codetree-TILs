#include <iostream>
using namespace std;

int main() {
    
    cout << fixed;

    int weight = 13;
    float moonRatio = 0.165;

    cout.precision(6);
    
    cout << weight << " * " << moonRatio << " = ";
    cout << weight * moonRatio;

    return 0;
}