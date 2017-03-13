//
//  main.cpp
//  PointersLab
//
//  Created by Monisha Gunalan2 on 2017-02-17.
//  Copyright © 2017 Monisha Gunalan2. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Person.hpp"


void passByValue(int);
void passByRef(int &num1);
void modifyPerson(Person &person);

int main(int argc, const char * argv[]) {
    int num1 = 3;
    int *pNum = new int;
    
    *pNum = 5;
    
    passByValue(num1);
    cout<< "num1: " << num1 <<endl <<endl;
    
    passByRef(*pNum);
    cout<< "pNum: " << *pNum <<endl <<endl;
    
    
    //passByValue(pNum); // Error: need to dereference pNum
    passByValue(*pNum);
    cout<< "pNum: " << *pNum <<endl <<endl;
    
    double *dNum = new double;
    *dNum = 10;
    cout<< "dNum: " << *dNum <<endl;
    delete dNum;
    cout<< "dNum: " << *dNum <<endl <<endl;
    
    Person *person = new Person("John Doe", 20, 5.9, 140);
    cout<< "name: " << person->getName() <<endl;
    cout<< "age: " << person->getAge() <<endl;
    cout<< "height: " << person->getHeight() <<endl;
    cout<< "weight: " << person->getWeight() <<endl <<endl;
    
    modifyPerson(*person);
    cout<< "name: " << person->getName() <<endl;
    
    delete person;
    
    return 0;
}


void passByValue(int num1){
    
    num1++;
    
    cout<< "Pass by Value" <<endl;
    cout<< "num1: " << num1 <<endl;
}

void passByRef(int &num){
    
    num = 50;
    cout<< "Pass by Reference" <<endl;
    cout<< "pNum: " << num <<endl;
    
}

void modifyPerson(Person &person){
    person.setName("David Joe");
}
