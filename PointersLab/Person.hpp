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

using namespace std;
#include <stdio.h>
#include <string>

class Person
{
private:
    string name;
    int age;
    double height;
    double weight;
    
public:
    Person();
    
    Person(string name, int age, double height, double weight);
    
    ~Person();
    
    string getName();
    int getAge();
    double getHeight();
    double getWeight();
    
    void setName(string name);
};
