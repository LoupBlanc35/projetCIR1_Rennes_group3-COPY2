//
// Created by jejed on 18/06/2024.
//

#ifndef PROJET_C_HTMLEXPORT_H
#define PROJET_C_HTMLEXPORT_H
#include "advanced.h"
int titreHTMLPerson(char* buffer, Person* p);
int fichePath(char* buffer, Person* p);
int ficheTabPath(char* buffer, Person* p);
char* exportPersonToHTML(Person* p,char* path);
void tabHTML(Person* p,char* path)
#endif //PROJET_C_HTMLEXPORT_H
