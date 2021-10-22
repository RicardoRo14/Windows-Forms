#pragma once
using namespace System::Drawing;
using namespace System;
class Circulo {
private:
	int x, y;
	int radio;
	int dx, dy;
public:

	Circulo(int x,int y,int radio)
	{
		Random^ r=gcnew Random();
		this->x = x;
		this->y = y;
		this->radio = radio;
		dx = r->Next(4,10);
		dy = r->Next(4, 10);
	}
	void borrarDibujar(Graphics^ g,Pen^ pen) {
		g->DrawEllipse(pen, x, y, 2 * radio, 2 * radio);
	}
	//void borrar(Graphics^ g, Pen^ pen) {
	//	g->DrawEllipse(pen, x, y, 2 * radio, 2 * radio);
	//}
	void mover(Graphics^ g, Pen^ penDibujar,Pen^ penBorrar) {
		borrarDibujar(g, penBorrar);
		if (x + dx<0 || x + dx + 2*radio>g->VisibleClipBounds.Width)
			dx *= -1;
		if (y + dy<0 || y + dy + 2*radio>g->VisibleClipBounds.Height)
			dy *= -1;
		x += dx;
		y += dy;
		borrarDibujar(g,penDibujar);
	}
	~Circulo() {}
};