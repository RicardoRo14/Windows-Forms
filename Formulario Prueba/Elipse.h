#pragma once
#define _USE_MATH_DEFINES
#include<math.h>
using namespace System::Drawing;
class Elipse {
private:
	int x, y;
	int radioMayor, radioMenor;
	float area;
public:
	Elipse(int _x,int _y,int _radioMayor,int _radioMenor):
	x(_x),y(_y),radioMayor(_radioMayor),radioMenor(_radioMenor)
	{
		area = radioMayor * radioMenor * M_PI;
	}
	float getArea() { return area; }
	int getX() { return x; }
	int getY() { return y; }
	int getRadioMenor() { return radioMenor; }
	int getRadioMayor() { return radioMayor; }
	void dibujarElipse(Pen^ pen,Graphics ^g) {
		g->DrawEllipse(pen,x,y,2*radioMayor,2*radioMenor);
	}
	~Elipse(){}
};