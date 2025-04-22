#include "Deportista.h"
#include <iostream>
#include <string>
#include "Futbolista.h"

using namespace std;

void Futbolista::setPosicion(string posicion) {
    this->posicion = posicion;
}

string Futbolista::getPosicion() {
    return posicion;
}

void Futbolista::setGoles(int goles) {
    this->goles = goles;
}

int Futbolista::getGoles() {
    return goles;
}

void Futbolista::setAsistencias(int asistencias) {
    this->asistencias = asistencias;
}

int Futbolista::getAsistencias() {
    return asistencias;
}

Futbolista::Futbolista(string nombre, string cedula, int edad, string programa, string genero, int faltas, string posicion, int goles, int asistencias)
    : Deportista(nombre, cedula, edad, programa, genero, faltas) {
    this->posicion = posicion;
    this->goles = goles;
    this->asistencias = asistencias;
}
