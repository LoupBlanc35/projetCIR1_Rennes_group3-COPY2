//
// Created by jejed on 13/06/2024.
//

#ifndef PROJET_C_PERSON_H
#define PROJET_C_PERSON_H
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#define TAILLE 500
typedef struct person{
    int id;
    int id_pere;
    int id_mere;
    char nom[20];
    char prenom[20];
    int annee_naissance;
    int mois_naissance;
    int jour_naissance;
    char lieu_naissance[30];
    struct person *p_pere;
    struct person *p_mere;
}Person;

//fonction d'initialisation d'une personne dans une  structure avec document csv.
Person* init_pers(char *csvline);

#endif //PROJET_C_PERSON_H
