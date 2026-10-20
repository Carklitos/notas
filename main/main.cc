//librerías

#include <iostream>
#include <string>

//local lib

#include "cmd.h"

/////////////////////////

using namespace std;

int main(int argc, char **argv) {
    if (argc < 3) {
        cerr << "Uso: " << argv[0] << " <cmd> <asig> <nota>" << endl;
        return 1;
    }

    //var 
    string command = argv[1]; // add | list
    string asignatura = argv[2]; // <asignatura>

    // ./main [0] | <cmd> [1] | <asig> [2] | <nota> [3]

    if (command == "add") {
        if (argc != 4 ) {
            cerr << "Uso: " << argv[0] << " add <nota>" << endl;
            return 1;
        }
        double nota = stod(argv[3]);
        add(asignatura, nota);

    } else if (command == "list") {
        if (argc != 3) {
            cerr << "Uso: " << argv[0] << " list <asig>" << endl;
            return 1; 
        }
        listar(asignatura);
    } else {
        cerr << "Comando desconocido" << endl;
        return 1;
    }


    return 0;
} 