#ifndef PARTIE_PROGRAMMATION_HTMLEXPORT_H
#define PARTIE_PROGRAMMATION_HTMLEXPORT_H

#include "person.h"

FILE * ouverture_fichier(char* buffer);
int titreHTMLPerson(char* buffer, Person* p);
int lecture(char* buffer, const char *format);
/*
int fichePath( char* buffer, Person* p);
void exportPersonToHTML(const Population t, Person* p, char* path);
int printAncestorsToHTML(char* buffer, const Population t, Person* p);
*/

#endif //PARTIE_PROGRAMMATION_HTMLEXPORT_H
