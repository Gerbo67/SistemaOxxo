#include "Producto.h"

Producto::Producto(string _nombre, int _tipoMedida, int _cantidad)
{
	m_nombre = _nombre;
	m_tipoMedida = _tipoMedida;
	m_cantidad = _cantidad;
}

string Producto::getNombre()
{
	return m_nombre;
}

int Producto::getTipoMedida()
{
	return m_tipoMedida;
}

int Producto::getCantidad()
{
	return m_cantidad;
}

void Producto::setNombre(string _nombre)
{
	m_nombre = _nombre;
}

void Producto::setTipoMedida(int _tipoMedida)
{
	m_tipoMedida = _tipoMedida;
}

void Producto::setCantidad(int _cantidad)
{
	m_cantidad = _cantidad;
}
