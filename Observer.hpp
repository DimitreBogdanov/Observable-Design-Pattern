//
//  Observer.hpp
//  COMP345Practice
//
//  Created by Dimitre Bogdanov on 2016-12-12.
//  Copyright © 2016 Dimitre Bogdanov. All rights reserved.
//

#ifndef Observer_hpp
#define Observer_hpp

#include <stdio.h>

class Observer{
public:
    ~Observer();
    virtual void update() = 0;
protected:
    Observer();
};

#endif /* Observer_hpp */
