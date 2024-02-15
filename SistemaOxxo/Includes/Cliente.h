#pragma once
#include "Prerequisites.h";

class Cliente
{
private:
	int m_id;
	string m_nombre;
	int m_puntos;
	int m_telefono;
	string m_email;

public:
	// Constructor
	Cliente(int _id, string _nombre, int _puntos, int _telefono, string _email);

	// Getters
	int getId();
	string getNombre();
	int getPuntos();
	int getTelefono();
	string getEmail();

	// Setters
	void setId(int _id);
	void setNombre(string _nombre);
	void setPuntos(int _puntos);
	void setTelefono(int _telefono);
	void setEmail(string _email);
};