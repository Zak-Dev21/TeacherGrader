//// TeacherGrader.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//using namespace std;
//string names;
//int grades;
//
//string arr[] = {names};
//int arr[] = {grades};
//
//namespace grades {
//    int grades() {
//        return grades 
//        
//    }
//}
//
//namespace max {
//    int get_max(grades) {
//        max = 0;
//        for (int i = 0; i < grades; i++) {
//            if (grade > max)
//                max = grade;
//            
//        }
//        return max;
//    }
//}
//
//namespace low {
//    int get_low(grades) {
//        min = grades[0];
//        for (int i = 0; i < grades; i++) {
//            if (grade < min)
//                min = grade;
//
//        }
//        return min;
//
//    }
//}
//
//namespace average {
//    int get_avg(grades) {
//        int sum = 0;
//        int grade_amount = grade.length();
//
//        for (int i = 0; i < grades; i++) {
//            sum += grade;
//            
//        }
//        avg = sum / grade_amount;
//    }
//}
//
//namespace compare {
//    int above_avg;
//    avg_above(grades) {
//        for (int i = 0; i < grades) {
//            if (grade > avg)
//                grade = above_avg;
//
//        }
//        return grade
//    }
//}


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


