#include "main.h"
void login();
int Abertura()
{
system("cls");
 system   ("color 6");
void gotoxy(int n, int l)
{
  COORD c;
  c.X = n;
  c.Y = l;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
gotoxy(31,2);printf("%c%c%c%c",219,219,219,219);
gotoxy(31,3);printf("%c",219);
gotoxy(31,4);printf("%c%c%c",219,219,219);
gotoxy(31,5);printf("%c",219);
gotoxy(31,6);printf("%c%c%c%c",219,219,219,219);

gotoxy(39,2);printf("%c%c%c%c",219,219,219,219);
gotoxy(39,3);printf("%c",219);
gotoxy(39,4);printf("%c%c%c%c",219,219,219,219);
gotoxy(42,5);printf("%c",219);
gotoxy(39,6);printf("%c%c%c%c",219,219,219,219);

gotoxy(47,2);printf("%c%c%c%c",219,219,219,219);
gotoxy(47,3);printf("%c",219);
gotoxy(47,4);printf("%c",219);
gotoxy(47,5);printf("%c",219);
gotoxy(47,6);printf("%c%c%c%c",219,219,219,219);

gotoxy(55,2);printf("%c%c%c%c%c",219,219,219,219,219);
gotoxy(55,3);printf("%c",219);gotoxy(59,3);printf("%c",219);
gotoxy(55,4);printf("%c",219);gotoxy(59,4);printf("%c",219);
gotoxy(55,5);printf("%c",219);gotoxy(59,5);printf("%c",219);
gotoxy(55,6);printf("%c%c%c%c%c",219,219,219,219,219);

gotoxy(64,2);printf("%c",219);
gotoxy(64,3);printf("%c",219);
gotoxy(64,4);printf("%c",219);
gotoxy(64,5);printf("%c",219);
gotoxy(64,6);printf("%c%c%c%c",219,219,219,219);

gotoxy(72,2);printf("%c%c%c%c%c",219,219,219,219,219);
gotoxy(72,3);printf("%c",219);gotoxy(76,3);printf("%c",219);
gotoxy(72,4);printf("%c%c%c%c",219,219,219,219);gotoxy(76,4);printf("%c",219);
gotoxy(72,5);printf("%c",219);gotoxy(76,5);printf("%c",219);
gotoxy(72,6);printf("%c",219);gotoxy(76,6);printf("%c",219);

gotoxy(24,10);printf("%c%c%c%c%c",219,219,219,219,219);
gotoxy(24,11);printf("%c",219);gotoxy(28,11);printf("%c",219);
gotoxy(24,12);printf("%c%c%c%c",219,219,219,219);gotoxy(28,12);printf("%c",219);
gotoxy(24,13);printf("%c",219);
gotoxy(24,14);printf("%c",219);

gotoxy(32,10);printf("%c%c%c%c%c",219,219,219,219,219);
gotoxy(32,11);printf("%c",219);gotoxy(36,11);printf("%c",219);
gotoxy(32,12);printf("%c%c%c%c",219,219,219,219);gotoxy(36,12);printf("%c",219);
gotoxy(32,13);printf("%c",219);gotoxy(33,13);printf("%c%c",223,220);
gotoxy(32,14);printf("%c",219);gotoxy(35,14);printf("%c%c",223,220);


gotoxy(44,12);printf("%c%c%c%c%c%c",219,219,219,219,219,219);




gotoxy(57,10);printf("%c%c%c%c%c",219,219,219,219,219);
gotoxy(59,11);printf("%c",219);
gotoxy(59,12);printf("%c",219);
gotoxy(59,13);printf("%c",219);
gotoxy(59,14);printf("%c",219);

gotoxy(66,10);printf("%c%c%c%c",219,219,219,219);
gotoxy(66,11);printf("%c",219);
gotoxy(66,12);printf("%c%c%c",219,219,219);
gotoxy(66,13);printf("%c",219);
gotoxy(66,14);printf("%c%c%c%c",219,219,219,219);

gotoxy(74,10);printf("%c%c%c%c",219,219,219,219);
gotoxy(74,11);printf("%c",219);
gotoxy(74,12);printf("%c",219);
gotoxy(74,13);printf("%c",219);
gotoxy(74,14);printf("%c%c%c%c",219,219,219,219);

gotoxy(82,10);printf("%c",219);gotoxy(86,10);printf("%c",219);
gotoxy(82,11);printf("%c",219);gotoxy(86,11);printf("%c",219);
gotoxy(82,12);printf("%c%c%c%c",219,219,219,219);gotoxy(86,12);printf("%c",219);
gotoxy(82,13);printf("%c",219);gotoxy(86,13);printf("%c",219);
gotoxy(82,14);printf("%c",219);gotoxy(86,14);printf("%c",219);


gotoxy(38,17);printf("SISTEMA DE GERENCIAMENTO ESCOLAR");
gotoxy(35,19);printf("PRESSIONE QUALQUER TECLA PARA CONTINUAR");
















 int l,c;
 gotoxy(0,0);
 putchar(201);
 gotoxy(118,0);
 putchar(187);
 gotoxy(0,27);
 putchar(200);
 gotoxy(118,27);
 putchar(188);



 for(c=1;c<=117;c++)
 {
   gotoxy(c,0);
   putchar(205);
   gotoxy(c,27);
   putchar(205);
   gotoxy(c,7);
   putchar(205);
 }

 for(l=1;l<=26;l++)
 {
   gotoxy(118,l);
   putchar(186);
   gotoxy(0,l);
   putchar(186);
 }
 gotoxy(0,7);
 putchar(204);
 gotoxy(118,7);
 putchar(185);
 gotoxy(0,15);
 putchar(204);
 gotoxy(118,15);
 putchar(185);



 for(c=1;c<=117;c++)
 {
   gotoxy(c,1);
   putchar(176);
   gotoxy(c,8);
   putchar(176);
   gotoxy(c,9);
   putchar(176);
   gotoxy(c,15);
   putchar(205);
   gotoxy(c,16);
   putchar(176);
   gotoxy(c,21);
   putchar(177);
   gotoxy(c,22);
   putchar(177);
   gotoxy(c,23);
   putchar(177);
   gotoxy(c,24);
   putchar(178);
   gotoxy(c,25);
   putchar(178);
   gotoxy(c,26);
   putchar(178);
 }
for(c=75;c<=117;c++)
 {gotoxy(c,17);
  putchar(176);
  gotoxy(c,18);
  putchar(176);
  gotoxy(c,19);
  putchar(176);
  gotoxy(c,20);
  putchar(176);
 }
for(c=1;c<=33;c++)
 {gotoxy(c,17);
  putchar(176);
  gotoxy(c,18);
  putchar(176);
  gotoxy(c,19);
  putchar(176);
  gotoxy(c,20);
  putchar(176);
 }
 for(c=1;c<=17;c++)
 {gotoxy(c,10);
  putchar(176);
  gotoxy(c,11);
  putchar(176);
  gotoxy(c,12);
  putchar(176);
  gotoxy(c,13);
  putchar(176);
  gotoxy(c,14);
  putchar(176);
 }
 for(c=92;c<=117;c++)
 {gotoxy(c,10);
  putchar(176);
  gotoxy(c,11);
  putchar(176);
  gotoxy(c,12);
  putchar(176);
  gotoxy(c,13);
  putchar(176);
  gotoxy(c,14);
  putchar(176);
 }

 for(c=1;c<=27;c++)
 {gotoxy(c,2);
  putchar(176);
  gotoxy(c,3);
  putchar(176);
  gotoxy(c,4);
  putchar(176);
  gotoxy(c,5);
  putchar(176);
  gotoxy(c,6);
  putchar(176);
 }

  for(c=80;c<=117;c++)
 {gotoxy(c,2);
  putchar(176);
  gotoxy(c,3);
  putchar(176);
  gotoxy(c,4);
  putchar(176);
  gotoxy(c,5);
  putchar(176);
  gotoxy(c,6);
  putchar(176);
 }
 gotoxy(74,19);

getch();

login();
return 0;}
