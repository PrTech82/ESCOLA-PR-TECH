#include "main.h"


//Módulo Login
 void MenuDiretor();
void CadastroAlunos();
void ModuloFinanceiro();
void ModuloProfessor();
void Abertura();
void gotoxy();





int login(){

    system("cls");
    int d,l,op;

gotoxy(0,0);printf("%c",201);
gotoxy(118,0);printf("%c",187);
gotoxy(0,27);printf("%c",200);
gotoxy(118,27);printf("%c",188);
gotoxy(0,10);printf("%c",204);
for(d=1;d<=117;d++)
   {gotoxy(d,0);
   putchar(205);
   gotoxy(d,27);
   putchar(205);}
for(l=1;l<=26;l++)
   {gotoxy(0,l);
   putchar(186);
   gotoxy(118,l);
   putchar(186);}
   for(d=1;d<=117;d++)
 {

  gotoxy(d,10);
   putchar(205);
   gotoxy(d,11);
   putchar(176);
   gotoxy(d,12);
   putchar(176);
   gotoxy(d,13);
   putchar(176);
   gotoxy(d,14);
   putchar(176);
   gotoxy(d,15);
   putchar(177);
   gotoxy(d,16);
   putchar(177);
   gotoxy(d,17);
   putchar(177);
   gotoxy(d,18);
   putchar(177);
   gotoxy(d,19);
   putchar(177);
   gotoxy(d,20);
   putchar(177);
   gotoxy(d,21);
   putchar(178);
   gotoxy(d,22);
   putchar(178);
   gotoxy(d,23);
   putchar(178);
   gotoxy(d,24);
   putchar(178);
   gotoxy(d,25);
   putchar(178);
   gotoxy(d,26);
   putchar(178);
   gotoxy(0,10);printf("%c",204);
   gotoxy(118,10);printf("%c",185);
 }





gotoxy(35,1);putchar(201);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186); printf("ESCOLHA O SETOR DA ESCOLA");gotoxy(61,2);putchar(186);
gotoxy(35,3);putchar(204);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);  printf("  [1] - DIRETORIA");gotoxy(61,4);putchar(186);
gotoxy(35,5);putchar(186);  printf("  [2] - ADMINISTRATIVO");gotoxy(61,5);putchar(186);
gotoxy(35,6);putchar(186);  printf("  [3] - FINANCEIRO");gotoxy(61,6);putchar(186);
gotoxy(35,7);putchar(186);  printf("  [4] - PROFESSOR");gotoxy(61,7);putchar(186);
gotoxy(35,8);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
gotoxy(36,9);printf("ESCOLHA UMA OPCAO: ");
scanf("%d",&op);
 switch(op)

          {
            case 1:
           MenuDiretor();
                break;
            case 2:
              CadastroAlunos();
                break;
            case 3:
                ModuloFinanceiro();
                break;
            case 4:
              ModuloProfessor();
                break;
            case 5:
                Abertura();
            break;

            default:
                fflush(stdin);
                login();

 getchar();
}
}








