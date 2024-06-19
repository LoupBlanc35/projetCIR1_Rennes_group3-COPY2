//
// Created by jejed on 18/06/2024.
//

#include "htmlexport.h"
int titreHTMLPerson(char* buffer, Person* p){
    return sprintf(buffer,"<h2> %s, %s</h2>",p->nom,p->prenom);
}
int fichePath(char* buffer, Person* p){
    return sprintf(buffer,"../%d-fiche.html",p->id);
}
int ficheTabPath(char* buffer, Person* p){
    return sprintf(buffer,"../%d-tableau.html",p->id);
}
char* exportPersonToHTML(Person* p,char* path){
    FILE* file = fopen(path, "w");
    char html[TAILLE*2];
    fprintf(html,
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
    if (file == NULL) {
        return NULL;
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
    return html;
}
void tabHTML(Person* p,char* path){
    char nom_fichier[7][TAILLE];
    Person* generation=ancetre(*p,2);
    for(int i=0;i<7;i++)
        fichePath(nom_fichier[i],&generation[i]);
    FILE* file = fopen(path, "w");
    if (file == NULL) {
        return;
    }
    else{
        fprintf(file,
                "<!DOCTYPE html>\n"
                "<html lang=\"fr\">\n"
                "<head>\n"
                "    <meta charset=\"UTF-8\">\n"
                "    <link href=\"arbre.css\" rel=\"stylesheet\" type=\"text/css\"/>\n"
                "    <title>Arbre généalogique</title>\n"
                "</head>\n"
                "<body>\n"
                "<div class=\"tree\">\n"
                "    <div class=\"node\">\n"
                "        <div class=\"enfant\">%s</div>\n"
                "    </div>\n"
                "    <div class=\"node\">\n"
                "        <div class=\"parent\">\n"
                "            <div>%s</div>\n"
                "            <div>%s</div>\n"
                "        </div>\n"
                "    </div>\n"
                "    <div class=\"node\">\n"
                "        <div class=\"grand-parent\">\n"
                "            <div>%s</div>\n"
                "            <div>%s</div>\n"
                "            <div>%s</div>\n"
                "            <div>%s</div>\n"
                "        </div>\n"
                "    </div>\n"
                "</div>\n"
                "</body>\n"
                "</html>",

                exportPersonToHTML(&generation[0], nom_fichier[0]),
                exportPersonToHTML(&generation[1], nom_fichier[1]),
                exportPersonToHTML(&generation[2], nom_fichier[2]),
                exportPersonToHTML(&generation[3], nom_fichier[3]),
                exportPersonToHTML(&generation[4], nom_fichier[4]),
                exportPersonToHTML(&generation[5], nom_fichier[5]),
                exportPersonToHTML(&generation[6], nom_fichier[6])
        );
        fclose(file);
    }
}

