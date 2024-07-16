#include <iostream>
#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
protected:
	float teihen, takasa, menseki;

public:
	void SetTeihen(float f);
	void SetTakasa(float f);
	void Disp();
};
#endif // FIGURE_H