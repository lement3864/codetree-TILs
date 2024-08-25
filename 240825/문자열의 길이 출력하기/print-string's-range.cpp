#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int str_length;
    string str1, str2;

    cin >> str1 >> str2;

    str_length = str1.length() + str2.length();

    cout << str_length;

    return 0;
}