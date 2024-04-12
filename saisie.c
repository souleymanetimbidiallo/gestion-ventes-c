#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define co  20
//déclaration de la fonction gotoxy() pour la gestion du curseur dans la console;
void gotoxy(int x,int y)
{
    COORD p;
    p.X=x;
    p.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}
//déclaration des fonctions pour le dessin des tableaux graphiques
 static int na,i;  static int t; static int rcode;  static int m[20];  static int cv=0;   static int af=0;

void efface()
{
    system("cls");
}
void hfg()
{
    printf("%c",201);
}
void hfd()
{
    printf("%c",187);
}
void bfg()
{
    printf("%c",200);
}
void bfd()
{
    printf("%c",188);
}
void ho(int n)
{
    int i;
    for (i=1;i<=n;i++)
        printf("%c",205);
}
void d(int n)
{
   int i;
   for(i=1;i<=n;i++)
        printf("%c",219);
}
void ve()
{
    printf("%c",186);
}
void tb()
{
    printf("%c",202);
}
void th()
{
    printf("%c",203);
}
void pg()
{
    printf("%c",204);
}
void pd()
{
    printf("%c",185);
}

void li()
{
    printf("%c",206);
}
void ru(int n)
{
    int i;
    for (i=1;i<=n;i++)
        printf("%c",219);
}
typedef struct
{
    int code[10];
    char nom[15];
    int qte;
    int pu;
    int smine;
    int smax;
    int nfois;
    int qvd;


}commerce;
 static commerce tab[20];static commerce ma[20];

void saisie( )
{
    int k,n;char je;
     i=0;na=0;
 do
 {

         gotoxy(42,2);printf(" VOULEZ VOUS ENREGISTRER UN NOUVEL ARTICLE (O/N) [     ] ?");
         gotoxy(94,2);scanf("%c",&je);


       if(je=='N')
       {
           gotoxy(45,2);printf("MERCI                                                                       ");
       }
  //***********************************************************************************************************************************************************************
       else if(je=='O')
       {
                  i+=1;na++; k=i;t=0;
                  gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
    gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
    gotoxy(101,2);ve();gotoxy(101,3);bfd();
    gotoxy(42,2);printf(" SAISIE DES INFORMATIONS DE L' ARTICLE                    ");gotoxy(50,4);system("pause");gotoxy(50,4);printf("                                                        ");
               //*************************************************************************************************************************************************************************
    gotoxy(28,7);hfg();gotoxy(29,7);ho(16);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(72,8);ve();gotoxy(72,9);ve();gotoxy(72,10);ve();gotoxy(72,11);li();    gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(45,8);ve();gotoxy(31,8);hfg();gotoxy(32,8);ho(11);gotoxy(43,8);hfd();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();
    gotoxy(45,9);ve();gotoxy(35,9);printf("CODE");gotoxy(31,9);ve();gotoxy(70,9);ve();    gotoxy(51,9);printf("DESIGNATION");gotoxy(47,9);ve();gotoxy(153,10);ve();
    gotoxy(45,10);ve();gotoxy(43,9);ve();gotoxy(43,10);bfd();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(70,10);bfd();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(32,10);ho(11);gotoxy(31,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(45,11);li();gotoxy(29,11);ho(16);gotoxy(45,8);ve();gotoxy(28,10);ve();gotoxy(28,9);ve();gotoxy(28,8);ve(); gotoxy(28,11);pg();gotoxy(46,11); ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
 //***************************************************************************************************************************************************************************
   while(i<na+na+1)
   {
       gotoxy(28,11+i);ve(); gotoxy(45,11+i);ve(); gotoxy(72,11+i);ve(); gotoxy(99,11+i);ve(); gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
   i+=2;
   }
   i=1;
   while(i<na+na)
   {
       gotoxy(28,12+i);pg();gotoxy(29,12+i);ho(16);  gotoxy(45,12+i);li();gotoxy(46,12+i);ho(26);gotoxy(72,12+i);li();gotoxy(73,12+i);ho(26); gotoxy(99,12+i);li(); gotoxy(100,12+i);ho(26); gotoxy(126,12+i);li();gotoxy(127,12+i);ho(26);gotoxy(153,12+i);pd();
      i+=2;
   }
   gotoxy(28,10+i);bfg();gotoxy(29,10+i);ho(16);  gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26); gotoxy(99,10+i);tb(); gotoxy(100,10+i);ho(26); gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();
//i+=2;
            if(t>1)
            {  t=0;
                         for(t=0;t<na;t++)
                        {
                                gotoxy(32,10+i);printf("P000%d",t);gotoxy(49,10+i);printf("%s",tab[t-1].nom);gotoxy(79,10+i);printf("%d",tab[t-1].pu);gotoxy(108,10+i);printf("%d",tab[t-1].smine);gotoxy(135,10+i);printf("%d",tab[t-1].smax);

                        }
            }
             i=k;t=na;
              gotoxy(32,11+i);printf("P000%d",t);gotoxy(42,2);printf("DESINGNATION DE L'ARTICLE %d                            ",t); gotoxy(49,11+i);scanf("%s",tab[t].nom);
   p1: gotoxy(42,2);printf("PRIX UNITAIRE DE L'ARTICLE %d                          ",t);  gotoxy(79,11+i);scanf("%d",&tab[t].pu);
   while(tab[t].pu<=0)
   {
       gotoxy(79,11+i);printf("                    ");gotoxy(42,2);printf(" PRINX UNITAIRE INVALIDE POUR CE ARTICLE %d           ",t+1);getch();goto p1;
   }
s1: gotoxy(42,2);printf("LE SEUIL MINIMAL DE L'ARTICLE %d                      ",t); gotoxy(108,11+i);scanf("%d",&tab[t].smine);
  while(tab[t].smine<=0)
  {
      gotoxy(108,11+i);printf("                 ");gotoxy(42,2);printf("SEUIL MININMAL INVALIDE POUR L'ARTICLE   %d             ",t+1);getch();goto s1;
  }
sm1:  gotoxy(42,2);printf("LE SEUIL MAXIMAL DE L'ARTICLE %d                  ",t);gotoxy(135,11+i);scanf("%d",&tab[t].smax);
   while(tab[t].smax<=0)
   {
       gotoxy(135,11+i);printf("                 ");gotoxy(42,2);printf(" SEUIL MAXIMAL INVALIDE POUR L'ARTICLE  %d         ",t);getch();goto sm1;
   }
   i++;t++;

}
//***********************************************************************************************************************************************************************
 }while(je!='N');

/*    //********************************************************************************************************************************************************************
  gotoxy(2,11+na+na+i);hfg();gotoxy(3,11+na+na+i);ho(100);gotoxy(103,11+na+na+i);hfd();
    gotoxy(2,12+na+na+i);ve();gotoxy(103,12+na+na+i);ve();gotoxy(2,13+na+na+i);ve();gotoxy(103,13+na+na+i);ve();
    gotoxy(2,14+na+na+i);bfg();gotoxy(103,14+na+na+i);bfd();gotoxy(3,14+na+na+i);ho(100);
    int s=0,l=0;
    while(s<99-1)
    {   system("color 50");
        gotoxy(3+s,12+na+na+i);ru(5);system("color B");
        gotoxy(3+s,13+na+na+i);ru(5);system("color 4E");
        s+=5;l+=5;Sleep(500);system("color 1A");

         gotoxy(42,2) ;printf("ENREGISTREMENT DES %d ARTICLES EN COURS [          ]",na);Sleep(200);
        gotoxy(83,2);printf("%d %%",l);
    }
    gotoxy(42,2) ;printf("ENREGISTREMENT EFFECTUE AVEC SUCCES                    ");
    */
}

void desingnation()
{
          i=1;
            system("cls");
            gotoxy(28,7);hfg();gotoxy(29,7);ho(16);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(72,8);ve();gotoxy(72,9);ve();gotoxy(72,10);ve();gotoxy(72,11);li();    gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(45,8);ve();gotoxy(31,8);hfg();gotoxy(32,8);ho(11);gotoxy(43,8);hfd();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();
    gotoxy(45,9);ve();gotoxy(35,9);printf("CODE");gotoxy(31,9);ve();gotoxy(70,9);ve();    gotoxy(51,9);printf("DESIGNATION");gotoxy(47,9);ve();gotoxy(153,10);ve();
    gotoxy(45,10);ve();gotoxy(43,9);ve();gotoxy(43,10);bfd();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(70,10);bfd();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(32,10);ho(11);gotoxy(31,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(45,11);li();gotoxy(29,11);ho(16);gotoxy(45,8);ve();gotoxy(28,10);ve();gotoxy(28,9);ve();gotoxy(28,8);ve(); gotoxy(28,11);pg();gotoxy(46,11); ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
      while(i<na+na+1)
   {
       gotoxy(28,11+i);ve(); gotoxy(45,11+i);ve(); gotoxy(72,11+i);ve(); gotoxy(99,11+i);ve(); gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
   i+=2;
   }
    i=1;
   while(i<na+na)
   {
       gotoxy(28,12+i);pg();gotoxy(29,12+i);ho(16);  gotoxy(45,12+i);li();gotoxy(46,12+i);ho(26);gotoxy(72,12+i);li();gotoxy(73,12+i);ho(26); gotoxy(99,12+i);li(); gotoxy(100,12+i);ho(26); gotoxy(126,12+i);li();gotoxy(127,12+i);ho(26);gotoxy(153,12+i);pd();
      i+=2;
   }
   gotoxy(28,10+i);bfg();gotoxy(29,10+i);ho(16);  gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26); gotoxy(99,10+i);tb(); gotoxy(100,10+i);ho(26); gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();

 //***************************************************************************************************************************************************************************

           i=1;t=1;
    while(i<na+na+1)
    {
        gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
       gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
       gotoxy(101,2);ve();gotoxy(101,3);bfd();
       gotoxy(51,11+i);printf("%s",tab[t].nom);
       gotoxy(32,11+i); printf("P000%d",t);
       gotoxy(79,11+i);printf("%d",tab[t].pu);
       gotoxy(108,11+i);printf("%d",tab[t].smine);
       gotoxy(135,11+i);printf("%d",tab[t].smax);
       i+=2;t++;
    }

    //*****************************************************************************************************************************************************************
    gotoxy(41,2);printf(" APPUYEZ SUR UNE TOUCHE POUR DEBUTER LA MISE A JOUR ");getch();mj: gotoxy(41,2);printf("SAISIR LE CODE DU L'ARTICLE A MODIFIER {0,1,...} [        ] ");
   gotoxy(93,2);scanf("%d",&rcode);
    if((rcode>0)&&(rcode<=na))
    {
       gotoxy(41,2);printf(" NOUVEAU NOM DE L'ARTICLE DE CODE POOO%d {                  }",rcode);gotoxy(85,2);scanf("%s",tab[rcode].nom);

    }
    else
    {
        gotoxy(41,2);printf("CE CODE N'EXISTE PAS DANS LA LISTE DES ARTICLES");gotoxy(5,20+i);system("pause");gotoxy(5,20+i);printf("                                                                    ");
        goto mj;
    }

}
//*******************************************************************************************************************************************************************
void quantite()
{
            i=1;
            system("cls");
            gotoxy(28,7);hfg();gotoxy(29,7);ho(16);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(72,8);ve();gotoxy(72,9);ve();gotoxy(72,10);ve();gotoxy(72,11);li();    gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(45,8);ve();gotoxy(31,8);hfg();gotoxy(32,8);ho(11);gotoxy(43,8);hfd();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();
    gotoxy(45,9);ve();gotoxy(35,9);printf("CODE");gotoxy(31,9);ve();gotoxy(70,9);ve();    gotoxy(51,9);printf("DESIGNATION");gotoxy(47,9);ve();gotoxy(153,10);ve();
    gotoxy(45,10);ve();gotoxy(43,9);ve();gotoxy(43,10);bfd();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(70,10);bfd();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(32,10);ho(11);gotoxy(31,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(45,11);li();gotoxy(29,11);ho(16);gotoxy(45,8);ve();gotoxy(28,10);ve();gotoxy(28,9);ve();gotoxy(28,8);ve(); gotoxy(28,11);pg();gotoxy(46,11); ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
      while(i<na+na+1)
   {
       gotoxy(28,11+i);ve(); gotoxy(45,11+i);ve(); gotoxy(72,11+i);ve(); gotoxy(99,11+i);ve(); gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
   i+=2;
   }
    i=1;
   while(i<na+na)
   {
       gotoxy(28,12+i);pg();gotoxy(29,12+i);ho(16);  gotoxy(45,12+i);li();gotoxy(46,12+i);ho(26);gotoxy(72,12+i);li();gotoxy(73,12+i);ho(26); gotoxy(99,12+i);li(); gotoxy(100,12+i);ho(26); gotoxy(126,12+i);li();gotoxy(127,12+i);ho(26);gotoxy(153,12+i);pd();
      i+=2;
   }
   gotoxy(28,10+i);bfg();gotoxy(29,10+i);ho(16);  gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26); gotoxy(99,10+i);tb(); gotoxy(100,10+i);ho(26); gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();

 //***************************************************************************************************************************************************************************

           i=1;t=1;
    while(i<na+na)
    {
        gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
       gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
       gotoxy(101,2);ve();gotoxy(101,3);bfd();
       gotoxy(32,11+i); printf("P000%d",t+1);
        gotoxy(51,11+i);printf("%s",tab[t].nom);
       gotoxy(79,11+i);printf("%d",tab[t].pu);
       gotoxy(108,11+i);printf("%d",tab[t].smine);
       gotoxy(135,11+i);printf("%d",tab[t].smax);
       i+=2;t++;
    }
    //*****************************************************************************************************************************************************

    gotoxy(41,2);printf(" APPUYEZ SUR UNE TOUCHE POUR DEBUTER LA MISE A JOUR ");getch(); m1:gotoxy(41,2);printf("SAISIR LE CODE DU L'ARTICLE A MODIFIER {0,1,...} [        ] ");
   gotoxy(93,2);scanf("%d",&rcode);
    if((rcode>0)&&(rcode<=na))
    {
        gotoxy(41,2);printf(" NOUVELLE QUANTITE DE L'ARTICLE DE CODE POOO%d {               }",rcode);gotoxy(94,2);scanf("%d",&tab[rcode].qte);

    }
    else
    {
        gotoxy(41,2);printf("CE CODE N'EXISTE PAS DANS LA LISTE DES ARTICLES"); gotoxy(5,na+na+i);system("pause");
        goto m1;
    }//Fin mise a jour quantite et debut mise a jour prix unitaire

}
//*********************************************************************************************************************************************************************
void  prix_unitaire()
{
          i=1;
            system("cls");
            gotoxy(28,7);hfg();gotoxy(29,7);ho(16);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(72,8);ve();gotoxy(72,9);ve();gotoxy(72,10);ve();gotoxy(72,11);li();    gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(45,8);ve();gotoxy(31,8);hfg();gotoxy(32,8);ho(11);gotoxy(43,8);hfd();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();
    gotoxy(45,9);ve();gotoxy(35,9);printf("CODE");gotoxy(31,9);ve();gotoxy(70,9);ve();    gotoxy(51,9);printf("DESIGNATION");gotoxy(47,9);ve();gotoxy(153,10);ve();
    gotoxy(45,10);ve();gotoxy(43,9);ve();gotoxy(43,10);bfd();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(70,10);bfd();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(32,10);ho(11);gotoxy(31,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(45,11);li();gotoxy(29,11);ho(16);gotoxy(45,8);ve();gotoxy(28,10);ve();gotoxy(28,9);ve();gotoxy(28,8);ve(); gotoxy(28,11);pg();gotoxy(46,11); ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
      while(i<na+na+1)
   {
       gotoxy(28,11+i);ve(); gotoxy(45,11+i);ve(); gotoxy(72,11+i);ve(); gotoxy(99,11+i);ve(); gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
   i+=2;
   }
    i=1;
   while(i<na+na)
   {
       gotoxy(28,12+i);pg();gotoxy(29,12+i);ho(16);  gotoxy(45,12+i);li();gotoxy(46,12+i);ho(26);gotoxy(72,12+i);li();gotoxy(73,12+i);ho(26); gotoxy(99,12+i);li(); gotoxy(100,12+i);ho(26); gotoxy(126,12+i);li();gotoxy(127,12+i);ho(26);gotoxy(153,12+i);pd();
      i+=2;
   }
   gotoxy(28,10+i);bfg();gotoxy(29,10+i);ho(16);  gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26); gotoxy(99,10+i);tb(); gotoxy(100,10+i);ho(26); gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();

 //***************************************************************************************************************************************************************************

           i=1;t=1;
    while(i<na+na)
    {
        gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
       gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
       gotoxy(101,2);ve();gotoxy(101,3);bfd();
       gotoxy(32,11+i); printf("P000%d",t+1);
        gotoxy(51,11+i);printf("%s",tab[t].nom);
       gotoxy(79,11+i);printf("%d",tab[t].pu);
       gotoxy(108,11+i);printf("%d",tab[t].smine);
       gotoxy(135,11+i);printf("%d",tab[t].smax);
       i+=2;t++;
    }
    //*****************************************************************************************************************************************************

    gotoxy(41,2);printf(" APPUYEZ SUR UNE TOUCHE POUR DEBUTER LA MISE A JOUR ");getch();m2: gotoxy(41,2);printf("SAISIR LE CODE DU L'ARTICLE A MODIFIER {0,1,...} [        ] ");
   gotoxy(93,2);scanf("%d",&rcode);
    if((rcode>0)&&(rcode<=na))
    {

        gotoxy(41,2);printf(" NOUVEAU PRIX DE L'ARTICLE DE CODE POOO%d {            }",rcode);gotoxy(90,2);scanf("%d",&tab[rcode].pu);

    }
    else
    {
        gotoxy(41,2);printf("CE CODE N'EXISTE PAS DANS LA LISTE DES ARTICLES"); gotoxy(5,20+i);system("pause");gotoxy(5,20+i);printf("                                                           ");
        goto m2;
    }
}
//*********************************************************************************************************************************************************************
void seuil_min()
{
           i=1;
            system("cls");
            gotoxy(28,7);hfg();gotoxy(29,7);ho(16);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(72,8);ve();gotoxy(72,9);ve();gotoxy(72,10);ve();gotoxy(72,11);li();    gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(45,8);ve();gotoxy(31,8);hfg();gotoxy(32,8);ho(11);gotoxy(43,8);hfd();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();
    gotoxy(45,9);ve();gotoxy(35,9);printf("CODE");gotoxy(31,9);ve();gotoxy(70,9);ve();    gotoxy(51,9);printf("DESIGNATION");gotoxy(47,9);ve();gotoxy(153,10);ve();
    gotoxy(45,10);ve();gotoxy(43,9);ve();gotoxy(43,10);bfd();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(70,10);bfd();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(32,10);ho(11);gotoxy(31,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(45,11);li();gotoxy(29,11);ho(16);gotoxy(45,8);ve();gotoxy(28,10);ve();gotoxy(28,9);ve();gotoxy(28,8);ve(); gotoxy(28,11);pg();gotoxy(46,11); ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
      while(i<na+na+1)
   {
       gotoxy(28,11+i);ve(); gotoxy(45,11+i);ve(); gotoxy(72,11+i);ve(); gotoxy(99,11+i);ve(); gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
   i+=2;
   }
    i=1;
   while(i<na+na)
   {
       gotoxy(28,12+i);pg();gotoxy(29,12+i);ho(16);  gotoxy(45,12+i);li();gotoxy(46,12+i);ho(26);gotoxy(72,12+i);li();gotoxy(73,12+i);ho(26); gotoxy(99,12+i);li(); gotoxy(100,12+i);ho(26); gotoxy(126,12+i);li();gotoxy(127,12+i);ho(26);gotoxy(153,12+i);pd();
      i+=2;
   }
   gotoxy(28,10+i);bfg();gotoxy(29,10+i);ho(16);  gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26); gotoxy(99,10+i);tb(); gotoxy(100,10+i);ho(26); gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();

 //***************************************************************************************************************************************************************************

           i=1;t=1;
    while(i<na+na)
    {
        gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
       gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
       gotoxy(101,2);ve();gotoxy(101,3);bfd();
       gotoxy(32,11+i); printf("P000%d",t+1);
        gotoxy(51,11+i);printf("%s",tab[t].nom);
       gotoxy(79,11+i);printf("%d",tab[t].pu);
       gotoxy(108,11+i);printf("%d",tab[t].smine);
       gotoxy(135,11+i);printf("%d",tab[t].smax);
       i+=2;t++;
    }
    //*****************************************************************************************************************************************************

    gotoxy(41,2);printf(" APPUYEZ SUR UNE TOUCHE POUR DEBUTER LA MISE A JOUR ");getch();m3: gotoxy(41,2);printf("SAISIR LE CODE DU L'ARTICLE A MODIFIER {0,1,...} [        ] ");
   gotoxy(93,2);scanf("%d",&rcode);
    if((rcode>=0)&&(rcode<=na))
    {
       gotoxy(41,2);printf(" NOUVEAU SEUIL MINIMAL DE L'ARTICLE DE CODE POOO%d {         }",rcode);gotoxy(96,2);scanf("%d",&tab[rcode].smine);

    }
    else
    {
        gotoxy(41,2);printf("CE CODE N'EXISTE PAS DANS LA LISTE DES ARTICLES"); gotoxy(5,na+na+i);system("pause");
        goto m3;
    }//Fin mise a jour prix unitaire et debut mise a jour seuil maximal
}
//***********************************************************************************************************************************************************************
void seuil_maxi()
{
                  i=1;
            system("cls");
            gotoxy(28,7);hfg();gotoxy(29,7);ho(16);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(72,8);ve();gotoxy(72,9);ve();gotoxy(72,10);ve();gotoxy(72,11);li();    gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(45,8);ve();gotoxy(31,8);hfg();gotoxy(32,8);ho(11);gotoxy(43,8);hfd();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();
    gotoxy(45,9);ve();gotoxy(35,9);printf("CODE");gotoxy(31,9);ve();gotoxy(70,9);ve();    gotoxy(51,9);printf("DESIGNATION");gotoxy(47,9);ve();gotoxy(153,10);ve();
    gotoxy(45,10);ve();gotoxy(43,9);ve();gotoxy(43,10);bfd();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(70,10);bfd();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(32,10);ho(11);gotoxy(31,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(45,11);li();gotoxy(29,11);ho(16);gotoxy(45,8);ve();gotoxy(28,10);ve();gotoxy(28,9);ve();gotoxy(28,8);ve(); gotoxy(28,11);pg();gotoxy(46,11); ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
      while(i<na+na+1)
   {
       gotoxy(28,11+i);ve(); gotoxy(45,11+i);ve(); gotoxy(72,11+i);ve(); gotoxy(99,11+i);ve(); gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
   i+=2;
   }
    i=1;
   while(i<na+na)
   {
       gotoxy(28,12+i);pg();gotoxy(29,12+i);ho(16);  gotoxy(45,12+i);li();gotoxy(46,12+i);ho(26);gotoxy(72,12+i);li();gotoxy(73,12+i);ho(26); gotoxy(99,12+i);li(); gotoxy(100,12+i);ho(26); gotoxy(126,12+i);li();gotoxy(127,12+i);ho(26);gotoxy(153,12+i);pd();
      i+=2;
   }
   gotoxy(28,10+i);bfg();gotoxy(29,10+i);ho(16);  gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26); gotoxy(99,10+i);tb(); gotoxy(100,10+i);ho(26); gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();

 //***************************************************************************************************************************************************************************

           i=1;t=1;
    while(i<na+na)
    {
        gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
       gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
       gotoxy(101,2);ve();gotoxy(101,3);bfd();
       gotoxy(32,11+i); printf("P000%d",t+1);
        gotoxy(51,11+i);printf("%s",tab[t].nom);
       gotoxy(79,11+i);printf("%d",tab[t].pu);
       gotoxy(108,11+i);printf("%d",tab[t].smine);
       gotoxy(135,11+i);printf("%d",tab[t].smax);
       i+=2;t++;
    }
    //*****************************************************************************************************************************************************

    gotoxy(41,2);printf(" APPUYEZ SUR UNE TOUCHE POUR DEBUTER LA MISE A JOUR ");getch();m4: gotoxy(41,2);printf("SAISIR LE CODE DU L'ARTICLE A MODIFIER {0,1,...} [        ] ");
   gotoxy(93,2);scanf("%d",&rcode);
    if((rcode>0)&&(rcode<=na))
    {
        gotoxy(41,2);printf(" NOUVEAU SEUIL MAXIMAL DE L'ARTICLE DE CODE POOO%d {       }",rcode);gotoxy(96,2);scanf("%d",&tab[rcode].smax);

    }
    else
    {
        gotoxy(41,2);printf("CE CODE N'EXISTE PAS DANS LA LISTE DES ARTICLES"); gotoxy(5,na+na+i);system("pause");
        goto m4;
    }//Fin mise a jour prix unitaire et debut mise a jour seuil maximal
}
//***********************************************************************************************************************************************************************
void mjour_champ()
{
     int ch; char r[20];
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
    //CONTROLE DE LA SAISIE DU CHOIX DANS LE MENU MISE A JOUR*************************************************************************************
       while((ch<=0)||(ch>3))
        {
                gotoxy(23,22);printf("SAISIE INVALIDE,REESSAYER     ");getch();goto m;
        }
//***********************************************************************************************************************************************************
                     if(ch==1)
                 {
                                  int ch1;
   do
   {
       mj:
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
                     desingnation();
        }
    else if(ch1==2)
    {
           quantite();
    }
  //************************************************************
    else if (ch1==3)
    {
       prix_unitaire();
    }
 //***********************************************************************************************************************************

    else if(ch1==4)
    {
      seuil_min();
    }
  //*****************************************************************************************************************************************************

    else if(ch1==5)
    {
            seuil_maxi();
    }
    else if(ch1==6)
    {
        gotoxy(41,2);printf("MISE A JOUR TERMINEE AVEC SUCCES                                            ");
    }
    //*******************************************************************
}while(ch1!=6);
    }
    else if(ch==2)
    {
          mj_global();
    }
//************************************************************************************************************************************************************

}while(ch!=3);
}//*******************************************************************************************************************************************************************************
void mj_global()
{
    system("cls");
     gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
    gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
    gotoxy(101,2);ve();gotoxy(101,3);bfd();
    i=1;
            gotoxy(28,7);hfg();gotoxy(29,7);ho(16);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(72,8);ve();gotoxy(72,9);ve();gotoxy(72,10);ve();gotoxy(72,11);li();    gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(45,8);ve();gotoxy(31,8);hfg();gotoxy(32,8);ho(11);gotoxy(43,8);hfd();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();
    gotoxy(45,9);ve();gotoxy(35,9);printf("CODE");gotoxy(31,9);ve();gotoxy(70,9);ve();    gotoxy(51,9);printf("DESIGNATION");gotoxy(47,9);ve();gotoxy(153,10);ve();
    gotoxy(45,10);ve();gotoxy(43,9);ve();gotoxy(43,10);bfd();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(70,10);bfd();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(32,10);ho(11);gotoxy(31,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(45,11);li();gotoxy(29,11);ho(16);gotoxy(45,8);ve();gotoxy(28,10);ve();gotoxy(28,9);ve();gotoxy(28,8);ve(); gotoxy(28,11);pg();gotoxy(46,11); ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
      while(i<na+na+1)
   {
       gotoxy(28,11+i);ve(); gotoxy(45,11+i);ve(); gotoxy(72,11+i);ve(); gotoxy(99,11+i);ve(); gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
   i+=2;
   }
    i=1;
   while(i<na+na)
   {
       gotoxy(28,12+i);pg();gotoxy(29,12+i);ho(16);  gotoxy(45,12+i);li();gotoxy(46,12+i);ho(26);gotoxy(72,12+i);li();gotoxy(73,12+i);ho(26); gotoxy(99,12+i);li(); gotoxy(100,12+i);ho(26); gotoxy(126,12+i);li();gotoxy(127,12+i);ho(26);gotoxy(153,12+i);pd();
      i+=2;
   }
   gotoxy(28,10+i);bfg();gotoxy(29,10+i);ho(16);  gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26); gotoxy(99,10+i);tb(); gotoxy(100,10+i);ho(26); gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();

 //***************************************************************************************************************************************************************************

           i=1;t=1;
    while(i<na+na)
    {
        gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
       gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
       gotoxy(101,2);ve();gotoxy(101,3);bfd();
       gotoxy(32,11+i); printf("P000%d",t+1);
        gotoxy(51,11+i);printf("%s",tab[t].nom);
       gotoxy(79,11+i);printf("%d",tab[t].pu);
       gotoxy(108,11+i);printf("%d",tab[t].smine);
       gotoxy(135,11+i);printf("%d",tab[t].smax);
       i+=2;t++;
    }
    a1:  gotoxy(41,2);printf("SAISIR LE CODE DU L'ARTICLE A MODIFIER {0,1,...} [        ] ");gotoxy(95,2);scanf("%d",&rcode);

      if((rcode>0)&&(rcode<=na))
    {
       gotoxy(41,2);printf(" NOUVEAU NOM DE L'ARTICLE DE CODE POOO%d {                  }",rcode);gotoxy(85,2);scanf("%s",tab[rcode].nom);
    a2:   gotoxy(41,2);printf(" NOUVELLE QUANTITE DE L'ARTICLE DE CODE POOO%d {           }",rcode);gotoxy(91,2);scanf("%d",&tab[rcode].qte);
       while(tab[rcode].qte<=0)
       {
           gotoxy(41,2);printf("SAISIE INCORRECTE,RESSAYEZ                                                    ");goto a2;
       }
      a3: gotoxy(41,2);printf(" NOUVEAU PRIX DE L'ARTICLE DE CODE POOO%d {        }",rcode);gotoxy(88,2);scanf("%d",&tab[rcode].pu);
       while(tab[rcode].pu<=0)
       {
           gotoxy(41,2);printf("SAISIE INCORRECTE,RESSAYEZ                                                    ");goto a3;
       }
      a4: gotoxy(41,2);printf(" NOUVEAU SEUIL MINIMAL DE L'ARTICLE DE CODE POOO%d {     }",rcode);gotoxy(93,2);scanf("%d",&tab[rcode].smine);
        while(tab[rcode].smine<=0)
       {
           gotoxy(41,2);printf("SAISIE INCORRECTE,RESSAYEZ                                                    ");goto a4;
       }
     a5:  gotoxy(41,2);printf(" NOUVEAU SEUIL MAXIMAL DE L'ARTICLE DE CODE POOO%d {       }",rcode);gotoxy(95,2);scanf("%d",&tab[rcode].smax);

        while(tab[rcode].smax<=0)
       {
           gotoxy(41,2);printf("SAISIE INCORRECTE,RESSAYEZ                                                    ");goto a5;
       }


    }
    else
    {
        gotoxy(41,3);printf("CE CODE N'EXISTE PAS DANS LA LISTE DES ARTICLES"); gotoxy(5,na+na+i);system("pause");gotoxy(41,3);printf("                                                                                            ");
        goto a1;
    }//Fin mise a jour prix unitaire et deb


}
void approvisionnement()
{
    system("cls");
    gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
    gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
    gotoxy(101,2);ve();gotoxy(101,3);bfd();
  ap:  gotoxy(41,2);printf("LE CODE DE L'ATICLE A APPROVISIONNER [ 1,2,3... ]? {       }");gotoxy(94,2);scanf("%d",&rcode);
    if((rcode>0)&&(rcode<=na))
    {
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
i=1; t=1;
while(i<na+na)
{
    gotoxy(5,11+i);printf("P000%d",t);
    gotoxy(22,11+i);printf("%s",tab[t].nom);
     gotoxy(47,11+i); printf("%d",tab[t].qte);
    gotoxy(74,11+i);printf("%d",tab[t].pu);
     gotoxy(101,11+i);printf("%d",tab[t].smine);
    gotoxy(129,11+i);printf("%d",tab[t].smax);
//***********************************************************************************************************************************
    i+=2;t++;
}
int apro;
 b3: gotoxy(41,2);printf("DONNEZ LA VALEUR DE L'APPROVISIONNEMENT {         }         ");gotoxy(83,2);scanf("%d",&apro);
if(apro<=0)
{
    gotoxy(42,2);printf("VALEUR INVALIDE                                                      ");goto b3;getch();
}
else
{
    tab[rcode].qte+=apro;
    i=1; t=1;
while(i<na+na)
{
    gotoxy(5,11+i);printf("P000%d",t);
    gotoxy(22,11+i);printf("%s",tab[t].nom);
     gotoxy(47,11+i); printf("%d",tab[t].qte);
    gotoxy(74,11+i);printf("%d",tab[t].pu);
     gotoxy(101,11+i);printf("%d",tab[t].smine);
    gotoxy(129,11+i);printf("%d",tab[t].smax);
//***********************************************************************************************************************************
    i+=2;t++;
}
    gotoxy(42,2);printf("APPROVISIONNEMENT EFFECTUE AVEC SUCCES                     ");Sleep(2000);
}
char ok;
do
   {
    gotoxy(41,2);printf("VOULEZ VOUS APPROVISIONNER DE NOUVEAU  O/N? {          }");gotoxy(90,2); scanf("%c",&ok);
    if(ok=='O')
    {
        goto ap;
    }
    }while(ok!='N');
 }
 else
 {
     gotoxy(41,2);printf("AUCUN ARTICLE NE PORTE CE CODE POOO%d                        ",rcode);gotoxy(41,4);system("pause");gotoxy(41,4);printf("                                                                    ");goto ap;

 }
}
//________________________________________________________________________________________________________________________________________________
void vente()
{

    system("cls");
    gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
    gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
    gotoxy(101,2);ve();gotoxy(101,3);bfd();
  ve:  gotoxy(41,2);printf("LE CODE DE L'ATICLE A VENDRE [ 1,2,3... ]? {       }       ");gotoxy(87,2);scanf("%d",&rcode);
    if((rcode>0)&&(rcode<=na))
    {
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
i=1; t=1;
while(i<na+na)
{
    gotoxy(5,11+i);printf("P000%d",t);
    gotoxy(22,11+i);printf("%s",tab[t].nom);
     gotoxy(47,11+i); printf("%d",tab[t].qte);
    gotoxy(74,11+i);printf("%d",tab[t].pu);
     gotoxy(101,11+i);printf("%d",tab[t].smine);
    gotoxy(129,11+i);printf("%d",tab[t].smax);
//***********************************************************************************************************************************
    i+=2;t++;
}
int qv;
v:gotoxy(41,2);printf("QUANTITE A VENDRE  ?                           ");
if(scanf("%d",&qv)!=1)
{
    gotoxy(70,2);printf("ERREUR,SAISIR UN ENTIER                                              ");getch();
    fflush(stdin);
    goto v;
}
if((qv>0)&&(qv<=tab[rcode].qte))
{
    tab[rcode].qte-=qv;
    i=1; t=1;
while(i<na+na)
{
    gotoxy(5,11+i);printf("P000%d",t);
    gotoxy(22,11+i);printf("%s",tab[t].nom);
     gotoxy(47,11+i); printf("%d",tab[t].qte);
    gotoxy(74,11+i);printf("%d",tab[t].pu);
     gotoxy(101,11+i);printf("%d",tab[t].smine);
    gotoxy(129,11+i);printf("%d",tab[t].smax);
    i+=2;t++;
}
int k,n=0;
gotoxy(41,2);printf("VENTE EFFECTUEE AVEC SUCCES                       ");Sleep(2000);char ok;cv++;
for(k=0;k<co;k++)
{
    if(m[k]==rcode)
    {
        n++;
    }
}

if(n==0)
{
    m[cv-1]=rcode;
    af++;

     //tabv[cv-1].code=tab[rcode].code ; tabv[cv-1].nom=tab[rcode].nom;tabv[cv-1].pu=tab[rcode].pu;
   // tabv[cv-1].qte=tab[cv-1].qte=tab[rcode].qte;tabv[cv-1].smine=tab[rcode].smine;tabv[cv-1].smax=tab[rcode].smax;
}

do
{
    l:gotoxy(41,2);printf("VOULEZ _VENDRE DE NOUVEAU UN ARTICLE O/N {               }?");
gotoxy(90,2);scanf("%c",&ok);
if(ok=='O')
{
    goto ve;
}
} while(ok!='N');


}
else
{
    gotoxy(41,2);printf("LA QUANTE DE L'ARTICLE EST INSUFFISANTE                     ");
    gotoxy(41,2);printf("APPUYEZ SUR  1 POUR REPRENDRE OU 0 POUR QUITTER {      }");int pr;gotoxy(91,2);scanf("%d",&pr);
    if(pr==1)
    {
        goto ve;
    }
    else
    {
        gotoxy(5,29);printf("MERCI");
        exit(0);
    }
}
}
else
 {
     gotoxy(41,2);printf("AUCUN ARTICLE NE PORTE CE CODE POOO%d                           ",rcode);gotoxy(41,4);system("pause");gotoxy(41,4);printf("                                                                    ");goto ve;
 }
}
 void liste()
 {
      system("cls");
    gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
    gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
    gotoxy(101,2);ve();gotoxy(101,3);bfd();
    gotoxy(41,2);printf("APPYEZ SUR UNE TOUCHE POUR AFFICHER LES TOUS LES ARTICLES");getch();gotoxy(41,2);printf("VOICI LA LISE DES PRODUITS DE LA BOUTIQUE               ");
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
i=1; t=1;
while(i<na+na)
{
    gotoxy(5,11+i);printf("P000%d",t);
    gotoxy(22,11+i);printf("%s",tab[t].nom);
     gotoxy(47,11+i); printf("%d",tab[t].qte);
    gotoxy(74,11+i);printf("%d",tab[t].pu);
     gotoxy(101,11+i);printf("%d",tab[t].smine);
    gotoxy(129,11+i);printf("%d",tab[t].smax);
    i+=2;t++;
 }
 gotoxy(41,2);printf("APPUYEZ SUR UNE TOUCHE POUR REVENIR SUR LE MENU GENENRAL");
//***************************************************************************************************************************************************************************
 }
 void liste_rupture()
 {
     i=1; t=1; int cpt=0;
     while(i<na+na)
    {
          if(tab[t].qte<tab[t].smine)
         {
              cpt++;
        }
         i+=2;t++;

    }

    if(cpt==0)
 {
     gotoxy(41,2);printf("AUCUN ARTICLE N'EST EN RUPTURE DE QUANTITE      ");getch();
 }
 else
 {
             system("cls");
    gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
    gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
    gotoxy(101,2);ve();gotoxy(101,3);bfd();
    gotoxy(41,2);printf("APPUYEZ SUR UNE TOUCHE POUR AFFICHER LES PRODUITS EN RUPTURE");getch();gotoxy(41,2);printf("VOICI LA LISE DES PRODUITS DE LA BOUTIQUE                ");
        gotoxy(2,7);hfg();gotoxy(3,7);ho(16);gotoxy(18,7);th();gotoxy(19,7);ho(26);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(2,8);ve();gotoxy(4,8);hfg();gotoxy(5,8);ho(11);gotoxy(16,8);hfd();gotoxy(20,8);hfg();gotoxy(21,8);ho(22);gotoxy(43,8);hfd();gotoxy(45,8);ve();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();gotoxy(70,9);ve();gotoxy(70,10);bfd();gotoxy(72,9);ve();gotoxy(72,10);ve();
    gotoxy(2,9);ve();gotoxy(8,9);printf("CODE");gotoxy(16,9);ve();gotoxy(20,9);ve();gotoxy(26,9);printf("DESIGNATION");gotoxy(43,9);ve();gotoxy(45,9);ve();gotoxy(47,9);ve();gotoxy(47,9);ve();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(55,9);printf("QUANTITE");gotoxy(72,8);ve();gotoxy(153,10);ve();
    gotoxy(2,10);ve();gotoxy(4,9);ve();gotoxy(16,10);bfd();gotoxy(20,10);bfg();gotoxy(21,10);ho(22);gotoxy(43,10);bfd();gotoxy(45,10);ve();gotoxy(45,11);li();gotoxy(46,11);ho(26);gotoxy(72,11);li();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(5,10);ho(11);gotoxy(4,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(2,11);pg();gotoxy(3,11);ho(15);gotoxy(18,8);ve();gotoxy(18,9);ve();gotoxy(18,10);ve();gotoxy(18,11);li();gotoxy(19,11);ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
for(i=0;i<cpt+cpt;i++)
{
    gotoxy(2,11+i);ve();gotoxy(18,11+i);ve();gotoxy(45,11+i);ve();gotoxy(72,11+i);ve();gotoxy(99,11+i);ve();gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
}
i=1;
while(i<=cpt+cpt-1)
{
    gotoxy(2,11+i+1);pg();gotoxy(18,11+i+1);li();gotoxy(45,11+i+1);li();gotoxy(72,11+i+1);li();gotoxy(99,11+i+1);li();gotoxy(126,11+i+1);li();gotoxy(153,11+i+1);pd();i+=2;
}
i=1;
while(i<=cpt+cpt-1)
{
    gotoxy(3,11+i+1);ho(15);gotoxy(19,11+i+1);ho(26);gotoxy(46,11+i+1);ho(26);gotoxy(73,11+i+1);ho(26);gotoxy(100,11+i+1);ho(26);gotoxy(127,11+i+1);ho(26);gotoxy(153,11+i+1);pd();i+=2;
}
gotoxy(2,10+i);bfg();gotoxy(3,10+i);ho(15);gotoxy(18,10+i);tb();gotoxy(19,10+i);ho(26);gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26);gotoxy(99,10+i);tb();gotoxy(100,10+i);ho(26);gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();
i=1; t=1;

while(i<na+na)
{
    if(tab[t].qte<tab[t].smine)
    {
        gotoxy(5,11+i);printf("P000%d",t);
       gotoxy(22,11+i);printf("%s",tab[t].nom);
        gotoxy(47,11+i); printf("%d",tab[t].qte);
       gotoxy(74,11+i);printf("%d",tab[t].pu);
       gotoxy(101,11+i);printf("%d",tab[t].smine);
       gotoxy(129,11+i);printf("%d",tab[t].smax);
       cpt--;
    }
    if(cpt==1)
    {
        i+=1;t++;
    }
    else
    {
        i+=2;t++;
    }
    }
}

 }

 void liste_exces()
 {
           i=1; t=1; int cpt=0;
     while(i<na+na)
    {
          if(tab[t].qte>tab[t].smax)
         {
              cpt++;
        }
         i+=2;t++;

    }

    if(cpt==0)
 {
     gotoxy(41,2);printf("AUCUN ARTICLE N'EST EN EXCES DE QUANTITE              ");getch();
 }
 else
 {
             system("cls");
    gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
    gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
    gotoxy(101,2);ve();gotoxy(101,3);bfd();
    gotoxy(41,2);printf("APPYEZ SUR UNE TOUCHE POUR AFFICHER LES PRODUITS EN EXCES");getch();gotoxy(41,2);printf("VOICI LA LISE DES PRODUITS EN EXCES DE LA BOUTIQUE           ");
        gotoxy(2,7);hfg();gotoxy(3,7);ho(16);gotoxy(18,7);th();gotoxy(19,7);ho(26);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(2,8);ve();gotoxy(4,8);hfg();gotoxy(5,8);ho(11);gotoxy(16,8);hfd();gotoxy(20,8);hfg();gotoxy(21,8);ho(22);gotoxy(43,8);hfd();gotoxy(45,8);ve();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();gotoxy(70,9);ve();gotoxy(70,10);bfd();gotoxy(72,9);ve();gotoxy(72,10);ve();
    gotoxy(2,9);ve();gotoxy(8,9);printf("CODE");gotoxy(16,9);ve();gotoxy(20,9);ve();gotoxy(26,9);printf("DESIGNATION");gotoxy(43,9);ve();gotoxy(45,9);ve();gotoxy(47,9);ve();gotoxy(47,9);ve();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(55,9);printf("QUANTITE");gotoxy(72,8);ve();gotoxy(153,10);ve();
    gotoxy(2,10);ve();gotoxy(4,9);ve();gotoxy(16,10);bfd();gotoxy(20,10);bfg();gotoxy(21,10);ho(22);gotoxy(43,10);bfd();gotoxy(45,10);ve();gotoxy(45,11);li();gotoxy(46,11);ho(26);gotoxy(72,11);li();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(5,10);ho(11);gotoxy(4,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(2,11);pg();gotoxy(3,11);ho(15);gotoxy(18,8);ve();gotoxy(18,9);ve();gotoxy(18,10);ve();gotoxy(18,11);li();gotoxy(19,11);ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
for(i=0;i<cpt+cpt;i++)
{
    gotoxy(2,11+i);ve();gotoxy(18,11+i);ve();gotoxy(45,11+i);ve();gotoxy(72,11+i);ve();gotoxy(99,11+i);ve();gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
}
i=1;
while(i<=cpt+cpt-1)
{
    gotoxy(2,11+i+1);pg();gotoxy(18,11+i+1);li();gotoxy(45,11+i+1);li();gotoxy(72,11+i+1);li();gotoxy(99,11+i+1);li();gotoxy(126,11+i+1);li();gotoxy(153,11+i+1);pd();i+=2;
}
i=1;
while(i<=cpt+cpt-1)
{
    gotoxy(3,11+i+1);ho(15);gotoxy(19,11+i+1);ho(26);gotoxy(46,11+i+1);ho(26);gotoxy(73,11+i+1);ho(26);gotoxy(100,11+i+1);ho(26);gotoxy(127,11+i+1);ho(26);gotoxy(153,11+i+1);pd();i+=2;
}
gotoxy(2,10+i);bfg();gotoxy(3,10+i);ho(15);gotoxy(18,10+i);tb();gotoxy(19,10+i);ho(26);gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26);gotoxy(99,10+i);tb();gotoxy(100,10+i);ho(26);gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();
i=1; t=1;
while(i<na+na)
{
    if(tab[t].qte>tab[t].smax)
    {
        gotoxy(5,11+i);printf("P000%d",t);
       gotoxy(22,11+i);printf("%s",tab[t].nom);
        gotoxy(47,11+i); printf("%d",tab[t].qte);
       gotoxy(74,11+i);printf("%d",tab[t].pu);
       gotoxy(101,11+i);printf("%d",tab[t].smine);
       gotoxy(129,11+i);printf("%d",tab[t].smax);
    }
    i+=2;t++;
 }
 }
 }

void liste_vente()
{
      system("cls");
    gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
    gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
    gotoxy(101,2);ve();gotoxy(101,3);bfd();
    gotoxy(41,2);printf("APPYEZ SUR UNE TOUCHE POUR AFFICHER A LIISTE DES VENTES");getch();gotoxy(41,2);printf("VOICI LA LISE DES PRODUITS EN EXCES DE LA BOUTIQUE           ");
        gotoxy(2,7);hfg();gotoxy(3,7);ho(16);gotoxy(18,7);th();gotoxy(19,7);ho(26);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(2,8);ve();gotoxy(4,8);hfg();gotoxy(5,8);ho(11);gotoxy(16,8);hfd();gotoxy(20,8);hfg();gotoxy(21,8);ho(22);gotoxy(43,8);hfd();gotoxy(45,8);ve();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();gotoxy(70,9);ve();gotoxy(70,10);bfd();gotoxy(72,9);ve();gotoxy(72,10);ve();
    gotoxy(2,9);ve();gotoxy(8,9);printf("CODE");gotoxy(16,9);ve();gotoxy(20,9);ve();gotoxy(26,9);printf("DESIGNATION");gotoxy(43,9);ve();gotoxy(45,9);ve();gotoxy(47,9);ve();gotoxy(47,9);ve();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(55,9);printf("QUANTITE");gotoxy(72,8);ve();gotoxy(153,10);ve();
    gotoxy(2,10);ve();gotoxy(4,9);ve();gotoxy(16,10);bfd();gotoxy(20,10);bfg();gotoxy(21,10);ho(22);gotoxy(43,10);bfd();gotoxy(45,10);ve();gotoxy(45,11);li();gotoxy(46,11);ho(26);gotoxy(72,11);li();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(5,10);ho(11);gotoxy(4,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(2,11);pg();gotoxy(3,11);ho(15);gotoxy(18,8);ve();gotoxy(18,9);ve();gotoxy(18,10);ve();gotoxy(18,11);li();gotoxy(19,11);ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
for(i=0;i<cv+cv;i++)
{
    gotoxy(2,11+i);ve();gotoxy(18,11+i);ve();gotoxy(45,11+i);ve();gotoxy(72,11+i);ve();gotoxy(99,11+i);ve();gotoxy(126,11+i);ve();gotoxy(153,11+i);ve();
}
i=1;
while(i<=cv+cv-1)
{
    gotoxy(2,11+i+1);pg();gotoxy(18,11+i+1);li();gotoxy(45,11+i+1);li();gotoxy(72,11+i+1);li();gotoxy(99,11+i+1);li();gotoxy(126,11+i+1);li();gotoxy(153,11+i+1);pd();i+=2;
}
i=1;
while(i<=cv+cv-1)
{
    gotoxy(3,11+i+1);ho(15);gotoxy(19,11+i+1);ho(26);gotoxy(46,11+i+1);ho(26);gotoxy(73,11+i+1);ho(26);gotoxy(100,11+i+1);ho(26);gotoxy(127,11+i+1);ho(26);gotoxy(153,11+i+1);pd();i+=2;
}
gotoxy(2,10+i);bfg();gotoxy(3,10+i);ho(15);gotoxy(18,10+i);tb();gotoxy(19,10+i);ho(26);gotoxy(45,10+i);tb();gotoxy(46,10+i);ho(26);gotoxy(72,10+i);tb();gotoxy(73,10+i);ho(26);gotoxy(99,10+i);tb();gotoxy(100,10+i);ho(26);gotoxy(126,10+i);tb();gotoxy(127,10+i);ho(26);gotoxy(153,10+i);bfd();
i=1; t=0;
    int n;
     while(i<af+af)
    {
        m[t]=n;
        gotoxy(5,11+i);printf("P000%d",n);
       gotoxy(22,11+i);printf("%s",tab[n].nom);
        gotoxy(47,11+i); printf("%d",tab[n].qte);
       gotoxy(74,11+i);printf("%d",tab[n].pu);
       gotoxy(101,11+i);printf("%d",tab[n].smine);
       gotoxy(129,11+i);printf("%d",tab[n].smax);
       i+=2;t++;
    }
    getch();

}
void les_5_produits()
{
         system("cls");
    gotoxy(40,1);hfg();gotoxy(41,1);ho(60);gotoxy(101,1);hfd();
    gotoxy(40,2);ve();gotoxy(40,3);bfg();gotoxy(41,3);ho(60);
    gotoxy(101,2);ve();gotoxy(101,3);bfd();
    gotoxy(41,2);printf("LISTE DES PRODUITS LES PLUS VENDUS EN TERME DE QUANTITE");getch();
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
    i=1;t=1;
    int p;commerce pe;
    do
    {
        p=0;
        while(i<na+na)

        if(tab[t].qte>tab[t+1].qte)
        {
            pe=tab[t];
            tab[t]=tab[t+1];
            tab[t+1]=pe;
            p=1;
        }
        i+=2;t++;
    }while(p!=0);
    i=1;t=1;
    if(na>=5)
    {
        while(i<=5+5)
        {
             gotoxy(5,11+i);printf("P000%d",t);
             gotoxy(22,11+i);printf("%s",tab[t].nom);
             gotoxy(47,11+i); printf("%d",tab[t].qte);
             gotoxy(74,11+i);printf("%d",tab[t].pu);
             gotoxy(101,11+i);printf("%d",tab[t].smine);
             gotoxy(129,11+i);printf("%d",tab[t].smax);
              i+=2;t++;
        }
    }
    else if(na<5)
    {
        while(i<=na+na)
        {
            gotoxy(5,11+i);printf("P000%d",t);
             gotoxy(22,11+i);printf("%s",tab[t].nom);
             gotoxy(47,11+i); printf("%d",tab[t].qte);
             gotoxy(74,11+i);printf("%d",tab[t].pu);
             gotoxy(101,11+i);printf("%d",tab[t].smine);
             gotoxy(129,11+i);printf("%d",tab[t].smax);
              i+=2;t++;
        }
    }

}



