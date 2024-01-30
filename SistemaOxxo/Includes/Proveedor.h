#pragma once
#include "Prerequisites.h";
#include "Producto.h"

class Proveedor
{
private:
	string marca;
	vector<Producto> productos;
public:
	Proveedor(string marca, vector<Producto> productos) : marca(marca), productos(productos) {};

	string getMarca() {
		return marca;
	};
	vector<Producto> getProductos() {
		return productos;
	};
	void setMarca(string marca) {
		this->marca = marca;
	};
	void setProductos(vector<Producto> productos) {
		this->productos = productos;
	};
};