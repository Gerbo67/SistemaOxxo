#include "Proveedor.h"

Proveedor::Proveedor(string _nombre, int _id, vector<Producto> _productos)
{
	m_id = _id;
	m_nombre = _nombre;
	m_productos = _productos;
}

string Proveedor::getMarca()
{
	return m_nombre;
}

int Proveedor::getId()
{
	return m_id;
}

vector<Producto> Proveedor::getProductos()
{
	return m_productos;
}

void Proveedor::setMarca(string _nombre)
{
	m_nombre = _nombre;
}

void Proveedor::setId(int _id)
{
	m_id = _id;
}

void Proveedor::setCantidad(int _cantidad, int _id)
{
	for (int i = 0; i < m_productos.size(); i++) {
		if (m_productos[i].getId() == _id) {
			m_productos[i].setCantidad(_cantidad);
		}
	}
}

void Proveedor::setProductos(Producto _producto)
{
	m_productos.push_back(_producto);
}
