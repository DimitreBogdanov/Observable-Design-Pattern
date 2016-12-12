//
//  Timer.hpp
//  COMP345Practice
//
//  Created by Dimitre Bogdanov on 2016-12-12.
//  Copyright © 2016 Dimitre Bogdanov. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <stdio.h>
#include "Subject.hpp"
#include <unistd.h>

class Timer:public Subject{
public:
    Timer(){}
    int time = 0;
    void startTimer(int timer){
        for (int i = 0; i < timer; i++) {
            notify();
            usleep(1000000);
        }
    }
};

#endif /* Timer_hpp */
