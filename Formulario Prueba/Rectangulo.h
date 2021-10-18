#pragma once
using namespace System::Drawing;
class Rectangulo {
private:
	int x, y;
	int lado1, lado2;
	int area;
public:
	Rectangulo(int _x,int _y,int _lado1,int _lado2):
		x(_x),y(_y),lado1(_lado1),lado2(_lado2)
	{
		area = lado1 * lado2;
	}
	int getArea() { return area; }
	int getX() { return x; }
	int getY() { return y; }
	int getLado1() { return lado1; }
	int getLado2() { return lado2; }
	void dibujarRectangulo(Pen^ pen,Graphics^g) {
		g->DrawRectangle(pen, x, y, lado1, lado2);

	}
	~Rectangulo(){}
};