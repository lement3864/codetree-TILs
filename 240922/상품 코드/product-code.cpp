#include <iostream>
using namespace std;

class Prod {
    public:
        string name;
        int code;

        Prod(string name = "codetree", int code = 50) {
            this->name = name;
            this->code = code;
        }
};

int main() {
    
    Prod products[2];
    string name;
    int code;

    cin >> name >> code;

    products[1] = Prod(name, code);

    for(int i = 0; i < 2; ++i) {
        cout << "product " << products[i].code << " is " << products[i].name << endl;
    }

    return 0;
}