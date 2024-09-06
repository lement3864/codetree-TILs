#include <iostream>
#include <string>

using namespace std;

bool Check(int n) {

    bool check = false;
    string numStr = to_string(n);

    int sumNum = (numStr[0] - '0') + (numStr[1] - '0');

    if (n % 2 == 0 && sumNum % 5 == 0)
        check = true;

    return check;
}


int main() {
    
    int n;

    cin >> n;

    if (Check(n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}