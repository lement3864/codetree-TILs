#include <iostream>
#include <string>

using namespace std;

class WeatherCast {
    public:
        string date, day, weather;

        WeatherCast(string date, string day, string weather) {
            this->date = date;
            this->day = day;
            this->weather = weather;
        }

        WeatherCast() {}
};

int main() {
    
    int n, dayIdx = -1;
    cin >> n;

    WeatherCast casts[n];

    for (int t = 0; t < n; ++t) {
        string date, day, weather;
        cin >> date >> day >> weather;

        casts[t] = WeatherCast(date, day, weather);

    }

    for (int i = 0; i < n; ++i) {
        if (casts[i].weather == "Rain") {
            if (dayIdx == -1)
                dayIdx = i;
            else {
                int year1 = stoi(casts[i].date.substr(0, 4));
                int month1 = stoi(casts[i].date.substr(5, 2));
                int day1 = stoi(casts[i].date.substr(8, 2));

                int year2 = stoi(casts[dayIdx].date.substr(0, 4));
                int month2 = stoi(casts[dayIdx].date.substr(5, 2));
                int day2 = stoi(casts[dayIdx].date.substr(8, 2));

                if (year1 < year2 || (year1 == year2 && month1 < month2) || 
                    (year1 == year2 && month1 == month2 && day1 < day2))
                    dayIdx = i;
            }
        }
    }

    cout << casts[dayIdx].date << " " << casts[dayIdx].day << " " << casts[dayIdx].weather;

    return 0;
}