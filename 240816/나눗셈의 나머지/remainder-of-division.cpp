#include <iostream>
using namespace std;

int main() {
    
    int a, b, temp, sum_val = 0; 
    int remain[11] = {};

    cin >> a >> b;

    while (a > 1)
    {
        temp = a / b;
 
        remain[a % b]++;
        
        a = temp;
    }

    for (int i = 0; i < 11; ++i)
    {
        sum_val += remain[i] * remain[i];
    }

    cout << sum_val;

    return 0;
}