//
//  Person.cpp
//  PointersLab
//
//  Created by Monisha Gunalan2 on 2017-02-17.
//  Copyright © 2017 Monisha Gunalan2. All rights reserved.
//

#include "Person.hpp"

Person:: Person(){

}

Person::Person(string name, int age, double height, double weight){
    this->name = name;
    this->age = age;
    this->height = height;
    this->weight = weight;
}

Person::~Person(){
    
}

string Person::getName(){
    return this->name;
}

void Person::setName(string name){
    this->name = name;
}

int Person::getAge(){
    return this->age;
}

double Person::getHeight(){
    return this->height;
}

double Person::getWeight(){
    return this->weight;
}
