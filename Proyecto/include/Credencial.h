#ifndef CREDENCIAL_H
#define CREDENCIAL_H
#include <iostream>
#include <string>

using namespace std;

class Credencial {
    private:
        string nombre;
        string documento;
        int codigo;
        string programa;

    public:
        void setNombre(string nombre);
        string getNombre();

        void setDocumento(string documento);
        string getDocumento();

        void setCodigo(int codigo);
        string getCodigo();

        void setPrograma(string programa);
        string getPrograma();

        Credencial(string nombre, string documento, string programa, int codigo);
        Credencial();
};