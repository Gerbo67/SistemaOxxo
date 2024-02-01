#include "Proveedor.h"
#include "Prerequisites.h";

Proveedor::Proveedor(string _marca, vector<Producto> _productos)
{
	m_marca = _marca;
	m_productos = _productos;
}

string Proveedor::getMarca()
{
	return m_marca;
}

vector<Producto> Proveedor::getProductos()
{
	return m_productos;
}

void Proveedor::setMarca(string _marca)
{
	m_marca = _marca;
}

void Proveedor::setProductos(vector<Producto> _productos)
{
	m_productos = _productos;
}
