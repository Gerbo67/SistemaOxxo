#pragma once
#include "Prerequisites.h";

class Producto
{
private:
	string nombre;
	int tipoMedida;
	int cantidad;

public:
	Producto(string nombre, int tipoMedida, int cantidad) : nombre(nombre), tipoMedida(tipoMedida), cantidad(cantidad) {};

	string getNombre() {
		return nombre;
	};
	int getTipoMedida() {
		return tipoMedida;
	};
	int getCantidad() {
		return cantidad;
	};
	void setNombre(string nombre) {
		this->nombre = nombre;
	};
	void setTipoMedida(int tipoMedida) {
		this->tipoMedida = tipoMedida;
	};
	void setCantidad(int cantidad) {
		this->cantidad = cantidad;
	};
};