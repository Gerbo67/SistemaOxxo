#include "Cliente.h"

Cliente::Cliente(int _id, string _nombre, int _puntos, int _telefono, string _email)
{
	m_id = _id;
	m_nombre = _nombre;
	m_puntos = _puntos;
	m_telefono = _telefono;
	m_email = _email;
}

int Cliente::getId()
{
	return m_id;
}

string Cliente::getNombre()
{
	return m_nombre;
}

int Cliente::getPuntos()
{
	return m_puntos;
}

int Cliente::getTelefono()
{
	return m_telefono;
}

string Cliente::getEmail()
{
	return m_email;
}

void Cliente::setId(int _id)
{
	m_id = _id;
}

void Cliente::setNombre(string _nombre)
{
	m_nombre = _nombre;
}

void Cliente::setPuntos(int _puntos)
{
	m_puntos = _puntos;
}

void Cliente::setTelefono(int _telefono)
{
	m_telefono = _telefono;
}

void Cliente::setEmail(string _email)
{
	m_email = _email;
}
