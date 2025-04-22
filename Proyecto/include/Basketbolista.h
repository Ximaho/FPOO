#include <string>
#include "Deportista.h"
using namespace std;

class Basketbolista: public Deportista {
    private:
        string posicion;
        int puntos;
        int rebotes;
        double altura;
        int asistencias;
        
    public:
        void setPosicion(string posicion);
        string getPosicion();
        
        void setPuntos(int puntos);
        int getPuntos();
        
        void setRebotes(int rebotes);
        int getRebotes();

        void setAltura(double altura);
        double getAltura();

        void setAsistencias(int asistencias);
        int getAsistencias();
        
        
        Basketbolista(string nombre, string cedula, int edad, string programa, string genero, int faltas, string posicion, int puntos, int rebotes, double altura, int asistencias);
        Basketbolista();
};