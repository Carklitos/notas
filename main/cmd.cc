#include "cmd.h"
#include "data.h"

#include <iostream>

using namespace std;

void add(const string &asignatura, double nota) {
    save(asignatura, nota);
}

void listar(const string &asignatura) {
    vector<double> notas = load(asignatura);
    if (notas.empty()) {
        cout << "No hay notas de " << asignatura << endl;
        return;
    }
    for (double nota : notas) {
        cout << nota << " ";
    }
    cout << endl;

}