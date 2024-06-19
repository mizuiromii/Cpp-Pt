//予想
//プログラム開始、関数呼び出し、コンスト呼び出し、デストラ呼び出し、メンバ関数呼び出し、プログラム終了
//実証
//プログラム開始、関数呼び出し、コンスト呼び出し、メンバ関数呼び出し、デストラ呼び出し、プログラム終了

#include "Sample.h"
void Function();
#include <iostream>
int main()
{
	std::cout << "プログラム開始\n";
	Function();
	std::cout << "プログラム終了\n";
}
void Function()
{
	std::cout << "関数が呼び出されました\n";
	//インスタンス作成
	Sample instSample;
	//メンバ関数実行
	instSample.menberFunc();
}