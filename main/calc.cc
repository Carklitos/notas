#include "calc.h"
#include "data.h"

#include <iostream>

using namespace std;

void add(double nota) {
    notas.push_back(nota);
}

void listar() {
    for (double nota : notas) {
        cout << nota << endl;
    }

}