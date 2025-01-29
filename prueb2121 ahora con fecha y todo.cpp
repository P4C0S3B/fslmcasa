#include <iostream>
#include <cstring> 
#include <stdlib.h>
using namespace std;

const int MAX_HABITACIONES = 3;
const int MAX_CLIENTES = 10;
int habitacionesNumero[MAX_HABITACIONES] = {110, 111, 112};
char habitacionesTipo[MAX_HABITACIONES][10] = {"Simple", "Doble", "Suite"};
bool habitacionesDisponibles[MAX_HABITACIONES] = {true, true, true}, reinicio=true;
int habitacionesReservadas[MAX_CLIENTES];
char clientesNombres[MAX_CLIENTES][50];
char clientesCedulas[MAX_CLIENTES][10];
char clientesCorreos[MAX_CLIENTES][50];
int totalClientes = 0;
string fechasIngreso[MAX_CLIENTES];  
string fechasSalida[MAX_CLIENTES];   


void inicializarHabitaciones();
void mostrarMenu();
void registrarCliente();
void consultarHabitacionesDisponibles();
void realizarReserva();
bool validarDisponibilidad(int numeroHabitacion);
void marcarHabitacionComoOcupada(int numeroHabitacion);
void mostrarClientesGuardados();
void mostrarBienvenida();

main() {
    mostrarBienvenida();
    inicializarHabitaciones();
    int opcion = 0;
    while (opcion != 5) {
        mostrarMenu();
        cin >> opcion;
        switch (opcion) {
            case 1:
                consultarHabitacionesDisponibles();
                break;
            case 2:
                realizarReserva();
                break;
            case 3:
                mostrarClientesGuardados();
                break;
            case 4:
                cout << "Saliendo del sistema." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    if (reinicio)
    {
        system ("pause");
        system("cls");
    }
    }
}
void mostrarBienvenida() {
    cout << "============================================" << endl;
    cout << "      Bienvenidos al Hotel Oro Verde        " << endl;
    cout << "           Guayaquil, Ecuador               " << endl;
    cout << "       El lugar ideal para su descanso      " << endl;
    cout << "============================================" << endl;
    cout << endl;
}
void inicializarHabitaciones() {
    for (int i = 0; i < MAX_HABITACIONES; i++) {
        habitacionesDisponibles[i] = true;
    }
}
void mostrarMenu() {
    cout << "== Sistema de Gestion Hotelera ==" << endl;
    cout << "1. Consultar habitaciones disponibles." << endl;
    cout << "2. Realizar reserva." << endl;
    cout << "3. Mostrar clientes registrados." << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
}
void consultarHabitacionesDisponibles() {
    cout << "=== Habitaciones Disponibles ===" << endl;
    for (int i = 0; i < MAX_HABITACIONES; i++) {
        if (habitacionesDisponibles[i]) {
            cout << "Habitacion " << habitacionesNumero[i] << " (" << habitacionesTipo[i] << ") - Disponible" << endl;
        }
    }
}

void realizarReserva() {
    int numeroHabitacion;
    cout << "Ingrese el numero de la habitacion a reservar: ";
    cin >> numeroHabitacion;

    if (validarDisponibilidad(numeroHabitacion)) {
        registrarCliente(); 
        habitacionesReservadas[totalClientes - 1] = numeroHabitacion; 
        marcarHabitacionComoOcupada(numeroHabitacion);
        cout << "Reserva realizada con exito." << endl;
    } else {
        cout << "La habitacion no esta disponible." << endl;
    }
}

void registrarCliente() {
    if (totalClientes < MAX_CLIENTES) {
        cout << "Ingrese nombre del cliente: ";
        cin.ignore();
        cin.getline(clientesNombres[totalClientes], 50);
        cout << "Ingrese cedula del cliente: ";
        cin.getline(clientesCedulas[totalClientes], 15);
        cout << "Ingrese correo del cliente: ";
        cin.getline(clientesCorreos[totalClientes], 50);
        cout << "Ingrese la fecha de ingreso (dd/mm/yyyy): ";
        cin >> fechasIngreso[totalClientes];
        cout << "Ingrese la fecha de salida (dd/mm/yyyy): ";
        cin >> fechasSalida[totalClientes];
        totalClientes++;
        cout << "Cliente registrado con exito." << endl;
    } else {
        cout << "No se pueden registrar mas clientes." << endl;
    }
}


bool validarDisponibilidad(int numeroHabitacion) {
    for (int i = 0; i < MAX_HABITACIONES; i++) {
        if (habitacionesNumero[i] == numeroHabitacion) {
            return habitacionesDisponibles[i];
        }
    }
    return false;
}

void marcarHabitacionComoOcupada(int numeroHabitacion) {
    for (int i = 0; i < MAX_HABITACIONES; i++) {
        if (habitacionesNumero[i] == numeroHabitacion) {
            habitacionesDisponibles[i] = false;
            break;
        }
    }
}

void mostrarClientesGuardados() {
    cout << "=== Clientes Registrados ===" << endl;
    for (int i = 0; i < totalClientes; i++) {
        cout << "Nombre: " << clientesNombres[i] << endl;
        cout << "Cedula: " << clientesCedulas[i] << endl;
        cout << "Correo: " << clientesCorreos[i] << endl;
        cout << "Habitacion registrada: " << habitacionesReservadas[i] << endl;
        cout << "Fecha de ingreso: " << fechasIngreso[i] << endl;
        cout << "Fecha de salida: " << fechasSalida[i] << endl;
    }
}

