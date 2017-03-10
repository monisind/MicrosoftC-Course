//
//  Teacher.hpp
//  Assign2
//
//  Created by Monisha Gunalan2 on 2017-03-03.
//  Copyright © 2017 Monisha Gunalan2. All rights reserved.
//

#ifndef Teacher_hpp
#define Teacher_hpp

#include <stdio.h>
#include <string>

class Teacher
{
private:
    std::string m_firstName;
    std::string m_lastName;
    int m_age;
    std::string m_address;
    std::string m_city;
    std::string m_phone;
    
public:
    Teacher();
    
    Teacher(const std::string &firstName, const std::string &lastName, const int age, const std::string &address, const std::string &city, const std::string &phone);

    ~Teacher();
    
    std::string getFirstName() const;
    std::string getLastName() const;
    int getAge() const;
    std::string getAddress() const;
    std::string getCity() const;
    std::string getPhone() const;
    
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setAge(int age);
    void setAddress(std::string address);
    void setCity(std::string city);
    void setPhone(std::string phone);
    
    void gradeStudent();
    void sitInClass();
};
#endif /* Teacher_hpp */
