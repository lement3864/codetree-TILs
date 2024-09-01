#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string strA, strB;
    string AB = "", BA = "";

    cin >> strA >> strB;

    AB = strA + strB;
    BA = strB + strA;

    cout << stoi(AB) + stoi(BA);

    return 0;
}