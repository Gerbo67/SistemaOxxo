#pragma once
#include "Prerequisites.h";
#include "Proveedor.h"

class Producto
{
private:
	int m_id;
	string m_nombre;
	int m_cantidad;

public:
	// Constructor
	Producto(int _id, string _nombre, int _cantidad);

	// Getters
	int getId();
	string getNombre();
	int getCantidad();

	// Setters
	void setId(int _id);
	void setNombre(string _nombre);
	void setCantidad(int _cantidad);
};