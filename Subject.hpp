//
//  Subject.hpp
//  COMP345Practice
//
//  Created by Dimitre Bogdanov on 2016-12-12.
//  Copyright © 2016 Dimitre Bogdanov. All rights reserved.
//

#ifndef Subject_hpp
#define Subject_hpp

#include <stdio.h>
#include <list>
#include "Observer.hpp"

class Subject{
private:
    std::list<Observer*> *observers;
public:
    Subject();
    ~Subject();
    void detach(Observer*);
    void attach(Observer*);
    void notify();
};

#endif /* Subject_hpp */
