//
//  View.hpp
//  COMP345Practice
//
//  Created by Dimitre Bogdanov on 2016-12-12.
//  Copyright © 2016 Dimitre Bogdanov. All rights reserved.
//

#ifndef View_hpp
#define View_hpp

#include <stdio.h>
#include "Observer.hpp"

class View:public Observer{
public:
    int timer = 0;
    void update();
};

#endif /* View_hpp */
