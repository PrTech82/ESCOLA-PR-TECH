#include "main.h"
//Menu de diretor
void gotoxy();
void cadastrarF();
void listarF();
void alterarF();
void excluirF();
void RelatorioFinanceiro();
void RelatorioFuncionario();
void login();


void MenuDiretor(){
    int op,c,l;

 system("cls");
gotoxy(0,0);printf("%c",201);
gotoxy(118,0);printf("%c",187);
gotoxy(0,27);printf("%c",200);
gotoxy(118,27);printf("%c",188);
for(c=1;c<=117;c++)
   {gotoxy(c,0);
   putchar(205);
   gotoxy(c,27);
   putchar(205);}
for(l=1;l<=26;l++)
   {gotoxy(0,l);
   putchar(186);
   gotoxy(118,l);
   putchar(186);}

gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("      ESCOLA PR-TECH   ");gotoxy(64,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);  printf("    *** DIRETORIA ***");gotoxy(64,4);putchar(186);gotoxy(118,6);printf("%c",186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,6);putchar(186);  printf("[1] - CADASTRAR FUNCIONARIO");gotoxy(64,6);putchar(186);
gotoxy(35,7);putchar(186);  printf("[2] - LISTAR FUNCIONARIO");gotoxy(64,7);putchar(186);
gotoxy(35,8);putchar(186);  printf("[3] - ALTERAR FUNCIONARIO");gotoxy(64,8);putchar(186);
gotoxy(35,9);putchar(186);  printf("[4] - EXCLUIR FUNCIONARIO");gotoxy(64,9);putchar(186);
gotoxy(35,10);putchar(186); printf("[5] - RELATORIO FUNCIONARIO");gotoxy(64,10);putchar(186);
gotoxy(35,11);putchar(186); printf("[6] - RELATORIO FINANCEIRO");gotoxy(64,11);putchar(186);
gotoxy(35,12);putchar(186); printf("[7] - MENU PRINCIPAL");gotoxy(64,12);putchar(186);
gotoxy(35,13);putchar(186); printf("[8] - FECHAR O PROGRAMA");gotoxy(64,13);putchar(186);
gotoxy(35,14);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
gotoxy(36,15);printf("ESCOLHA UMA OPCAO: ");scanf("%d",&op);


 switch (op)
  {
   case 1:
   cadastrarF();
    break;
    case 2:
    listarF();
    break;
    case 3:
    alterarF();
    break;
    case 4:
    excluirF();
    break;
    case 5:
    RelatorioFuncionario();
    break;

    case 6:
    RelatorioFinanceiro();
    break;

    case 7:
        login();
        break;

    case 8:
        printf("\n\t\t\t\tOBRIGADO POR UTILIZAR NOSSO SISTEMA :)\n\n\n\t\t\t\t");
        system("pause");
        exit(0);
    break;

    default:


     fflush(stdin);
     MenuDiretor();




}

}




