#include "Sistema.h"

void Sistema::setCliente(Cliente _cliente)
{
	m_clientes.push_back(_cliente);
}

void Sistema::setProducto(Producto _productos)
{
	m_productos.push_back(_productos);
}

void Sistema::setProveedor(Proveedor _proveedores)
{
	m_proveedores.push_back(_proveedores);
}

vector<Cliente> Sistema::getClientes()
{
	return m_clientes;
}

vector<Producto> Sistema::getProductos()
{
	return m_productos;
}

vector<Proveedor> Sistema::getProveedores()
{
	return m_proveedores;
}

Sistema::Sistema()
{
	// Inicializacion de variables
	setCliente(Cliente("Juan", 0, 1234567890, "juan@oxxo-cliente.com"));
	setProveedor(Proveedor("Coca-Cola", 1000));

	// Ejecucion del sistema
	progressInitial();
	menu();
}

void Sistema::menu() {
	while (true)
	{
		cout << "<<< Bienvenido al sistema Oxxo >>>\n" << endl;
		cout << "===============================" << endl;
		cout << "Menu de acciones" << endl;
		cout << "1. Agregar cliente" << endl;
		cout << "2. Agregar producto" << endl;
		cout << "3. Agregar proveedor" << endl;
		cout << "===============================" << endl;


		int opcion;
		cout << "Ingrese una opcion: ";
		cin >> opcion;

		waitChange(0.5);

		// Instancia
		switch (opcion) {
		case 1:
			registrarClientes();
			break;
		case 2:
			registrarProducto();
			break;
		case 3:
			registrarProveedor();
			break;
		default:
			cout << "Opcion no valida" << endl;
			break;
		}

		bool continuar;
		cout << "Quieres hacer otra accion?" << endl;
		cout << "0. No" << endl;
		cout << "1. Si" << endl;
		cin >> continuar;

		if (!continuar) {
			break;
		}

		waitChange(0.5);
	}
}

void Sistema::registrarClientes()
{
	string nombre;
	cout << "Ingrese el nombre: " << endl;
	cin >> nombre;
	cin.ignore();

	int telefono;
	cout << "Ingrese el numero de telefono: " << endl;
	cin >> telefono;

	string email;
	cout << "Ingrese el email: " << endl;
	cin >> email;
	cin.ignore();

	Cliente cliente(nombre, 0, telefono, email);

	setCliente(cliente);
}

void Sistema::registrarProveedor()
{
	string nombre;
	cout << "Ingrese el nombre: " << endl;
	cin >> nombre;
	cin.ignore();

	Proveedor proveedor(nombre, m_proveedores.back().getId() + 1);

	setProveedor(proveedor);
}

void Sistema::registrarProducto()
{
	cout << "<< Lista de proveedores >>" << endl;
	for_each(m_proveedores.begin(), m_proveedores.end(), [](Proveedor _proveedor) {
		cout << "Id: " << _proveedor.getId() << " | Nombre:" << _proveedor.getMarca() << endl;
		});
	cout << "===============================" << endl;

	int id_proveedor;
	cout << "Ingrese el id del proveedor: " << endl;
	cin >> id_proveedor;

	string nombre;
	cout << "Ingrese el nombre del producto: " << endl;
	cin >> nombre;
	cin.ignore();

	int tipoMedida;
	cout << "Ingrese el tipo de medida: " << endl;
	cin >> tipoMedida;

	int cantidad;
	cout << "Ingrese la cantidad: " << endl;
	cin >> cantidad;

	// Buscar proveedor
	Proveedor proveedorTemporal;
	for_each(m_proveedores.begin(), m_proveedores.end(), [&id_proveedor, &proveedorTemporal](Proveedor _proveedor) {
		if (_proveedor.getId() == id_proveedor) {
			proveedorTemporal = _proveedor;
		}
		});

	Producto producto(proveedorTemporal, nombre, tipoMedida, cantidad);
}


void Sistema::progressInitial() {
	string no_uso;
	for (int i = 0; i <= 100; i++) {
		cout << "Cargando: " << i << "%" << endl;

		// Simular error de carga
		if (i == 50) {
			cout << "Error de carga, da enter para continuar..." << endl;
			getline(cin, no_uso);
		}

		if (i == 99) {
			// Cargar 99.99...%
			for (int j = 0; j <= 100;j++) {
				cout << "Cargando: " << i << "." << j << "%" << endl;
				waitChange(0.5);
			}
		}

		waitChange(0.5);
	}
}

void Sistema::waitChange(int _seconds) {
	sleep_for(seconds(_seconds));
	system("CLS");
}
