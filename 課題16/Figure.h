#include <iostream>

// ��{�ƂȂ�}�`�N���X
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
    std::cout << "���: " << teihen << ", ����: " << takasa << ", �ʐ�: " << menseki << std::endl;
}
