//
//  View.cpp
//  COMP345Practice
//
//  Created by Dimitre Bogdanov on 2016-12-12.
//  Copyright © 2016 Dimitre Bogdanov. All rights reserved.
//

#include "View.hpp"
#include <iostream>

using namespace std;

void View::update(){
    cout << ++timer << endl;
}
