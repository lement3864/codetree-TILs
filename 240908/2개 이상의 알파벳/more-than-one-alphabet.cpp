#include <iostream>
#include <string>

using namespace std;

bool Check(string A) {
    for (int i = 0; i < A.length(); ++i)
    {
        if(A[i] != A[i + 1])
            return false;
        
        return true;
    }
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