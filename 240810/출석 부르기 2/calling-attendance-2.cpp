#include <iostream>
using namespace std;

int main() {
    
    int num;

    while (true)
    {
        cin >> num;

        if (num == 1)
            cout << "John" << endl;
        else if (num == 2)
            cout << "Tom" << endl;
        else if (num == 3)
            cout << "Paul" << endl;
        else if (num == 4)
            cout << "Sam" << endl;
        else
        {
            cout << "Vacancy" << endl;
            break;
        }
    }

    return 0;
}