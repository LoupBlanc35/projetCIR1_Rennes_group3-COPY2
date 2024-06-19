#include <stdio.h>
#include <string.h>
#include "htmlexport.h"
#include "advanced.h"



FILE * ouverture_fichier(char* buffer){ //ouverture de l'accès au fichier "40.csv"
    FILE* fichier;
    fichier = fopen("40.csv", "r");
    if (fichier == NULL) {
        printf("Pas d'ouverture du fichier !\n");
        return (FILE *) -1;
    }
    if (fichier != NULL) {
        while(fgets(buffer, 256, fichier) != NULL) {
            printf("%s", buffer);
            buffer[strlen(buffer)-1]= '\0';
        }
        fclose(fichier);
    }
    return 0;
}


int titreHTMLPerson(char* buffer, Person* p){ //affiche le titre de la page web en code HTML
    Person p1;
    fgets(buffer, 256, ouverture_fichier("40.csv"));
    sprintf(p1.prenom, "r");
    sprintf(p1.nom, "r");
    //AFFICHAGE d'un element HTML pour 3
    int m = titreHTMLPerson(buffer, &p1);
    printf("%s %d characters written \n\n", buffer, m);

    char debut[]="<!DOCTYPE>\n xml:lang='fr' lang='fr'>\n<head>\n<title>\nArbre Généalogique\n</title>\n<meta http-equiv='Content-Type'  content='text/html;charset=utf-8' />\n<link rel='stylesheet' media='screen' type='text/css' title='arbre_genealogique' href='arbre.css' />\n</head>\n<body>\n<h1>Arbre Généaloqique<br/></h1>\n<table>\n";
    char fin[]="</tr>\n</table>\n</body>\n</html>\n";

    FILE* pfichier = fopen("arbre.htlm","w");


    pfichier = fopen("arbre.htlm","a+");
    fprintf(pfichier,"%s",debut);
    fprintf(pfichier,"%s",fin);
    fclose(pfichier);
}