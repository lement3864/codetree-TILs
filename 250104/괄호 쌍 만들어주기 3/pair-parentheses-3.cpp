// 1. '('를 만나면 뒷 부분을 반복하며 ')'를 찾을 때 마다 cnt

#include <iostream>
#include <string>

using namespace std;

int cnt = 0;

string brackets;

int main() {
    
    cin >> brackets;

    for (int i = 0; i < brackets.length(); ++i) {
        if (brackets[i] == '(') {
            for (int j = i + 1; j < brackets.length(); ++j) {
                if (brackets[j] == ')')
                    cnt++; 
            }
        }
    }

    cout << cnt;

    return 0;
}