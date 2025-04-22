#include <string>
#include "Deportista.h"
using namespace std;

class Futbolista: public Deportista {
    private:
        string posicion;
        int goles;
        int asistencias;
        

    public:
        void setPosicion(string posicion);
        string getPosicion();

        void setGoles(int goles);
        int getGoles();

        void setAsistencias(int asistencias);
        int getAsistencias();


        Futbolista(string nombre, string cedula, int edad, string programa, string genero, int faltas, string posicion, int goles, int asistencias);
        Futbolista();
};