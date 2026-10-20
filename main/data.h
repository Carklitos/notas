#ifndef DATA_H
#define DATA_H

#include <vector>
#include <string>

void save(const std::string &asignatura, double nota);
std::vector<double> load(const std::string  &asignatura);

#endif