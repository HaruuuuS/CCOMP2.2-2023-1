#include <iostream>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int month, int day, int year) {
        if (month < 1 || month > 12) { 
            this->month = 1;
        } else {
            this->month = month;
        }
        this->day = day;
        this->year = year;
    }

    void setMonth(int month) {
        if (month < 1 || month > 12) { 
            this->month = 1;
        } else {
            this->month = month;
        }
    }

    int getMonth() {
        return month;
    }

    void setDay(int day) {
        this->day = day;
    }

    int getDay() {
        return day;
    }

    void setYear(int year) {
        this->year = year;
    }

    int getYear() {
        return year;
    }

    void displayDate() {
        cout << month << "/" << day << "/" << year << endl;
    }
