#include <iostream>
using namespace std;

int main() {
    
    int num;

    while (true)
    {
        cin >> num;

        if (num < 25)
        {
            cout << "Higher" << endl;
        }
        else if (num > 25)
        {
            cout << "Lower" << endl;
        }
        else
        {
            cout << "Good" << endl;
            break;
        }
    }

    return 0;
}