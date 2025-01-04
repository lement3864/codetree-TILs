// i < j < k인 경우만 만족하도록 반복문 작석

#include <iostream>

using namespace std;

int n;
int cnt = 0;

int cows[101];

int main() {
    
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> cows[i];
    }

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (cows[i] <= cows[j] && cows[j] <= cows[k]) 
                    cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}