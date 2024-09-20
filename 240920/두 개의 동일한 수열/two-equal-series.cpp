#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    bool check = true;
    int n;
    cin >> n;

    int arrA[n], arrB[n];

    for(int i = 0; i < n; ++i) {
        cin >> arrA[i];
    }

    for(int i = 0; i < n; ++i) {
        cin >> arrB[i];
    }

    sort(arrA, arrA + n);
    sort(arrB, arrB + n);

    for(int i = 0; i < n; ++i) {
        if (arrA[i] != arrB[i]) {
            check = false;
            break;
        }
    }

    if(check)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}