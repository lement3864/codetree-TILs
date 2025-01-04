// 1. n개의 집을 돌아가며 모두 체크

#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

using namespace std;

int n;
int min_val = INT_MAX;

int house[101];

int main() {
    
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> house[i];
    }

    for (int i = 0; i < n; ++i) {
        int sum_dis = 0;
        
        for (int j = 0; j < n; ++j) {
            sum_dis += house[j] * abs(j - i);
        }

        min_val = min(min_val, sum_dis);
    }

    cout << min_val;

    return 0;
}