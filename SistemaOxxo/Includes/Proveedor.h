#pragma once
#include "Prerequisites.h";
#include "Producto.h";

class Proveedor
{
private:
	int m_id;
	string m_nombre;
	vector<Producto> m_productos;

public:
	// Constructor
	Proveedor(string _nombre, int _id, vector<Producto> _productos);

	// Getters
	string getMarca();
	int getId();
	vector<Producto> getProductos();

	// Setters
	void setMarca(string);
	void setId(int _id);
	void setCantidad(int _cantidad, int _id);
	void setProductos(Producto _producto);
};