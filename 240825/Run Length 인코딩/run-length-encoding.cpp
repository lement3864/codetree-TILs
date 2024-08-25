#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string A;
    string result = "";

    cin >> A;

    char current = A[0];
    int cnt = 1;

    for (int i = 1; i < A.length(); ++i)
    {
        if (A[i] == current)
        {
            cnt++;
        }
        else
        {
            result += current;
            result += to_string(cnt);
            current = A[i];
            cnt = 1;
        }
    }

    result += current;
    result += to_string(cnt);

    cout << result.length() << endl << result;

    return 0;
}