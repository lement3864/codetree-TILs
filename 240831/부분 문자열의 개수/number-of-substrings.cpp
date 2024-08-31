#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string textA, textB;
    int cnt = 0;

    cin >> textA >> textB;

    for (int i = 0; i <= textA.length() - textB.length(); ++i)
    {
        if (textA[i] == textB[0] && textA[i + 1] == textB[1])
        {   
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}