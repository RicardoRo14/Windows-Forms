#pragma once
#include"Elipse.h"
#include"Rectangulo.h"
#include"Linea.h"
class Controller {
private:
	Elipse** elipses;
	Rectangulo** rectangulos;
	Linea** lineas;
	int cantidadLineas;
	int cantidadElipses;
	int cantidadRectangulos;
public:
	Controller() {
		cantidadLineas = 0;
		cantidadElipses = 0;
		cantidadRectangulos = 0;
		elipses = nullptr;
		rectangulos = nullptr;
		lineas = nullptr;
	}
	Linea* getLinea(int i) { return lineas[i]; }
	Elipse* getElipse(int i) { return elipses[i]; }
	Rectangulo* getRectangulo(int i) { return rectangulos[i]; }

	void agregarLinea(int x1,int y1,int x2,int y2) {
		Linea** aux = new Linea * [cantidadLineas + 1];
		for (int i = 0; i < cantidadLineas; i++) {
			aux[i] = lineas[i];
		}
		aux[cantidadLineas] = new Linea(x1, y1, x2, y2);
		if (lineas != nullptr) delete[] lineas;
		lineas = aux;
		cantidadLineas += 1;
	}
	void agregarElipse(int x, int y, int rMayor, int rMenor) {
		Elipse** aux = new Elipse * [cantidadElipses + 1];
		for (int i = 0; i < cantidadElipses; i++) {
			aux[i] = elipses[i];
		}
		aux[cantidadElipses] = new Elipse(x, y, rMayor, rMenor);
		if (elipses != nullptr) delete[] elipses;
		elipses = aux;
		cantidadElipses += 1;
	}

	void agregarRectangulo(int x, int y, int lado1, int lado2) {
		Rectangulo** aux = new Rectangulo * [cantidadRectangulos + 1];
		for (int i = 0; i < cantidadRectangulos; i++) {
			aux[i] = rectangulos[i];
		}
		aux[cantidadRectangulos] = new Rectangulo(x, y, lado1, lado2);
		if (rectangulos != nullptr) delete[] rectangulos;
		rectangulos = aux;
		cantidadRectangulos += 1;
	}
	int getCantidadElipses() { return cantidadElipses; }
	int getCantidadRectangulos() { return cantidadRectangulos; }
	int getCantidadLineas() { return cantidadLineas; }
	~Controller() {
		for (int i = 0; i < cantidadElipses; i++) {
			delete elipses[i];
		}
		delete[] elipses;
		for (int i = 0; i < cantidadRectangulos; i++) {
			delete rectangulos[i];
		}
		delete[] rectangulos;
	}
};