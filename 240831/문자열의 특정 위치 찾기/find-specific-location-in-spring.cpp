#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;
    char alp;

    cin >> text >> alp;

    if (text.find(alp) != string::npos)
    {
        cout << text.find(alp);
    }
    else
    {
        cout << "No";
    }

    return 0;
}