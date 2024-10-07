//// TeacherGrader.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Header.h"

int main() {
    double avg = grades::get_avg();
    int max_grade = grades::get_max();
    int min_grade = grades::get_low();

    cout << "Average Grade: " << avg << endl;
    cout << "Highest Grade: " << max_grade << endl;
    cout << "Lowest Grade: " << min_grade << endl;

    grades::above_avg(avg);

    return 0;
}


