#include "main.h"
void gotoxy();
void MenuDiretor();
//Cadastrar usuario
typedef struct{
    char login[50];
    int senha;
    int nivelacesso;
}Cadastro;

int CadastroUsuario(){
int d,l;

    system("cls");
    Cadastro c;
    FILE *file;
    file = fopen("cadastros.dat", "ab");

    if(file){

gotoxy(0,0);printf("%c",201);
gotoxy(118,0);printf("%c",187);
gotoxy(0,27);printf("%c",200);
gotoxy(118,27);printf("%c",188);
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



gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("   ESCOLA PR - TECH   ");gotoxy(58,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf(" CADASTRO DE USUARIOS ");gotoxy(58,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);


gotoxy(35,7);                     printf("DIGITE O USUARIO: ");scanf("%s", &c.login);fflush(stdin);
gotoxy(35,8);                     printf("DIGITE A SENHA: ");scanf("%d",&c.senha);fflush(stdin);
gotoxy(25,10);                     printf("[1-DIRETOR] [2-ADMINISTRATIVO] [3-FINANCEIRO] [4-PROFESSOR]");
gotoxy(35,12);                    printf("ESCOLHA O NIVEL DE ACESSO: ");scanf("%d",&c.nivelacesso);fflush(stdin);

        fwrite(&c, sizeof(Cadastro), 1, file);
        fclose(file);
gotoxy(35,18);        printf("USUARIO CADASTRADO COM SUCESSO");
printf("\n\n\n\n\n\t\t\t");
        system("pause");
        MenuDiretor();
    }
    else
        printf("Erro ao abrir arquivo!");

return 0;



}

