#pragma once
using namespace System::Drawing;
class Linea {
private:
	int x1, y1;
	int x2, y2;
public:
	Linea(int _x1, int _y1, int _x2, int _y2) :
		x1(_x1), y1(_y1), x2(_x2), y2(_y2)
	{}
	void dibujarLinea(Pen^ pen, Graphics^ g) {
		g->DrawLine(pen, x1, y1, x2, y2);
	}
	~Linea() {}
};