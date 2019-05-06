#include <iostream>
#include "Date.h"

void Date::validate(int day, int month, int year) {
    int days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) {
        days[1] = 29;
    }
    
    if ( month < 1 || month > 12 ) {
        throw InvalidDate("Invalid month!");
    }
    
    if ( day < 1 || day > days[month-1] ) {
        throw InvalidDate("Invalid day!");
    }
}

Date::Date(int day, int month, int year) {
    validate(day, month, year);
    
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::~Date() {
    
}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.getDay() << '.' << date.getMonth() << '.' << date.getYear();
    return out;
}