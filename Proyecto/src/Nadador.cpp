#include "Deportista.h"
#include <iostream>
#include <string>
#include "Nadador.h"

using namespace std;

void Nadador::setEstilo(string estilo) {
    this->estilo = estilo;
}

string Nadador::getEstilo() {
    return estilo;
}

void Nadador::setMetrosNadados(double metrosNadados) {
    this->metrosNadados = metrosNadados;
}

double Nadador::getMetrosNadados() {
    return metrosNadados;
}

Nadador::Nadador(string nombre, string cedula, int edad, string programa, string genero, int faltas, string estilo, double metrosNadados)
    : Deportista(nombre, cedula, edad, programa, genero, faltas) {
    this->estilo = estilo;
    this->metrosNadados = metrosNadados;
}