//
//  Person.hpp
//  PointersLab
//
//  Created by Monisha Gunalan2 on 2017-02-17.
//  Copyright © 2017 Monisha Gunalan2. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#endif /* Person_hpp */

//using namespace std;
#include <stdio.h>
#include <string>

class Person
{
private:
    std::string m_name;
    int m_age;
    double m_height;
    double m_weight;
    
public:
    Person();
    
    Person(const std::string &name, int age, double height, double weight);
    
    ~Person();
    
    std::string  getName() const;
    int getAge() const;
    double getHeight() const;
    double getWeight() const;
    
    void setName(std::string  name);
};
