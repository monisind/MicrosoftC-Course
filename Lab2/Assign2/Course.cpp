//
//  Course.cpp
//  Assign2
//
//  Created by Monisha Gunalan2 on 2017-03-03.
//  Copyright © 2017 Monisha Gunalan2. All rights reserved.
//

#include "Course.hpp"
#include <iostream>
#include <vector>
using namespace std;
//using std::string;


Course::Course(){
    
}

Course::Course(const string &name)
: m_name(name)
{
}

Course::Course(const string &name, const vector<Student> &students, Teacher teacher)
: m_name(name)
, m_students(students)
, m_teacher(teacher)
{
}


Course::~Course(){
    
}

string Course::getCourseName() const{
    return m_name;
}

std::vector<Student> Course::getStudents() const{
    return m_students;
}

Teacher Course::getTeacher() const {
    return m_teacher;
}

void Course::setCourseName(string name){
    m_name = name;
}

void Course::setTeacher(Teacher teacher){
    m_teacher = teacher;
}

void Course::addStudent(Student student){
    m_students.push_back(student);
}

