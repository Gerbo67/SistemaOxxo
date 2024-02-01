#include "Sistema.h"

void Sistema::setClientes(vector<Cliente> _clientes)
{
	m_clientes = _clientes;
}

void Sistema::setProductos(vector<Producto> _productos)
{
	m_productos = _productos;
}

void Sistema::setProveedores(vector<Proveedor> _proveedores)
{
	m_proveedores = _proveedores;
}

vector<Cliente> Sistema::getClientes()
{
	return m_clientes;
}

vector<Producto> Sistema::getProductos()
{
	return m_productos;
}

vector<Proveedor> Sistema::getProveedores()
{
	return m_proveedores;
}
