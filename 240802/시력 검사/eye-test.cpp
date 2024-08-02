#include <iostream>
using namespace std;

int main() {
    
    double eye1, eye2;

    cin >> eye1 >> eye2;

    if (eye1 >= 1.0 && eye2 >= 1.0)
    {
        cout << "High";
    }
    else if (eye1 >= 0.5 && eye2 >= 0.5)
    {
        cout << "Middle";
    }
    else
    {
        cout << "Low";
    }

    return 0;
}