#include <stdio.h>
#include "advanced.h"
#include "htmlexport.h"

int main() {
    Population population;
    population= read_csv("../40.csv");
    link_popu(&population);
    /*for (int i=0;i<population.taille;i++)
        printf("%d %s\n",i,population.pers[i].p_mere->prenom);*/
    Person* a = ancetre(population.pers[2],2);
    Person* er =fratrie(population.pers[1],population);
    for(int j=0;j<4;j++)
        printf("%d %s\n",a[j].id,a[j].prenom);
    //ancetre(population.pers[1],2);

    Person *p1;
    titreHTMLPerson("40.csv", p1);

    return 0;
}
