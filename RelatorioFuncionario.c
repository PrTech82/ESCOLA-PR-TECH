#include "main.h"
#define MAX_FUNC 200
void MenuDiretor();
typedef struct
{
    char  nome[40];
    char  celular[40];
    char  email[540];
    char  setor[20];
    int   salario;
    int   IDfunc;

}CadFuncionario;



void RelatorioFuncionario(){
int i,c,l;
CadFuncionario cf;
FILE *f;
int x, totalsalario, totalanual;
totalsalario = 0;
x = 0;
f = fopen("cadfunc.dat", "a+b");
if (f == NULL){
    printf("\nErro na abertura do arquivo.\n");
}
else {
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




gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("         ESCOLA PR - TECH   ");gotoxy(69,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);  printf("    RELATORIO DE FUNCIONARIOS    ");gotoxy(69,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);


    while (!feof(f)){
     i =   fread(&cf, sizeof(CadFuncionario), 1, f);
        if (ferror(f)){
            printf("Erro na leitura do arquivo");}
        else{

if (i != 0)

            {

            x++;
            totalsalario = totalsalario + cf.salario;


      }
     }
    }
     totalanual = totalsalario * 12;



    fflush(stdin);
gotoxy(35,6);putchar(186);gotoxy(36,6);printf(" TOTAL SALARIO MENSAL: R$ %d", totalsalario);gotoxy(69,6);putchar(186);
gotoxy(35,7);putchar(186);printf(" TOTAL SALARIO ANUAL: R$ %d", totalanual);;gotoxy(69,7);putchar(186);
gotoxy(35,8);putchar(186);printf(" TOTAL FUNCIONARIOS: %d", x);gotoxy(69,8);putchar(186);
gotoxy(35,9);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
printf("\n\n\t\t\t\t");




    system ("pause");
    MenuDiretor();
}
}
