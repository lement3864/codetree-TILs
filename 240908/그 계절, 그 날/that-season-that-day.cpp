#include <iostream>
using namespace std;

int Y, M, D;

bool YoonYear() {
    if (Y % 4 == 0)
    {
        if (Y % 100 == 0)
        {
            if (Y % 400 == 0)
                return true;

            return false;
        }
        return true;
    }
    else
        return false;
}

// 윤년일 경우 날짜 체크
bool isPossible() {
    if (YoonYear())
    {
        if (M == 2 && D <= 29)
            return true;
        
        if (M == 4 || M == 6 || M == 9 || M == 11)
        {
            if (D <= 30)
                return true;
            else
                return false;
        }
        else
        {
            if (D <= 31)
                return true;
            else
                return false;
        }
    }
    else
    {
        if (M == 2 && D <= 28)
            return true;
        
        if (M == 4 || M == 6 || M == 9 || M == 11)
        {
            if (D <= 30)
                return true;
            else
                return false;
        }
        else
        {
            if (D <= 31)
                return true;
            else
                return false;
        }
    }
}

// 날짜가 존재하면 계절을 출력, 없으면 -1 출력
void Check() {
    if (isPossible())
    {
        if (M >= 3 && M <= 5)
            cout << "Spring";
        else if (M >= 6 && M <= 8)
            cout << "Summer";
        else if (M >= 9 && M <= 11)
            cout << "Fall";
        else if (M == 12 || M == 1 || M == 2)
            cout << "Winter";
    }
    else
        cout << -1; 
}

int main() {
    cin >> Y >> M >> D;

    Check();
        
    return 0;
}