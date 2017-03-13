//
//  Teacher.cpp
//  Assign2
//
//  Created by Monisha Gunalan2 on 2017-03-03.
//  Copyright © 2017 Monisha Gunalan2. All rights reserved.
//

#include "Teacher.hpp"
#include <iostream>
using namespace std;
//using std::string;


Teacher::Teacher(){
    
}

Teacher::Teacher(const string &firstName, const string &lastName, const int age, const string &address, const string &city, const string &phone)
: m_firstName(firstName)
, m_lastName(lastName)
, m_age(age)
, m_address(address)
, m_city(city)
, m_phone(phone)
{
}

Teacher::~Teacher(){
    
}

string Teacher::getFirstName() const{
    return m_firstName;
}

string Teacher::getLastName() const{
    return m_lastName;
}

int Teacher::getAge() const{
    return m_age;
}

string Teacher::getAddress() const{
    return m_address;
}

string Teacher::getCity() const{
    return m_city;
}

string Teacher::getPhone() const{
    return m_phone;
}

void Teacher::setFirstName(string firstName){
    m_firstName = firstName;
}

void Teacher::setLastName(string lastName){
    m_lastName = lastName;
}

void Teacher::setAge(int age){
    m_age = age;
}

void Teacher::setAddress(string address){
    m_address = address;
}

void Teacher::setCity(string city){
    m_city = city;
}

void Teacher::setPhone(string phone){
    m_phone = phone;
}

void Teacher::gradeStudent(){
    cout<< "Student graded" <<endl;
}

void Teacher::sitInClass(){
    cout<< "Sitting at front of class" << endl;
}
