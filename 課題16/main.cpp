#include "Square.h"
#include "Trianle.h"

int main()
{
    Square s;
    Triangle t;

    // lŠpŒ`
    s.SetTeihen(10.0f);
    s.SetTakasa(5.5f);
    s.Calc();
    s.Disp();

    // OŠpŒ`
    t.SetTeihen(10.0f);
    t.SetTakasa(5.5f);
    t.Calc();
    t.Disp();
}