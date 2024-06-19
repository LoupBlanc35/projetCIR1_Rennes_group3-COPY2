//
// Created by jejed on 13/06/2024.
//

#ifndef PROJET_C_POPULATION_H
#define PROJET_C_POPULATION_H
#include "person.h"
typedef struct population{
    Person* pers;
    int taille;
}Population;
void init_popu(Population* p);
void insert(Population *p,Person* data);
void link_popu(Population* p);
#endif //PROJET_C_POPULATION_H
