/*
 * Author: David Hodge
 * File: 7a.cpp
 * Date: 2019/03/11
 * Program to calculate average grade given an array of grades
 */

#include <iostream>
using namespace std;

//case(s): 1,2
//const int MAX_STUDENTS = 5;

//case(s): 3
const int MAX_STUDENTS = 6;

int main() {
    //case 1
    //double grades[MAX_STUDENTS] = {99.9,65.7,87.8,96.1,56.8};
    //case 2
    //double grades[MAX_STUDENTS] = {56.8,65.7,87.8,96.1,99.9};
    //case 3
    double grades[MAX_STUDENTS] = {56.8,65.7,87.8,88.8,96.1,99.9};
    double total, average, median;
    for (int i = 0; i < MAX_STUDENTS; i++) {
       total += grades[i];
    }
    average = total/MAX_STUDENTS;

    if(MAX_STUDENTS % 2 == 0){
       median = (grades[MAX_STUDENTS/2-1]+grades[MAX_STUDENTS/2])/2;
    }
    else{
       median = grades[MAX_STUDENTS/2];
    }

    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Average: " << average << endl;
    cout << "Median: " << median << endl;
    return 0;
}
