//
//  Student.cpp
//  Assign2
//
//  Created by Monisha Gunalan2 on 2017-03-03.
//  Copyright © 2017 Monisha Gunalan2. All rights reserved.
//

#include "Student.hpp"
#include <iostream>
using namespace std;
//using std::string;


Student::Student(){
    
}

Student::Student(const string &firstName, const string &lastName, int age, const string &address, const string &city, const string &phone)
: m_firstName(firstName)
, m_lastName(lastName)
, m_age(age)
, m_address(address)
, m_city(city)
, m_phone(phone)
{
}

Student::~Student()
{
    
}

string Student::getFirstName() const
{
    return m_firstName;
}

string Student::getLastName() const
{
    return m_lastName;
}

int Student::getAge() const
{
    return m_age;
}

string Student::getAddress() const
{
    return m_address;
}

string Student::getCity() const
{
    return m_city;
}

string Student::getPhone() const
{
    return m_phone;
}

void Student::setFirstName(string firstName)
{
    m_firstName = firstName;
}

void Student::setLastName(string lastName)
{
    m_lastName = lastName;
}

void Student::setAge(int age)
{
    m_age = age;
}

void Student::setAddress(string address)
{
    m_address = address;
}

void Student::setCity(string city)
{
    m_city = city;
}

void Student::setPhone(string phone)
{
    m_phone = phone;
}

void Student::sitInClass()
{
    cout<< "Sitting in main theater" << endl;
}
