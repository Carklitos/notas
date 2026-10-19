# Gestor de notas

Programa de terminal en C++ para guardar las asignaturas de la universidad con sus notas y calcular estadísticas.

## Qué debe hacer

Se usa desde la terminal, leyendo los datos con `argc` y `argv`:

```
$ ./notas add "Informática Básica" 7.5
$ ./notas add "Cálculo" 5.0
$ ./notas list
$ ./notas stats
```

- `add <nombre> <nota>`: añade una asignatura con su nota.
- `list`: muestra todas las asignaturas guardadas.
- `stats`: muestra la media, la nota más alta y la más baja.

## Estructura de archivos

```
notas/
├── main.cc            # lee argc/argv y decide qué comando ejecutar
├── asignatura.h/.cc   # struct (o clase) Asignatura: nombre y nota
├── gestor.h/.cc       # añadir, listar y calcular estadísticas
├── archivo.h/.cc      # guardar y cargar las notas en un fichero de texto
├── Makefile
└── README.md
```

Cada pareja `.h`/`.cc` tiene una única responsabilidad. Todos los `.h` deben llevar sus *include guards* (`#ifndef` / `#define` / `#endif`).

## Fases de desarrollo

Compila y prueba **después de cada fase**, no al final.

1. **Fase 1:** solo `add` y `list`, guardando las notas en un `std::vector` (se pierden al cerrar el programa).
2. **Fase 2:** añade `stats` (media, máximo y mínimo). Reutiliza la función `Min` de la calculadora y escribe `Max` y `Media`.
3. **Fase 3:** guarda las notas en un fichero con `std::ofstream` y cárgalas al arrancar con `std::ifstream`, para que no se pierdan.
4. **Fase 4:** valida la entrada: nota entre 0 y 10, número de argumentos correcto y comando desconocido.

## Qué se practica

- Repartir el código en `.h` y `.cc` con *include guards*.
- `struct` o `class`, y `std::vector`.
- Leer argumentos con `argc`/`argv` y convertirlos con `std::stoi` / `std::stod`.
- Ficheros con `<fstream>`.
- Un `Makefile` con varias dependencias escrito a mano.

## Compilar

```
$ make
$ ./notas list
```

Para borrar los `.o` y el ejecutable y empezar de cero:

```
$ make clean
```

## Consejos

- Para la Fase 3, busca `std::ofstream` y `std::getline` e intenta resolverlo antes de pedir ayuda.
- Si te atascas, pregunta por la parte concreta y pide una pista en vez de la solución.

## Otras ideas del mismo estilo

- **Agenda de contactos:** añadir, buscar y borrar contactos por nombre.
- **Adivina el número** o **ahorcado:** con la lógica del juego separada de la interfaz.
- **Inventario de una tienda:** productos con precio y stock, y un comando para ver el valor total.

Cuando termines, se puede ampliar con una interfaz gráfica con Qt.