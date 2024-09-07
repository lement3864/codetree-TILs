#include <iostream>
using namespace std;

bool Check(int m, int d) {
    if (m == 2)
    {
        if (d >= 1 && d <= 28)
            return true;
        return false;    
    }

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d >= 1 && d <= 31)
            return true;
        return false;        
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d >= 1 && d <= 30)
            return true;
        return false;        
    }
}

int main() {
    
    int M, D;

    cin >> M >> D;

    if (Check(M, D))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}