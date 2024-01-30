#pragma once
#include "Prerequisites.h";

class Cliente
{
private:
	string nombre;
	int puntos;
	int telefono;
	string email;

public:
	Cliente(string nombre, int puntos, int telefono, string email) : nombre(nombre), puntos(puntos), telefono(telefono), email(email) {};

	string getNombre() {
		return nombre;
	};
	int getPuntos() {
		return puntos;
	};
	int getTelefono() {
		return telefono;
	};
	string getEmail() {
		return email;
	};
	void setNombre(string nombre) {
		this->nombre = nombre;
	};
	void setPuntos(int puntos) {
		this->puntos = puntos;
	};
	void setTelefono(int telefono) {
		this->telefono = telefono;
	};
	void setEmail(string email) {
		this->email = email;
	};
};