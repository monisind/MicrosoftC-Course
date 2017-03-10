//
//  main.cpp
//  Assign2
//
//  Created by Monisha Gunalan2 on 2017-03-03.
//  Copyright © 2017 Monisha Gunalan2. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Student.hpp"
#include "Teacher.hpp"
#include "Course.hpp"
#include <vector>

int main(int argc, const char * argv[]) {

    
    Student *student1 = new Student("John", "Doe", 20, "123 main street", "ottawa", "613 123 1234");
    Student *student2 = new Student("James", "Doe", 20, "1 first ave", "ottawa", "613 888 8888");
    Student *student3 = new Student("Kevin", "Doe", 20, "4 march road", "ottawa", "613 111 1111");
    
    Teacher *teacher = new Teacher("David", "Walter", 50, "123 main street", "ottawa", "613 123 1234");
    
    Course *course = new Course("C++");
    course->setTeacher(*teacher);
    course->addStudent(*student1);
    course->addStudent(*student2);
    course->addStudent(*student3);
    
    cout<< "course name: " << course->getCourseName() <<endl;
    
    teacher->gradeStudent();
    
    return 0;
}
