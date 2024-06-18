//
// Created by jejed on 13/06/2024.
//

#include "person.h"
Person* init_pers(char *csvline){
    Person* perso= malloc(sizeof(Person));
    int nb_chan=0;
    int id_ligne=0;
    int id_chaine=0;
    char chaine[TAILLE];
    while (csvline[id_ligne]!='\0'){
        if(csvline[id_ligne]==','||csvline[id_ligne]=='/'){
            chaine[id_chaine]='\0';
            id_chaine=0;
            switch(nb_chan){
                case 0:
                    perso->id=atoi(chaine);
                    break;
                case 1:
                    perso->id_pere=atoi(chaine);
                    break;
                case 2:
                    perso->id_mere=atoi(chaine);
                    break;
                case 3:
                    strcpy(perso->nom,chaine);
                    break;
                case 4:
                    strcpy(perso->prenom,chaine);
                    break;
                case 5:
                    if(csvline!="0,0,0,-,-,-,-")
                        perso->jour_naissance=0;
                    else
                        perso->jour_naissance=atoi(chaine);
                    break;
                case 6:
                    if(csvline!="0,0,0,-,-,-,-")
                        perso->mois_naissance=0;
                    else
                        perso->mois_naissance=atoi(chaine);
                    break;
                case 7:
                    if(csvline!="0,0,0,-,-,-,-")
                        perso->annee_naissance=0;
                    else
                        perso->annee_naissance=atoi(chaine);
                    break;
            }
            nb_chan++;
        } else{
            chaine[id_chaine]=csvline[id_ligne];
            id_chaine++;
        }
        id_ligne++;
    }
    strcpy(perso->lieu_naissance,chaine);
    perso->p_pere=NULL;
    perso->p_mere=NULL;
    return perso;
}

