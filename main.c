#include <stdio.h>
#include "htmlexport.h"
int main(){
    Population p;
    p= read_csv("../40.csv");
    /*for(int i=0;i<p.taille;i++){
        printf("%d %s\n",p.pers[i].id,p.pers[i].prenom);
    }*/
    char nom_fichier[TAILLE];
    ficheTabPath(nom_fichier,&p.pers[1]);
    tabHTML(&p.pers[1],nom_fichier);
    return 0;
}
