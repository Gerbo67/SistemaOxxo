#pragma once
#include "Prerequisites.h";
#include "Producto.h"

class Proveedor
{
private:
	string m_marca;
	vector<Producto> m_productos;
public:
	// Constructor
	Proveedor(string, vector<Producto>);

	// Getters
	string getMarca();
	vector<Producto> getProductos();

	// Setters
	void setMarca(string);
	void setProductos(vector<Producto>);
};