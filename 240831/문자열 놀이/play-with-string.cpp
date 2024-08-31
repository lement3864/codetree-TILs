#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s;
    int q;

    cin >> s >> q;

    // 질의 q개 만큼 반복
    for (int i = 0; i < q; ++i)
    {
        int type;

        cin >> type;

        // 질의 1번 : a 번째 문자와 b 번째 문자 교환 후 출력
        if (type == 1)
        {
            int a, b;
            char tempA, tempB;

            cin >> a >> b;

            tempA = s[a - 1];
            tempB = s[b - 1];

            s[a - 1] = tempB;
            s[b - 1] = tempA;

            cout << s;
        }
        else
        {
            char a, b;

            cin >> a >> b;

            for (int j = 0; j < s.length(); ++j)
            {
                if (s[j] == a)
                {
                    s[j] = b;
                }
            }

            cout << s;
        }

        cout << endl;
    }

    return 0;
}