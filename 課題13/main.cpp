#include "Calclation.h"

// �v���g�^�C�v�錾
void SetX(float a, float b);
void SetY(float a, float b);

int main() {
    // �C���X�^���XX�̏���
    SetX(5.0, 10.0);
    // �C���X�^���XY�̏���
    SetY(8.0, 3.0);

    return 0;
}

// �C���X�^���XX�̃A�N�Z�X�֐����Ă�
void SetX(float a, float b) {
    Calclation x;
    x.SetA(a);
    x.SetB(b);
    x.Disp();
}

// �C���X�^���XY�̃A�N�Z�X�֐����Ă�
void SetY(float a, float b) {
    Calclation y;
    y.SetA(a);
    y.SetB(b);
    y.Disp();
}