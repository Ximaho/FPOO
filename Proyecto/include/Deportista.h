#include <string>
#include "Credencial.h"
using namespace std;

class Deportista {

    private:




    protected:
    Credencial credencial;
    int edad;
    string genero;
    int faltas;





    public:
    void setNombre(string nombre);
    string getNombre();

    void setCedula(string cedula);  
    string getCedula();

    void setEdad(int edad);
    int getEdad();

    void setPrograma(string programa);
    string getPrograma();

    void setGenero(string genero);
    string getGenero();
    
    void setFaltas(int faltas);
    int getFaltas();

    Deportista(string nombre, string cedula, int edad, string programa, string genero, int faltas);
    Deportista();








};