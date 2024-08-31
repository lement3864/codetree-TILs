#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;
    int q, num;

    cin >> text >> q;

    int len = text.length();

    for (int i = 0; i < q; ++i)
    {
        cin >> num;

        // 1: 왼쪽으로 한칸씩 밀기
        if (num == 1)
        {
            text = text.substr(1, len - 1) + text.substr(0, 1);

            cout << text << endl;
        }
        // 2: 오른쪽으로 한칸씩 밀기
        else if (num == 2)
        {
            text = text.substr(len - 1, 1) + text.substr(0, len - 1);

            cout << text << endl;
        }
        // 3: 좌우로 뒤집기
        else
        {   
            string temp = "";

            for (int i = len - 1; i >= 0; --i)
            {
                temp += text[i];
            }

            text = temp;

            cout << text << endl;
        }
    }

    return 0;
}