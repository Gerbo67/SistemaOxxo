#include "Proveedor.h"
#include "Prerequisites.h";

Proveedor::Proveedor(string _nombre, int _id)
{
	m_nombre = _nombre;
	m_id = _id;
}

Proveedor::Proveedor()
{
}

string Proveedor::getMarca()
{
	return m_nombre;
}

int Proveedor::getId()
{
	return m_id;
}

void Proveedor::setMarca(string _nombre)
{
	m_nombre = _nombre;
}

void Proveedor::setId(int _id)
{
	m_id = _id;
}
