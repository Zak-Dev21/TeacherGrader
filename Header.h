#ifndef Header_h
#define Header_h

#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 5; // Example size; adjust as needed

// Predefined arrays for names and grades
string student_names[MAX_STUDENTS] = {
    "Alice", "Bob", "Charlie", "Diana", "Ethan"
};

int student_grades[MAX_STUDENTS] = {
    85, 92, 78, 90, 88
};

namespace grades {
    int num_students = MAX_STUDENTS;

    int get_max() {
        int max_grade = student_grades[0];
        for (int i = 1; i < num_students; i++) {
            if (student_grades[i] > max_grade)
                max_grade = student_grades[i];
        }
        return max_grade;
    }

    int get_low() {
        int min_grade = student_grades[0];
        for (int i = 1; i < num_students; i++) {
            if (student_grades[i] < min_grade)
                min_grade = student_grades[i];
        }
        return min_grade;
    }

    double get_avg() {
        int sum = 0;
        for (int i = 0; i < num_students; i++) {
            sum += student_grades[i];
        }
        return static_cast<double>(sum) / num_students;
    }

    void above_avg(double avg) {
        cout << "Students with grades above average: ";
        for (int i = 0; i < num_students; i++) {
            if (student_grades[i] > avg)
                cout << student_names[i] << " (" << student_grades[i] << ") ";
        }
        cout << endl;
    }
}



#endif