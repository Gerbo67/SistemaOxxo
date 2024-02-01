#pragma once
#include "Prerequisites.h";

class Cliente
{
private:
	string m_nombre;
	int m_puntos;
	int m_telefono;
	string m_email;

public:
	// Constructor
	Cliente(string, int, int, string);
	Cliente();

	// Getters
	string getNombre();
	int getPuntos();
	int getTelefono();
	string getEmail();

	// Setters
	void setNombre(string);
	void setPuntos(int);
	void setTelefono(int);
	void setEmail(string);
};