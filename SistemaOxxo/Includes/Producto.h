#pragma once
#include "Prerequisites.h";

class Producto
{
private:
	string m_nombre;
	int m_tipoMedida;
	int m_cantidad;

public:
	// Constructor
	Producto(string, int, int);

	// Getters
	string getNombre();
	int getTipoMedida();
	int getCantidad();

	// Setters
	void setNombre(string);
	void setTipoMedida(int);
	void setCantidad(int);
};