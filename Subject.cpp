//
//  Subject.cpp
//  COMP345Practice
//
//  Created by Dimitre Bogdanov on 2016-12-12.
//  Copyright © 2016 Dimitre Bogdanov. All rights reserved.
//

#include "Subject.hpp"

void Subject::attach(Observer* obs){
    observers->push_back(obs);
}

void Subject::detach(Observer* obs){
    observers->remove(obs);
}

void Subject::notify(){
    std::list<Observer*>::iterator i = observers->begin();
    for(; i != observers->end(); ++i){
        (*i)->update();
    }
}

Subject::Subject(){
    observers = new std::list<Observer*>;
}

Subject::~Subject(){
    delete observers;
}
