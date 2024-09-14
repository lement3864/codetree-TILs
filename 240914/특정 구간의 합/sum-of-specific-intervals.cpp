#include <iostream>
using namespace std;

int n, m;
int arr[101];

int main() {

    
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    for (int i = 0; i < m; ++i) {
        int a1, a2, result = 0;
        cin >> a1 >> a2;

        for (int j = a1 - 1; j <= a2 - 1; ++j) {
            result += arr[j];
        }

        cout << result << endl;
    }


    return 0;
}