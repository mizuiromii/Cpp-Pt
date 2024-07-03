#include "Figure.h"

class Square : public Figure
{
public:
    void Calc();
};

void Square::Calc()
{
    menseki = teihen * takasa;
}