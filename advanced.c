//
// Created by jejed on 14/06/2024.
//
#include "advanced.h"
#include "math.h"
Person* fratrie(Person perso,Population p){
    Person* fratrie= malloc(sizeof(Person));
    fratrie[0]=perso;
    int frat_id=1;
    if(perso.id_mere!=0||perso.p_pere!=0){
        for(int i=1;i<p.taille;i++){
            if(perso.id_pere==p.pers[i].id_pere && perso.id_mere==p.pers[i].id_mere && perso.id!=p.pers[i].id){
                fratrie[frat_id]=p.pers[i];
                frat_id++;
            }
        }
    }
    return fratrie;
}
void recurr(Person perso, int gene,Person *anc,int id) {
    if (gene != 0) {
        anc[2*id+1]=*perso.p_pere;
        recurr(*perso.p_pere, gene - 1,anc,2*id+1);
    }
    if (gene != 0) {
        anc[2*id+2]=*perso.p_mere;
        recurr(*perso.p_mere, gene - 1,anc,2*id+2);
    }

}

Person* ancetre(Person pers,int gene){
    int taille =(int)(pow(2.0,gene+1)-1);
    Person* anc= malloc(taille*sizeof(Person));
    anc[0]=pers;
    recurr(pers,gene,anc,0);
    return anc;
}