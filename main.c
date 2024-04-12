#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "saisie.h"
#include "table.h"
 int t=0;
  static  int na,i;
  typedef struct
{
    char code[10];
    char nom[15];
    int qte;
    int pu;
    int smine;
    int smax;

}commerce;
static commerce tab[20];


int main()
{


    saisie();
     approvisionnement();
   // vente();
   // liste();
    //getch();
    liste_rupture();
    getch();
    mjour_champ();




    return 0;
}
