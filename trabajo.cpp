#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

struct Alumno {
    string cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugarNacimiento;
    string direccion;
    string telefono;
};

void mostrarAlumno(const Alumno& alumno, int numero) {
    cout << "\nAlumno " << numero << '\n';
    cout << "Cedula: " << alumno.cedula << '\n';
    cout << "Nombre: " << alumno.nombre << '\n';
    cout << "Apellido: " << alumno.apellido << '\n';
    cout << "Edad: " << alumno.edad << '\n';
    cout << "Profesion: " << alumno.profesion << '\n';
    cout << "Lugar de nacimiento: " << alumno.lugarNacimiento << '\n';
    cout << "Direccion: " << alumno.direccion << '\n';
    cout << "Telefono: " << alumno.telefono << '\n';
}

int main() {
    const int cantidad = 3;

    vector<Alumno> alumnos(cantidad);

    for (int i = 0; i < cantidad; ++i) {
        cout << "\nDatos del alumno " << i + 1 << '\n';
        cout << "Cedula: ";
        cin >> ws;
        getline(cin, alumnos[i].cedula);
        cout << "Nombre: ";
        getline(cin, alumnos[i].nombre);
        cout << "Apellido: ";
        getline(cin, alumnos[i].apellido);
        cout << "Edad: ";
        while (!(cin >> alumnos[i].edad) || alumnos[i].edad < 0) {
            cout << "Ingrese una edad valida: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Profesion: ";
        cin >> ws;
        getline(cin, alumnos[i].profesion);
        cout << "Lugar de nacimiento: ";
        getline(cin, alumnos[i].lugarNacimiento);
        cout << "Direccion: ";
        getline(cin, alumnos[i].direccion);
        cout << "Telefono: ";
        getline(cin, alumnos[i].telefono);
    }

    cout << "\n===== LISTA DE ALUMNOS =\n";
    for (int i = 0; i < cantidad; ++i) {
        mostrarAlumno(alumnos[i], i + 1);
    }

    return 0;
}