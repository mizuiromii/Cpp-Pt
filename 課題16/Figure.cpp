#include "Figure.h"

void Figure::SetTeihen(float f)
{
    teihen = f;
}

void Figure::SetTakasa(float f)
{
    takasa = f;
}

void Figure::Disp() 
{
    std::cout << "���: " << teihen << ", ����: " << takasa << ", �ʐ�: " << menseki << std::endl;
}
 