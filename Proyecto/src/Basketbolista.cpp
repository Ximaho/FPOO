#include "Deportista.h"
#include <iostream>
#include <string>
#include "Basketbolista.h"

using namespace std;

void Basketbolista::setPosicion(string posicion) {
    this->posicion = posicion;
}

string Basketbolista::getPosicion() {
    return posicion;
}

void Basketbolista::setPuntos(int puntos) {
    this->puntos = puntos;
}

int Basketbolista::getPuntos() {
    return puntos;
}

void Basketbolista::setRebotes(int rebotes) {
    this->rebotes = rebotes;
}

int Basketbolista::getRebotes() {
    return rebotes;
}

void Basketbolista::setAltura(double altura) {
    this->altura = altura;
}

double Basketbolista::getAltura() {
    return altura;
}

void Basketbolista::setAsistencias(int asistencias) {
    this->asistencias = asistencias;
}

int Basketbolista::getAsistencias() {
    return asistencias;
}

Basketbolista::Basketbolista(string nombre, string cedula, int edad, string programa, string genero, int faltas, string posicion, int puntos, int rebotes, double altura, int asistencias)
    : Deportista(nombre, cedula, edad, programa, genero, faltas) {
    this->posicion = posicion;
    this->puntos = puntos;
    this->rebotes = rebotes;
    this->altura = altura;
    this->asistencias = asistencias;
}