//
// Created by jejed on 13/06/2024.
//

#include "population.h"
void insert(Population *p,Person* data){
    p->taille++;
    p->pers= realloc(p->pers,p->taille*sizeof(Person));
    p->pers[p->taille-1]=*data;
}

void link_popu(Population* p){
    for(int i=0;i<p->taille;i++){
        int comp=0;
        int trv=0;
        while(trv!=2){
            if(p->pers[i].id_pere==p->pers[comp].id){
                p->pers[i].p_pere=&p->pers[comp];
                trv++;
            }
            if(p->pers[i].id_mere==p->pers[comp].id){
                p->pers[i].p_mere=&p->pers[comp];
                trv++;
            }
            comp++;
        }
    }
}