#pragma once
#include "Prerequisites.h";
#include <Cliente.h>
#include <Proveedor.h>

class Sistema
{
private:
	vector<Cliente> m_clientes;
	vector<Proveedor> m_proveedores;

	// Setters
	void setCliente(Cliente _cliente);
	void setProducto(Producto _producto, Proveedor _proveedor);
	void setProveedor(Proveedor _proveedores);

	// Metodos
	void menu();
	void registerClientes();
	void registerProveedor();
	void registerProducto();
	void showClientes();
	void showProductos();
	void showProveedores();
	void deleteCliente();
	void sellProducto();
	void progressInitial();
	void waitChange(int);

public:
	Sistema();
};