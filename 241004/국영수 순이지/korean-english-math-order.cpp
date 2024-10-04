#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student {
    public:
        string name;
        int kor, eng, math;

        Student(string name, int kor, int eng, int math) {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }

        Student() {}
};

bool cmp(const Student &a, const Student &b) {
    if (a.kor == b.kor) {
        if (a.eng == b.eng) {
            return a.math > b.math;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    
    int n;

    cin >> n;

    Student students[n];

    for (int i = 0; i < n; ++i) {
        string name;
        int kor, eng, math;

        cin >> name >> kor >> eng >> math;

        students[i] = Student(name, kor, eng, math);
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; ++i) {
        cout << students[i].name << " " << students[i].kor << " ";
        cout << students[i].eng << " " << students[i].math << endl;
    }

    return 0;
}