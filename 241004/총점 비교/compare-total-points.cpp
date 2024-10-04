#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student {
    public:
        string name;
        int num1, num2, num3;

        Student(string name, int num1, int num2, int num3) {
            this->name = name;
            this->num1 = num1;
            this->num2 = num2;
            this->num3 = num3;
        }

        Student(){}
};

bool cmp(const Student &a, const Student &b) {
    return a.num1 + a.num2 + a.num3 < b.num1 + b.num2 + b.num3;
}

int main() {
    
    int n;

    cin >> n;

    Student students[n];

    for (int i = 0; i < n; ++i) {
        string name;
        int num1, num2, num3;

        cin >> name >> num1 >> num2 >> num3;

        students[i] = Student(name, num1, num2, num3);                                                                           
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; ++i) {
        cout << students[i].name << " " << students[i].num1 << " ";
        cout << students[i].num2 << " " << students[i].num3 << endl;
    }

    return 0;
}