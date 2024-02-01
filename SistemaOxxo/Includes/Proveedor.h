#pragma once
#include "Prerequisites.h";

class Proveedor
{
private:
	int m_id;
	string m_nombre;
public:
	// Constructor
	Proveedor(string _nombre, int _id);
	Proveedor();

	// Getters
	string getMarca();
	int getId();

	// Setters
	void setMarca(string);
	void setId(int _id);
};