#pragma once
#include "Prerequisites.h";
#include <Sistema.h>

int main() {

	// Crear objeto sistema
	Sistema sistema = Sistema();

	// Crear clientes
    vector<Cliente> listaClientes ={
		Cliente("Juan", 0, 1234567890, "juan@outlook.es"),
		Cliente("Pedro", 0, 1234567890, "pedrp@outlook.es")
		};


    // Crear productos
    vector<Producto> listaProductos = {
        Producto("Coca-Cola refresco", 1, 10),
        Producto("Pepsi refresco", 1, 10)
    };
    sistema.setProductos(listaProductos);

    // Crear proveedores
    vector<Proveedor> proveedores = {
        Proveedor("Coca-Cola", {listaProductos[0]}),
        Proveedor("Pepsico", {listaProductos[1]})
    };
    sistema.setProveedores(proveedores);

    // Obtener Proveedor
    vector<Proveedor> listaProveedores = sistema.getProveedores();

	return 0;
}