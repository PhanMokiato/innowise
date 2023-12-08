#include "../include/my_funcs.h"

int Arithmetics::five(){
    return 2+3;
}

int Arithmetics::six() {
    return 1+5;
}

int Arithmetics::eleven(){
    return five() + six();
}