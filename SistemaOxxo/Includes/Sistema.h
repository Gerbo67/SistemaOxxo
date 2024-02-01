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

	// Setters
	void setCliente(Cliente _cliente);
	void setProducto(Producto);
	void setProveedor(Proveedor);

	// Getters
	vector<Cliente> getClientes();
	vector<Producto> getProductos();
	vector<Proveedor> getProveedores();

	// Metodos
	void menu();
	void registrarClientes();
	void registrarProveedor();
	void registrarProducto();
	void progressInitial();
	void waitChange(int);

public:
	Sistema();
};