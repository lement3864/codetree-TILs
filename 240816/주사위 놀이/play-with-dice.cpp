#include <iostream>
using namespace std;

int main() {
    
    int num, count[7] = {};

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;

        count[num]++;
    }

    for (int i = 1; i < 7; ++i)
    {
        cout << i << " - " << count[i] << endl;
    }

    return 0;
}