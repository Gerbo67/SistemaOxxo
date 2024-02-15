#include "Sistema.h"

void Sistema::setCliente(Cliente _cliente)
{
	m_clientes.push_back(_cliente);
}

void Sistema::setProducto(Producto _producto, Proveedor _proveedor)
{
	// Agregar producto al proveedor de la lista de proveedores
	for (int i = 0; i < m_proveedores.size(); i++) {
		if (m_proveedores[i].getId() == _proveedor.getId()) {
			m_proveedores[i].setProductos(_producto);
			return;
		}
	}
}

void Sistema::setProveedor(Proveedor _proveedores)
{

	for (int i = 0; i < m_proveedores.size(); i++) {
		if (m_proveedores[i].getId() == _proveedores.getId()) {
			m_proveedores[i] = _proveedores;
			return;
		}
	}

	m_proveedores.push_back(_proveedores);

}

void Sistema::showClientes()
{
	cout << "Clientes" << endl;
	for (Cliente cliente : m_clientes) {
		cout << "Id: " << cliente.getId() << "| Nombre: " << cliente.getNombre() << " | Telefono: " << cliente.getTelefono() << " | Email: " << cliente.getEmail() << endl;
	}
	cout << "===============================" << endl;
}

void Sistema::showProductos()
{
	cout << "Productos" << endl;
	for (Proveedor proveedor : m_proveedores) {
		cout << "Proveedor: " << proveedor.getMarca() << endl;
		for (Producto producto : proveedor.getProductos()) {
			cout << "Id: " << producto.getId() << "| Nombre: " << producto.getNombre() << " | Cantidad: " << producto.getCantidad() << endl;
		}
	}
	cout << "===============================" << endl;
}

void Sistema::showProveedores()
{
	cout << "Proveedores" << endl;
	for (Proveedor proveedor : m_proveedores) {
		cout << "Id : " << proveedor.getId() << "Nombre : " << proveedor.getMarca() << endl;
	}
	cout << "===============================" << endl;
}

void Sistema::deleteCliente()
{
	cout << "Clientes" << endl;
	showClientes();
	cout << "===============================" << endl;

	int id_cliente;
	cout << "Ingrese el id del cliente: " << endl;
	cin >> id_cliente;

	// Buscar cliente
	for (int i = 0; i < m_clientes.size(); i++) {
		if (m_clientes[i].getId() == id_cliente) {
			m_clientes.erase(m_clientes.begin() + i);
			cout << "Cliente eliminado" << endl;
			waitChange(2);
			return;
		}
	}

	cout << "Cliente no encontrado" << endl;
	waitChange(2);
}

void Sistema::sellProducto()
{
	cout << "Productos" << endl;
	showProductos();
	cout << "===============================" << endl;

	int id_producto;
	cout << "Ingrese el id del producto: " << endl;
	cin >> id_producto;

	// Buscar producto
	for (Proveedor proveedor : m_proveedores) {
		for (int i = 0; i < proveedor.getProductos().size(); i++) {
			if (proveedor.getProductos()[i].getId() == id_producto) {
				int cantidad;
				cout << "Ingrese la cantidad: " << endl;
				cin >> cantidad;

				// Validaciones
				if (cantidad <= 0) {
					cout << "Cantidad no valida" << endl;
					return;
				}

				if (proveedor.getProductos()[i].getCantidad() < cantidad) {
					cout << "No hay suficiente cantidad" << endl;
					return;
				}

				// Vender producto
				proveedor.setCantidad(proveedor.getProductos()[i].getCantidad() - cantidad, id_producto);
				cout << "Producto vendido" << endl;

				// Actualizar proveedor
				setProveedor(proveedor);

				waitChange(2);
				return;
			}
		}
	}

	cout << "Producto no encontrado" << endl;
	waitChange(2);
}

Sistema::Sistema()
{
	// Inicializacion de variables
	setCliente(Cliente(1000, "Juan", 0, 1234567890, "juan@oxxo-cliente.com"));
	vector<Producto> productos;
	productos.push_back(Producto(1000, "Coca-Cola", 100));
	setProveedor(Proveedor("Coca-Cola Femsa", 1000, productos));

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
		cout << "2. Borrar cliente" << endl;
		cout << "3. Mostrar cliente" << endl;
		cout << "4. Agregar producto" << endl;
		cout << "5. Vender producto" << endl;
		cout << "6. Mostrar producto" << endl;
		cout << "7. Agregar proveedor" << endl;
		cout << "8. Mostrar proveedor" << endl;
		cout << "===============================" << endl;


		int opcion;
		cout << "Ingrese una opcion: ";
		cin >> opcion;

		waitChange(0.5);

		// Instancia
		switch (opcion) {
		case 1:
			registerClientes();
			break;
		case 2:
			deleteCliente();
			break;
		case 3:
			showClientes();
			break;
		case 4:
			registerProducto();
			break;
		case 5:
			sellProducto();
			break;
		case 6:
			showProductos();
			break;
		case 7:
			registerProveedor();
			break;
		case 8:
			showProveedores();
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

void Sistema::registerClientes()
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

	// Validaciones
	if (telefono <= 0) {
		cout << "Telefono no valido" << endl;
		return;
	}

	// Agregar cliente
	Cliente cliente(m_clientes.back().getId() + 1, nombre, 0, telefono, email);
	setCliente(cliente);

	cout << "Cliente registrado" << endl;

	waitChange(2);
}

void Sistema::registerProveedor()
{
	string nombre;
	cout << "Ingrese el nombre: " << endl;
	cin >> nombre;
	cin.ignore();

	// Agregar proveedor
	vector<Producto> productos;
	Proveedor proveedor(nombre, m_proveedores.back().getId() + 1, productos);
	setProveedor(proveedor);

	cout << "Proveedor registrado" << endl;
	waitChange(2);
}

void Sistema::registerProducto()
{
	cout << "<< Lista de proveedores >>" << endl;
	showProveedores();
	cout << "===============================" << endl;

	int id_proveedor;
	cout << "Ingrese el id del proveedor: " << endl;
	cin >> id_proveedor;

	string nombre;
	cout << "Ingrese el nombre del producto: " << endl;
	cin >> nombre;
	cin.ignore();

	int cantidad;
	cout << "Ingrese la cantidad: " << endl;
	cin >> cantidad;

	// Validaciones
	if (cantidad <= 0) {
		cout << "Cantidad no valida" << endl;
		return;
	}

	if (id_proveedor <= 0) {
		cout << "Id de proveedor no valido" << endl;
		return;
	}


	// Buscar proveedor
	for (Proveedor proveedor : m_proveedores) {
		if (proveedor.getId() == id_proveedor) {
			// Agregar producto
			if (proveedor.getProductos().size() != 0) {
				Producto producto(proveedor.getProductos().back().getId() + 1, nombre, cantidad);
				setProducto(producto, proveedor);
			}
			else {
				Producto producto(1000, nombre, cantidad);
				setProducto(producto, proveedor);
			}

			cout << "Producto registrado" << endl;

			waitChange(2);
			return;
		}
	}

	cout << "Proveedor no encontrado" << endl;
	waitChange(2);
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
