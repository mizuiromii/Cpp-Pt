#include "Calclation.h"

// プロトタイプ宣言
void SetX(float a, float b);
void SetY(float a, float b);

int main() {
    // インスタンスXの処理
    SetX(5.0, 10.0);
    // インスタンスYの処理
    SetY(8.0, 3.0);

    return 0;
}

// インスタンスXのアクセス関数を呼ぶ
void SetX(float a, float b) {
    Calclation x;
    x.SetA(a);
    x.SetB(b);
    x.Disp();
}

// インスタンスYのアクセス関数を呼ぶ
void SetY(float a, float b) {
    Calclation y;
    y.SetA(a);
    y.SetB(b);
    y.Disp();
}