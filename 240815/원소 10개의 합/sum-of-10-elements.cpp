#include <iostream>
using namespace std;

int main() {
    
    int num, sum_val = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;

        sum_val += num;
    }

    cout << sum_val;

    return 0;
}