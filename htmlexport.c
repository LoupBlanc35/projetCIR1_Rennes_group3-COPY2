//
// Created by jejed on 18/06/2024.
//

#include "htmlexport.h"
int titreHTMLPerson(char* buffer, Person* p){
    return sprintf(buffer,"<h2> %s, %s</h2>",p->nom,p->prenom);
}
int fichePath(char* buffer, Person* p){
    return sprintf(buffer,"../%d-fiche.html",p->id);;
}
void exportPersonToHTML(Person* p,char* path){
    FILE* file = fopen(path, "w");
    if (file == NULL) {
        return;
    }
    else{

        fprintf(file,
                "<!DOCTYPE html>\n"
                "<html>\n"
                "<body>\n"
                "    <p>ID: %d</p>\n"
                "    <p>ID Père: %d</p>\n"
                "    <p>ID Mère: %d</p>\n"
                "    <p>Nom: %s</p>\n"
                "    <p>Prénom: %s</p>\n"
                "    <p>Date de naissance: %d/%d/%d</p>\n"
                "    <p>Lieu de naissance: %s</p>\n"
                "</body>\n"
                "</html>\n",
                p->id,
                p->id_pere,
                p->id_mere,
                p->nom,
                p->prenom,
                p->jour_naissance,
                p->mois_naissance,
                p->annee_naissance,
                p->lieu_naissance
        );
        fclose(file);
    }
}


