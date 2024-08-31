#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;

    cin >> text;

    if (text.find("ee") != string::npos)
    {
        cout << "Yes" << " "; 
    }
    else
    {
        cout << "No" << " ";
    }

    if (text.find("ab") != string::npos)
    {
        cout << "Yes" << " ";
    }
    else
    {
        cout << "No" << " ";
    }

    return 0;
}