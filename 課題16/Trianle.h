#include "Figure.h"

class Triangle : public Figure
{
public:
    void Calc();
};

void Triangle::Calc()
{
    menseki = (teihen * takasa) / 2;
}