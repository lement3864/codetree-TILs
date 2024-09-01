#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;
    int  result = 0;

    cin >> text;

    for (int i = 0; i < text.length(); ++i)
    {
        if (text[i] >= '0' && text[i] <= '9')
        {
            result += (text[i] - '0');
        }   
    }

    cout << result;

    return 0;
}