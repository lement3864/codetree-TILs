#include <iostream>
using namespace std;

int main() {
    
    int num;

    while(1)
    {
        cin >> num;

        if (num == 0)
            break;
        else
            cout << num << endl;
    }

    return 0;
}