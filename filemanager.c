//
// Created by jejed on 14/06/2024.
//
#include "filemanager.h"
Population read_csv(const char* filename){
    Population population;
    population.pers = malloc(sizeof(Person));
    FILE* f=fopen(filename,"r");
    char perso_info[TAILLE];
    while(fgets(perso_info,TAILLE,f)!=NULL){
        insert(&population,init_pers(perso_info));
    }
    return population;
}