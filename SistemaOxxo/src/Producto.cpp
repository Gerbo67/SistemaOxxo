#include "Producto.h"
#include <Proveedor.h>

Producto::Producto(Proveedor _proveedor, string _nombre, int _tipoMedida, int _cantidad)
{
	m_proveedor = _proveedor;
	m_nombre = _nombre;
	m_tipoMedida = _tipoMedida;
	m_cantidad = _cantidad;
}

Proveedor Producto::getProveedor()
{
	return m_proveedor;
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

void Producto::setProveedor(Proveedor _proveedor)
{
	m_proveedor = _proveedor;
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
