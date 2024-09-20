#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int n, k, cnt = 0;
    string T;

    cin >> n >> k >> T;
    
    string textArr[n];

    for(int i = 0; i < n; ++i) {
        bool check = true;
        string temp;
        cin >> temp;

        for(int j = 0; j < T.length(); ++j) {
            if(temp[j] != T[j]) {
                check = false;
                break;
            }
        }

        if(check) {
            textArr[cnt] = temp;
            cnt++;
        }
    }

    sort(textArr, textArr + cnt);
   
    cout << textArr[k - 1];

    return 0;
}