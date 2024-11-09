#include "student.h"

string student::getName() const
{
    return name;
}

void student::setName(const string &newName)
{
    name = newName;
}

int student::getStudentNumber() const
{
    return studentNumber;
}

void student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double student::getAverage() const
{
    return average;
}

void student::setAverage(double newAverage)
{
    average = newAverage;
}

student::student() {}
