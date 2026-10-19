//librerías

#include <iostream>
#include <string>

//local lib

#include "data.h"
#include "calc.h"

/////////////////////////

using namespace std;

int main(int argc, char **argv) {
    if (argc < 2) {
        cerr << "Uso: " << argv[0] << " <cmd> <nota>" << endl;
        return 1;
    }

    //var 
    string command = argv[1]; // add|list

    load();
    

    if (command == "add") {
        if (argc != 3 ) {
            cerr << "Uso: " << argv[0] << " add <nota>" << endl;
            return 1;
        }
        double nota = stod(argv[2]);
        add(nota);
        save();

    } else if (command == "list") {
        if (argc != 2) {
            cerr << "Uso: " << argv[0] << " list" << endl;
            return 1; 
        }
        listar();
    } else {
        cerr << "Comando desconocido" << endl;
        return 1;
    }


    return 0;
} 