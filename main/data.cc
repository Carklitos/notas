#include "data.h"

#include <filesystem>
#include <fstream>

using namespace std;

const string kCarpeta = "datos";

static string Ruta(const string &asignatura) {
    return kCarpeta + "/" + asignatura + ".txt";
}

void save(const string &asignatura, double nota) {
    filesystem::create_directory(kCarpeta);
    ofstream salida(Ruta(asignatura), ios::app);
    salida << nota << " ";
}

vector<double> load(const string &asignatura) {
    vector<double> notas;
    ifstream entrada(Ruta(asignatura));
    double nota;
    while (entrada >> nota) {
        notas.push_back(nota);
    }
    return notas;
}