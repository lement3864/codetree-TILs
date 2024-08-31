#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text, command;

    cin >> text >> command;

    int len = text.length();

    for (int i = 0; i < command.length(); ++i)
    {
        // L: 좌측으로 한칸 밀기
        if (command[i] == 'L')
        {
            text = text.substr(1, len - 1) + text.substr(0, 1);
        }
        // R: 우측으로 한칸 밀기
        else if (command[i] == 'R')
        {
            text = text.substr(len - 1, 1) + text.substr(0, len - 1);
        }
    }

    cout << text;

    return 0;
}