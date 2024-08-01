#include <iostream>
using namespace std;

int main() {
    
    int num;

    cin >> num;

    if (num < 0) 
    {
        cout << num << "\n" << "minus";
    }
    else
    {
        cout << num;
    }

    return 0;
}