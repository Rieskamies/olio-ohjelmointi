#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<memory>
using namespace std;

class student
{
private:
    string name;
    int studentNumber;
    double average;
public:
    student();
    string getName() const;
    void setName(const string &newName);
    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);
    double getAverage() const;
    void setAverage(double newAverage);
};

#endif // STUDENT_H
