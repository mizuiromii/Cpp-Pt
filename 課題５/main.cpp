//アクセス関数の必要性
//今回のコードではvoid SetValue(int a):とvoid Disp() が定義されており
// その関数をカプセル化し、データを保護することができる。
#include <iostream>
#include "Data.h"

int main() 
{
	int i;
	std::cin >> i;
	
	Data x;
	
	x.SetValue(i); 
	x.Disp(); 
}

