#pragma once
#include "Prerequisites.h";
#include "Cliente.h"
#include "Producto.h"
#include "Proveedor.h"

class Sistema
{
private:
	vector<Cliente> m_clientes;
	vector<Producto> m_productos;
	vector<Proveedor> m_proveedores;

public:

	// Setters
	void setClientes(vector<Cliente>);
	void setProductos(vector<Producto>);
	void setProveedores(vector<Proveedor>);

	// Getters
	vector<Cliente> getClientes();
	vector<Producto> getProductos();
	vector<Proveedor> getProveedores();
};