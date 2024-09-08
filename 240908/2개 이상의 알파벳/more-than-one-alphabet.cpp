#include <iostream>
#include <string>

using namespace std;

bool Check(string A) {
    for (int i = 0; i < A.length(); ++i)
    {
        for (int j = i; j < A.length(); ++j)
        {
            if (A[i] != A[j])
            {
                return true;
            }
        }
    }
    return false;
}

using namespace std;

int main() {
    
    string A;

    cin >> A;

    if(Check(A))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}