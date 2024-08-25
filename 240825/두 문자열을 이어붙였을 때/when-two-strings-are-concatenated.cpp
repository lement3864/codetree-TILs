#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string str1, str2;
    string str12 = "", str21 = "";

    cin >> str1 >> str2;

    str12 = str1 + str2;
    str21 = str2 + str1;

    if (str12 == str21)
        cout << "true";
    else
        cout << "false";

    return 0;
}