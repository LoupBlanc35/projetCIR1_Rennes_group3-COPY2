//
// Created by jejed on 14/06/2024.
//
#include "advanced.h"
#include "math.h"
Person* fratrie(Person perso,Population p){
    Person* fratrie= malloc(sizeof(Person));
    int frat_id=0;
    for(int i=0;i<p.taille;i++){
        if(perso.id_pere==p.pers[i].id_pere && perso.id_mere==p.pers[i].id_mere){
            fratrie[frat_id]=p.pers[i];
            frat_id++;
        }
    }
    return fratrie;
}
/*void recurrance(Person pers,int gene,int id,Person* anc){
    if (gene!=0){
        recurrance(*pers.p_pere,gene-1, pow(2,id),anc);
        recurrance(*pers.p_mere,gene-1,3*pow(2,id-1),anc);
    }
    anc[id]=pers;

};
Person * ancetres(Person perso,int gene){
    int *a;
    Person* anc= malloc((pow(2,gene+1)-1) *sizeof(Person));
    recurrance(perso,gene,0,anc);
    return anc;
}*/