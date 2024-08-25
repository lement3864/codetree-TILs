#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;

    for (int i = 0; i < 2; ++i)
    {
        getline(cin, str);

        for (int j = 0; j < str.length(); ++j)
        {
            if (str[j] != ' ')
                cout << str[j];
        }
    }
    
    return 0;
}