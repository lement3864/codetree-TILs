#include <iostream>
using namespace std;

int main() {
    
    int width, height;
    char text;

    while(true)
    {
        cin >> width >> height >> text;

        cout << width * height << endl;

        if (text == 'C')
            break;
    }

    return 0;
}