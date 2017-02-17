//
//  Person.cpp
//  PointersLab
//
//  Created by Monisha Gunalan2 on 2017-02-17.
//  Copyright © 2017 Monisha Gunalan2. All rights reserved.
//

#include "Person.hpp"
using std::string;

Person:: Person(){

}

Person::Person(const string &name, int age, double height, double weight)
: m_name(name)
, m_age(age)
, m_height(height)
, m_weight(weight)
{
}

Person::~Person(){

}

string Person::getName() const{
    return m_name;
}

void Person::setName(string name){
    m_name = name;
}

int Person::getAge() const{
    return m_age;
}

double Person::getHeight() const{
    return m_height;
}

double Person::getWeight() const{
    return m_weight;
}
