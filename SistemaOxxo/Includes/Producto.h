#pragma once
#include "Prerequisites.h";
#include "Proveedor.h"

class Producto
{
private:
	Proveedor m_proveedor;
	string m_nombre;
	int m_tipoMedida;
	int m_cantidad;

public:
	// Constructor
	Producto(Proveedor, string, int, int);

	// Getters
	Proveedor getProveedor();
	string getNombre();
	int getTipoMedida();
	int getCantidad();

	// Setters
	void setProveedor(Proveedor);
	void setNombre(string);
	void setTipoMedida(int);
	void setCantidad(int);
};