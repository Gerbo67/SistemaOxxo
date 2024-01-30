#pragma once
#include "Prerequisites.h";
#include "Cliente.h"
#include "Producto.h"
#include "Proveedor.h"

class Sistema : public Cliente, public Producto, public Proveedor
{
public:
	// Registra un nuevo cliente
	void registrarCliente(string nombre, int puntos, int telefono, string email) {
		Cliente(nombre, puntos, telefono, email);
	};

	// Registra un nuevo producto
	void registrarProducto(string nombre, int tipoMedida, int cantidad) {
		Producto(nombre, tipoMedida, cantidad);
	};

	// Registra un nuevo proveedor
	void registrarProveedor(string marca, vector<Producto> productos) {
		Proveedor(marca, productos);
	};
};