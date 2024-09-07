#include <iostream>
using namespace std;

#define MAX_N 100

int n1, n2;
int A[MAX_N], B[MAX_N];

bool IsSame(int n) {
    for (int i = 0; i < n2; ++i)
    {
        if (A[n + i] == B[i])
            return false;
    }
    return true;
}

bool Check() {
    for (int i = 0; i < n1 - n2; ++i)
    {
        if (IsSame(i))
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