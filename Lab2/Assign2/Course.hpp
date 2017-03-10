//
//  Course.hpp
//  Assign2
//
//  Created by Monisha Gunalan2 on 2017-03-03.
//  Copyright © 2017 Monisha Gunalan2. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp

#include <stdio.h>
#include "Student.hpp"
#include "Teacher.hpp"
#include <vector>


class Course
{
private:
    std::vector<Student> m_students;
    Teacher m_teacher;
    std::string m_name;

public:
    Course();
    
    Course(const std::string &name);
    
    Course(const std::string &name, const std::vector<Student> &students, const Teacher teacher);
    
    ~Course();
    
    std::string getCourseName() const;
    std::vector<Student> getStudents() const;
    Teacher getTeacher() const;

    void setCourseName(std::string name);
    void setTeacher(Teacher teacher);
    void addStudent(Student student);

    
};


#endif /* Course_hpp */
