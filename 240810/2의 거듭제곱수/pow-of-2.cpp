#include <iostream>
using namespace std;

int main() {
    
    int N, x = 0;

    cin >> N;

    while (N != 1)
    {
        N /= 2;
        x++;
    }

    cout << x;
    
    return 0;
}