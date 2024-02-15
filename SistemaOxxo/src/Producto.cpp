#include <Proveedor.h>

Producto::Producto(int _id, string _nombre, int _cantidad)
{
	m_id = _id;
	m_nombre = _nombre;
	m_cantidad = _cantidad;
}

int Producto::getId()
{
	return m_id;
}
string Producto::getNombre()
{
	return m_nombre;
}

int Producto::getCantidad()
{
	return m_cantidad;
}

void Producto::setId(int _id)
{
	m_id = _id;
}

void Producto::setNombre(string _nombre)
{
	m_nombre = _nombre;
}

void Producto::setCantidad(int _cantidad)
{
	m_cantidad = _cantidad;
}
