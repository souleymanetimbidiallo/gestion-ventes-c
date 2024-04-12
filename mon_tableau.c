#include <windows.h>
void tableau()
{
    gotoxy(2,7);hfg();gotoxy(3,7);ho(16);gotoxy(18,7);th();gotoxy(19,7);ho(26);gotoxy(45,7);th();gotoxy(46,7);ho(26);gotoxy(72,7);th();gotoxy(73,7);ho(26);gotoxy(99,7);th();gotoxy(100,7);ho(26);gotoxy(126,7);th();gotoxy(127,7);ho(26);gotoxy(153,7);hfd();
    gotoxy(2,8);ve();gotoxy(4,8);hfg();gotoxy(5,8);ho(11);gotoxy(16,8);hfd();gotoxy(20,8);hfg();gotoxy(21,8);ho(22);gotoxy(43,8);hfd();gotoxy(45,8);ve();gotoxy(47,8);hfg();gotoxy(48,8);ho(22);gotoxy(70,8);hfd();gotoxy(70,9);ve();gotoxy(70,10);bfd();gotoxy(72,9);ve();gotoxy(72,10);ve();
    gotoxy(2,9);ve();gotoxy(8,9);printf("CODE");gotoxy(16,9);ve();gotoxy(20,9);ve();gotoxy(26,9);printf("DESIGNATION");gotoxy(43,9);ve();gotoxy(45,9);ve();gotoxy(47,9);ve();gotoxy(47,9);ve();gotoxy(47,10);bfg();gotoxy(48,10);ho(22);gotoxy(55,9);printf("QUANTITE");gotoxy(72,8);ve();gotoxy(153,10);ve();
    gotoxy(2,10);ve();gotoxy(4,9);ve();gotoxy(16,10);bfd();gotoxy(20,10);bfg();gotoxy(21,10);ho(22);gotoxy(43,10);bfd();gotoxy(45,10);ve();gotoxy(45,11);li();gotoxy(46,11);ho(26);gotoxy(72,11);li();gotoxy(73,11);ho(26);gotoxy(124,9);ve();gotoxy(124,10);bfd();gotoxy(108,9);printf("SEUIL MIN");
    gotoxy(5,10);ho(11);gotoxy(4,10);bfg();gotoxy(74,8);hfg();gotoxy(75,8);ho(22);gotoxy(97,8);hfd();gotoxy(74,9);ve();gotoxy(74,10);bfg();gotoxy(75,10);ho(22);gotoxy(79,9);printf("PRIX UNITAIRE");gotoxy(99,8);ve();gotoxy(99,9);ve();gotoxy(99,10);ve();gotoxy(99,11);li();gotoxy(100,11);ho(26);gotoxy(153,11);pd();
    gotoxy(2,11);pg();gotoxy(3,11);ho(15);gotoxy(18,8);ve();gotoxy(18,9);ve();gotoxy(18,10);ve();gotoxy(18,11);li();gotoxy(19,11);ho(26);gotoxy(97,9);ve();gotoxy(97,10);bfd();gotoxy(101,8);hfg();gotoxy(102,8);ho(22);gotoxy(124,8);hfd();gotoxy(101,9);ve();gotoxy(101,10);bfg();gotoxy(102,10);ho(22);gotoxy(135,9);printf("SEUIL MAX");
    gotoxy(126,8);ve();gotoxy(126,9);ve();gotoxy(126,10);ve();gotoxy(126,11);li();gotoxy(128,8);hfg();gotoxy(129,8);ho(22);gotoxy(151,8);hfd();gotoxy(151,9);ve();gotoxy(151,10);bfd();gotoxy(128,9);ve();gotoxy(128,10);bfg();gotoxy(129,10);ho(22);gotoxy(127,11);ho(26);gotoxy(153,8);ve();gotoxy(153,9);ve();
   int i,na;
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
}
