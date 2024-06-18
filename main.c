#include <stdio.h>
#include "advanced.h"
#include "htmlexport.h"

int main() {
    Population population;
    population = read_csv("../40.csv");
    link_popu(&population);
    for (int i = 0;i < population.taille;i++)
        printf("%d %s\n",i, population.pers[i].p_mere->prenom);

    Person *p1;
    titreHTMLPerson("40.csv", p1);

    return 0;

    //AIDE : https://www.guru99.com/fr/c-file-input-output.html
}