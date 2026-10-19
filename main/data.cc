#include "data.h"


#include <fstream>
#include <string>

using namespace std;

vector<double> notas;

const string kArchivo = "notas.txt";

void load() {
    ifstream entrada(kArchivo);
    double nota;
    while (entrada >> nota) {
        notas.push_back(nota);
    }
}

void save() {
    ofstream salida(kArchivo);
    for (double nota : notas) {
        salida << nota << "\n";
    }
}

