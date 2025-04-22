#include "Credencial.h"
#include <iostream>

void Credencial::setNombre(string nombre) {
    this->nombre = nombre;
}

string Credencial::getNombre() {
    return nombre;
}

void Credencial::setDocumento(string documento) {
    this->documento = documento;
}

string Credencial::getDocumento() {
    return documento;
}

void Credencial::setCodigo(int codigo) {
    this->codigo = codigo;
}

int Credencial::getCodigo() {
    return codigo;
}

void Credencial::setPrograma(string programa) {
    this->programa = programa;
}

string Credencial::getPrograma() {
    return programa;
}

Credencial::Credencial(string nombre, string documento, string programa, int codigo) {
    this->nombre = nombre;
    this->documento = documento;
    this->programa = programa;
    this->codigo = codigo;
}
