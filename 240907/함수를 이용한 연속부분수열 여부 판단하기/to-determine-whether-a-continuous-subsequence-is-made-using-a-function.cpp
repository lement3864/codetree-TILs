#include <iostream>
using namespace std;

#define MAX_N 100

int n1, n2;
int A[MAX_N], B[MAX_N];

bool Check() {
    for (int i = 0; i < n1 - n2; ++i)
    {
        for (int j = 0; j < n2; ++j)
        {
            if (A[j + i] == B[j])
                return false;
            else
                return true;
        }

        return true;
    }

    return false;
}

int main() {
    
    cin >> n1 >> n2;

    for (int i = 0; i < n1; ++i)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n2; ++i)
    {
        cin >> B[i];
    }

    if (Check())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}