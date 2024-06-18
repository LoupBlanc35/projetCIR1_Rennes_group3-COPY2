#include <stdio.h>
#include "advanced.h"
int main() {
    Population population;
    population= read_csv("../10000.csv");
    link_popu(&population);
    //for (int i=0;i<population.taille;i++)
      //  printf("%d %s\n",i,population.pers[i].p_mere->prenom);
    printf("%d\n",population.taille);
    Person* er =fratrie(population.pers[4724],population);
    for(int j=0;j<10;j++)
       printf("%d %s\n",er[j].id,er[j].prenom);
    return 0;
}
