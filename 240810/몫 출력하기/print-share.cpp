#include <iostream>
using namespace std;

int main() {
    
    int num, t = 0;

    while(t != 3)
    {
        cin >> num;

        if (num % 2 != 0)
        {
            continue;
        }
        else
        {
            cout << num / 2 << endl;
            t++;
        }
    }

    return 0;
}