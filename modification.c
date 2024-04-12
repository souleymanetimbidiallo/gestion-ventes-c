#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
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
void mise_ajour()
{
   //DEBUT DE LA MISE A JOUR ********************************************************************************************************************************************
    int ch; char r[20];int na,i,t;
    do
    {
        system("cls");
                  gotoxy(20,10);hfg();gotoxy(21,10);ho(35);gotoxy(56,10);hfd();
                  gotoxy(20,11);ve();gotoxy(22,11);hfg();gotoxy(23,11);ho(31);gotoxy(54,11);hfd(); gotoxy(56,11);ve();
                  gotoxy(20,12);ve();gotoxy(22,12);ve(); gotoxy(54,12);ve(); gotoxy(23,12);printf(" *  MENU DE LA MISE A JOURS  *");gotoxy(56,12);ve();
                  gotoxy(20,13);ve();  gotoxy(22,13);bfg();gotoxy(23,13);ho(31);gotoxy(54,13);bfd();gotoxy(56,13);ve();
                  gotoxy(20,14);pg();                    gotoxy(21,14);ho(35);                                             gotoxy(56,14);pd();
                  gotoxy(20,15);ve(); gotoxy(25,15);printf("1. MISE A JOUR PAR CHAMPS") ;           gotoxy(56,15);ve();
                  gotoxy(20,16);ve();                                                                                              gotoxy(56,16);ve();
                  gotoxy(20,17);ve();   gotoxy(25,17);printf("2. MISE A JOURS GENERALE ")  ;         gotoxy(56,17);ve();                                  gotoxy(25,19);printf("3.       QUITTER");
                  gotoxy(20,18);ve();                               gotoxy(21,20);ho(35);                             gotoxy(56,18);ve();gotoxy(56,19);ve();
                  gotoxy(20,19);ve();gotoxy(22,21);hfg();gotoxy(23,21);ho(31);gotoxy(54,21);hfd();gotoxy(56,20);pd();
                  gotoxy(20,20);pg(); gotoxy(22,22);ve();m:gotoxy(23,22);printf("FAITES VOTRE CHOIX [         ]");gotoxy(54,22);ve();
                  gotoxy(20,21);ve();gotoxy(22,23);bfg();gotoxy(23,23);ho(31);gotoxy(54,23);bfd();gotoxy(56,21);ve();
                  gotoxy(20,22);ve();gotoxy(21,24);ho(35);                                                             gotoxy(56,22);ve();
                  gotoxy(20,23);ve();                                                                                               gotoxy(56,23);ve();
                  gotoxy(20,24);bfg();                                                                                             gotoxy(56,24);bfd();
                gotoxy(20,25);printf("%d",na);
                  gotoxy(46,22);scanf("%d",&ch);
    //CONTROLE DE LA SAISIE DU CHOIX DANS LE MENU MISE A JOUR************************************************************************
       while((ch<=0)||(ch>3))
        {
                gotoxy(23,22);printf("SAISIE INVALIDE,REESSAYER     ");getch();goto m;
        }
        //FIN CONTROLE***************************************************************************************************************************

//DEBUT DU CHOIX 1/MISE A JOUR PAR CHAMP*************************************************************************************
                     if(ch==1)
                {
                     system("cls");
                    gotoxy(20,7);hfg();gotoxy(21,7);ho(101);gotoxy(122,7);hfd();
                    gotoxy(20,8);ve();                                    gotoxy(122,8);ve();
                    gotoxy(20,9);bfg();                                   gotoxy(122,9);bfd();
                    gotoxy(21,9);ho(101);
                   gotoxy(25,8);printf("VEUILLEZ SAISIR LE CODE DE L'ARTICLE QUE VOUS SOUHAITEZ METTRE A JOUR [                      ]");
                      system("color A");            gotoxy(49,10);printf("FORMAT : P0001,P0002,..............");Sleep(100); gotoxy(49,10);printf("                                                                           ");
                    gotoxy(101,8);scanf("%s",r);
                   gotoxy(25,8);printf("RECHERCHE DE L'ARTICLE DU CODE [     %s             ] EN COURS                                ",r);
                   int k,h=0;
                   while(h<=3)
                   {
                       k=0;
                 //******************************
                      gotoxy(49,13+k);d(1);Sleep(400);
                      gotoxy(50,14+k);d(1);Sleep(400);
                      gotoxy(51,15+k);d(1);Sleep(400);
                      gotoxy(52,16+k);d(1);Sleep(400);
                    //**********************************
                gotoxy(51,17+k);d(1);Sleep(400);
                   gotoxy(50,18+k);d(1);Sleep(400);
                    gotoxy(49,19+k);d(1);Sleep(400);
                   gotoxy(48,20+k);d(1);Sleep(400);
                 //********************************
                 gotoxy(49,13);printf(" ");
                       gotoxy(50,14);printf(" ");
                       gotoxy(51,15);printf(" ");
                       gotoxy(52,16);printf(" ");
                //***********************************
                gotoxy(51,17);printf(" ");
                gotoxy(50,18);printf(" ");
                 gotoxy(49,19);printf(" ");
                gotoxy(48,20);printf(" ");
                //***********************************
                   gotoxy(48,20+k);d(1);Sleep(400);
                   gotoxy(47,19+k);d(1);Sleep(400);
                    gotoxy(46,18+k);d(1);Sleep(400);
                    gotoxy(45,17);d(1);Sleep(400);
                  //********************************
                  gotoxy(44,16+k);d(1);Sleep(400);
                    gotoxy(45,15+k);d(1);Sleep(400);
                    gotoxy(46,14+k);d(1);Sleep(400);
                    gotoxy(47,13+k);d(1);Sleep(400);
                    gotoxy(48,12+k);d(1);Sleep(400);
                    //*******************************
                 gotoxy(48,20);printf(" ");
                   gotoxy(47,19);printf(" ");
                    gotoxy(46,18);printf(" ");
                    gotoxy(45,17);printf(" ");
                 //********************************
                  gotoxy(44,16);printf(" ");
                    gotoxy(45,15);printf(" ");
                    gotoxy(46,14);printf(" ");
                    gotoxy(47,13);printf(" ");
                    gotoxy(48,12);printf(" ");
                  //***********************************
                    k++;
                     h+=k;
                   }
                    getch();
                    i=1;t=0;
                  while(i<na+na)
                  {
                      if(strcmp(tab[t].code,r)==0)
                      {
                          gotoxy(26,12);
                      }
                      else
                      {
                          gotoxy(26,12);printf("non");getch();
                      }
                      i+=2;t++;
                  }
                }
//************************************************FIN DU CHOIX 1 MISE A JOUR PAR CHAMP*****************************************************************************
}   while(ch!=3);
//*************************************************************************************************************************************************************************
  //*******************************************PROCEDURE DE LA MISE A JOUR PAR CHAMP******************************************************************************
   int ch1;
   do
   {
       system("cls");
              gotoxy(20,7);hfg();gotoxy(21,7);ho(35);                                                             gotoxy(56,7);hfd();gotoxy(56,8);ve();
   gotoxy(20,8) ;ve();             gotoxy(22,8);hfg();gotoxy(23,8);ho(31);gotoxy(54,8);hfd();
    gotoxy(20,9) ;ve();                                                                                                                             ;gotoxy(56,9);ve();
    gotoxy(20,10) ;ve();                                                                                                                            gotoxy(56,10);ve();
    gotoxy(20,11);pg();                          gotoxy(21,11);ho(35);                                                                  gotoxy(56,11);pd();
     gotoxy(20,12) ;ve();  gotoxy(30,12);printf("1. DESIGNATION");                                                              gotoxy(56,12);ve();
     gotoxy(20,13) ;ve();                                                                                                                            gotoxy(56,13);ve();
     gotoxy(20,14) ;ve();  gotoxy(30,14);printf("2. QUANTITE");                                                                  gotoxy(56,14);ve();
     gotoxy(20,15) ;ve();                                                                                                                            gotoxy(56,15);ve();
      gotoxy(20,16) ;ve();   gotoxy(30,16);printf("3. PRIX UNITAIRE");                                                         gotoxy(56,16);ve();
      gotoxy(20,17) ;ve();                                                                                                                          gotoxy(56,17);ve();
      gotoxy(20,18) ;ve();   gotoxy(30,18);printf("4. SEUIL MINIMAL") ;                                                     gotoxy(56,18);ve();
      gotoxy(20,19) ;ve();                                                                                                                          gotoxy(56,19);ve();
      gotoxy(20,20) ;ve();   gotoxy(30,20);printf("5. SEUIL MAXIMAL");                                                     gotoxy(56,20);ve();
       gotoxy(20,21) ;ve();                                                                                                                          gotoxy(56,21);ve();
       gotoxy(20,22) ;ve(); gotoxy(30,22);printf("6.   QUITTER");                                                               gotoxy(56,22);ve();
       gotoxy(20,23) ;pg();   gotoxy(21,23);ho(35);                                                                                    gotoxy(56,23);pd();
        gotoxy(20,24) ;ve();  gotoxy(22,24);hfg();gotoxy(23,24);ho(31);gotoxy(54,24);hfd();                       gotoxy(56,24);ve();
        gotoxy(20,25) ;ve();   gotoxy(22,25);ve();re:gotoxy(23,25);printf("REPONDEZ            [        ]    ");gotoxy(54,25);ve();gotoxy(56,25);ve();
        gotoxy(20,26) ;ve();    gotoxy(22,26);bfg();gotoxy(23,26);ho(31); gotoxy(54,26);bfd();                     gotoxy(56,26);ve();
        gotoxy(20,27) ;bfg();                                      gotoxy(21,27);ho(35);                                                gotoxy(56,27);bfd();
        gotoxy(22,9);ve(); gotoxy(26,9);printf("VOICI LA LISTE DES CHAMPS ") ; gotoxy(54,9);ve();
        gotoxy(22,10);bfg();           gotoxy(23,10);ho(31);          gotoxy(54,10);bfd();
        gotoxy(47,25);scanf("%d",&ch1);
        while((ch1<=0)||(ch1>6))
        {
            gotoxy(23,25);printf("VOTRE REPONSE NE PEUT ETRE %d  ",ch1);getch();goto re;

        }
// ************************************DEBUT CHOIX 1 DE LA MODIFICATION**************************************************************************
        if(ch1==1)
        {
            system("cls");
                 gotoxy(2,7);hfg();gotoxy(3,7);ho(16);gotoxy(18,7);th();gotoxy(19,7);ho(26);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(2,8);ve();gotoxy(4,8);hfg();gotoxy(5,8);ho(11);gotoxy(16,8);hfd();gotoxy(20,8);hfg();gotoxy(21,8);ho(22);gotoxy(43,8);hfd();gotoxy(45,8);ve();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();gotoxy(70,9);ve();gotoxy(70,10);bfd();gotoxy(72,9);ve();gotoxy(72,10);ve();
    gotoxy(2,9);ve();gotoxy(8,9);printf("CODE");gotoxy(16,9);ve();gotoxy(20,9);ve();gotoxy(26,9);printf("DESIGNATION");gotoxy(43,9);ve();gotoxy(45,9);ve();gotoxy(47,9);ve();gotoxy(47,9);ve();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(55,9);printf("QUANTITE");gotoxy(72,8);ve();gotoxy(153,10);ve();
    gotoxy(2,10);ve();gotoxy(4,9);ve();gotoxy(16,10);bfd();gotoxy(20,10);bfg();gotoxy(21,10);ho(22);gotoxy(43,10);bfd();gotoxy(45,10);ve();gotoxy(45,11);li();gotoxy(46,11);ho(26);gotoxy(72,11);li();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(5,10);ho(11);gotoxy(4,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(2,11);pg();gotoxy(3,11);ho(15);gotoxy(18,8);ve();gotoxy(18,9);ve();gotoxy(18,10);ve();gotoxy(18,11);li();gotoxy(19,11);ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
for(i=0;i<na+na;i++)
{
    gotoxy(2,11+i);ve();gotoxy(18,11+i);ve();gotoxy(45,11+i);ve();gotoxy(72,11+i);ve();gotoxy(99,11+i);ve();gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
}
i=1;
while(i<=na+na-1)
{
    gotoxy(2,11+i+1);pg();gotoxy(18,11+i+1);li();gotoxy(45,11+i+1);li();gotoxy(72,11+i+1);li();gotoxy(99,11+i+1);li();gotoxy(126,11+i+1);li();gotoxy(153,11+i+1);pd();i+=2;
}
i=1;
while(i<=na+na-1)
{
    gotoxy(3,11+i+1);ho(15);gotoxy(19,11+i+1);ho(26);gotoxy(46,11+i+1);ho(26);gotoxy(73,11+i+1);ho(26);gotoxy(100,11+i+1);ho(26);gotoxy(127,11+i+1);ho(26);gotoxy(153,11+i+1);pd();i+=2;
}
gotoxy(2,10+i);bfg();gotoxy(3,10+i);ho(15);gotoxy(18,10+i);tb();gotoxy(19,10+i);ho(26);gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26);gotoxy(99,10+i);tb();gotoxy(100,10+i);ho(26);gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();
i=1; t=0;
while(i<na+na)
{
    gotoxy(5,11+i);printf("%s",tab[t].code);
    gotoxy(22,11+i);scanf("%s",tab[t].nom);
     gotoxy(47,11+i); printf("%d",tab[t].qte);
    gotoxy(74,11+i);printf("%d",tab[t].pu);
     gotoxy(101,11+i);printf("%d",tab[t].smine);
    gotoxy(129,11+i);printf("%d",tab[t].smax);
//***********************************************************************************************************************************
     gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
    gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
    gotoxy(101,2);ve();gotoxy(101,3);bfd();
    gotoxy(51,2);printf(" APPUYEZ SUR UNE TOUCHE POUR DEBUTER LA MISE A JOUR DE L'ARTICLE");getch(); gotoxy(51,2);printf("VEUILLEZ SAISIR LA NOUVELLE DESINGNATION DE L'ARTICLE                      ");

    i+=2;t++;
}
        }
//fin choix 1 de la modification*****************************************************************************************************************************************
   }while(ch1!=6);
// **************************************************************** FIN DE LA PROCEDURE DE MISE A JOUR *************************************************************
  void  recherche()
  {
        int k,h=0;
                   while(h<=2)
                   {
                       k=0;
                 //******************************
                      gotoxy(49,13+k);d(1);Sleep(400);
                      gotoxy(50,14+k);d(1);Sleep(400);
                      gotoxy(51,15+k);d(1);Sleep(400);
                      gotoxy(52,16+k);d(1);Sleep(400);
                    //**********************************
                gotoxy(51,17+k);d(1);Sleep(400);
                   gotoxy(50,18+k);d(1);Sleep(400);
                    gotoxy(49,19+k);d(1);Sleep(400);
                   gotoxy(48,20+k);d(1);Sleep(400);
                 //********************************
                 gotoxy(49,13);printf(" ");
                       gotoxy(50,14);printf(" ");
                       gotoxy(51,15);printf(" ");
                       gotoxy(52,16);printf(" ");
                //***********************************
                gotoxy(51,17);printf(" ");
                gotoxy(50,18);printf(" ");
                 gotoxy(49,19);printf(" ");
                gotoxy(48,20);printf(" ");
                //***********************************
                   gotoxy(48,20+k);d(1);Sleep(400);
                   gotoxy(47,19+k);d(1);Sleep(400);
                    gotoxy(46,18+k);d(1);Sleep(400);
                    gotoxy(45,17);d(1);Sleep(400);
                  //********************************
                  gotoxy(44,16+k);d(1);Sleep(400);
                    gotoxy(45,15+k);d(1);Sleep(400);
                    gotoxy(46,14+k);d(1);Sleep(400);
                    gotoxy(47,13+k);d(1);Sleep(400);
                    gotoxy(48,12+k);d(1);Sleep(400);
                    //*******************************
                 gotoxy(48,20);printf(" ");
                   gotoxy(47,19);printf(" ");
                    gotoxy(46,18);printf(" ");
                    gotoxy(45,17);printf(" ");
                 //********************************
                  gotoxy(44,16);printf(" ");
                    gotoxy(45,15);printf(" ");
                    gotoxy(46,14);printf(" ");
                    gotoxy(47,13);printf(" ");
                    gotoxy(48,12);printf(" ");
                  //***********************************
                    k++;
                     h+=k;
                   }
                    getch();
  }

}
