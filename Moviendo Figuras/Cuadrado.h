#pragma once
using namespace System::Drawing;
using namespace System;
class Cuadrado {
private:
	int x, y;
	int lado;
	int dx, dy;
public:

	Cuadrado(int x, int y, int lado)
	{
		Random^ r=gcnew Random();
		this->x = x;
		this->y = y;
		this->lado = lado;
		dx = r->Next(4, 10);
		dy = r->Next(4, 10);
	}
	void borrarDibujar(Graphics^ g, Pen^ pen) {
		g->DrawRectangle(pen, x, y, lado, lado);
	}
	//void borrar(Graphics^ g, Pen^ pen) {
	//	g->DrawEllipse(pen, x, y, 2 * radio, 2 * radio);
	//}
	void mover(Graphics^ g, Pen^ penDibujar, Pen^ penBorrar) {
		borrarDibujar(g, penBorrar);
		if (x + dx<0 || x + dx + lado>g->VisibleClipBounds.Width)
			dx *= -1;
		if (y + dy<0 || y + dy + lado>g->VisibleClipBounds.Height)
			dy *= -1;
		x += dx;
		y += dy;
		borrarDibujar(g, penDibujar);
	}
	~Cuadrado() {}
};