#include <iostream>
#include <string>

using namespace std;

string target, part;

void Check() {
    // 부분 문자열이 입력 문자열에 포함 될 경우
    if (target.find(part) != string::npos) 
        cout << target.find(part);
    else
        cout << -1;
}

int main() {

    cin >> target >> part;
    
    Check();

    return 0;
}