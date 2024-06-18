#include <iostream>
#include "Calclation.h"

void Calclation::SetA(float val)
{
    a = val;
}

void Calclation::SetB(float val)
{
    b = val;
}

void Calclation::Disp() {
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
}