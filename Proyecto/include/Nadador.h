#include <string>
#include "Deportista.h"
using namespace std;

class Nadador: public Deportista {
    private:
        string estilo;
        double metrosNadados;
        
    public:
        void setEstilo(string estilo);
        string getEstilo();
        
        void setMetrosNadados(double metrosNadados);
        double getMetrosNadados();
        
        
        Nadador(string nombre, string cedula, int edad, string programa, string genero, int faltas, string estilo, double metrosNadados);
        Nadador();
};