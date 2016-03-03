//
// Created by thewookie on 3/2/16.
//

#ifndef ANT_FARM_SDL_ENTERTOQUIT_H
#define ANT_FARM_SDL_ENTERTOQUIT_H

#include <iostream>
#include <stdio.h>

using namespace std;

/**
 * This brilliant RAII based solution was taken from user ropez
 * http://www.cplusplus.com/forum/beginner/1988/
 */
class PressEnterToQuit {

public:
    ~PressEnterToQuit() {
      printf("Press enter to quit.");
      cin.ignore();
    }
};


#endif //ANT_FARM_SDL_ENTERTOQUIT_H
