#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int sum_length = 0;

    string str[10];

    for (int i = 0; i < 10; ++i)
    {
        cin >> str[i];

        sum_length += str[i].length();
    }

    cout << sum_length;

    return 0;
}