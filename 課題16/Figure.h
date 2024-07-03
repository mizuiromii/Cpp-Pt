#include <iostream>

// 基本となる図形クラス
class Figure
{
protected:
    float teihen, takasa, menseki;
public:
    void SetTeihen(float f);
    void SetTakasa(float f);
    void Disp();
};

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
    std::cout << "底辺: " << teihen << ", 高さ: " << takasa << ", 面積: " << menseki << std::endl;
}
