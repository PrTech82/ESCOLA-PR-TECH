#include "main.h"
void ModificaCadastro();
void MenuDiretor();
void gotoxy();

//Listar Cadastros
typedef struct{
    char usuario[50];
    int senha;
    int nivelacesso;
}cadastro;

void ListarUsuarios(){

    cadastro c;
    int i = 0;
    int d,l;
    FILE *file;
    file = fopen("cadastros.dat", "rb");
   system("cls");
    if(file){
        while(!feof(file)){
        if (fread(&c, sizeof(cadastro), 1, file))

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




gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("  ESCOLA PR - TECH   ");gotoxy(61,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("  LISTA DOS USUARIOS ");gotoxy(61,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);

gotoxy(35,6);putchar(186);printf("USUARIO: %s",c.usuario);gotoxy(61,6);putchar(186);
gotoxy(35,7);putchar(186);printf("SENHA: %d",c.senha);gotoxy(61,7);putchar(186);
gotoxy(35,8);putchar(186);printf("NIVEL DE ACESSO: %d",c.nivelacesso);gotoxy(61,8);putchar(186);
gotoxy(35,9);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
i++;
getchar();


        }

 gotoxy(35,14);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
 gotoxy(35,15);printf("%c",186);printf("TOTAL DE USUARIOS: %d", i - 1); gotoxy(58,15);printf("%c",186);
 gotoxy(35,16);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);



        fclose(file);






    }
    else{
        printf("Erro ao abrir arquivo!");}
        printf("\n\n\n\n\t\t\t\t");
        system ("pause");
        MenuDiretor();

}


void ListarUsuarios2(){

    cadastro c;
    int d,l;
    FILE *file;
    file = fopen("cadastros.dat", "rb");
   system("cls");

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


    if(file){
        while(!feof(file)){
        if (fread(&c, sizeof(cadastro), 1, file))



gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("  ESCOLA PR - TECH   ");gotoxy(61,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("  LISTA DOS USUARIOS ");gotoxy(61,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);

gotoxy(35,6);putchar(186);printf("USUARIO: %s",c.usuario);gotoxy(61,6);putchar(186);
gotoxy(35,7);putchar(186);printf("SENHA: %d",c.senha);gotoxy(61,7);putchar(186);
gotoxy(35,8);putchar(186);printf("NIVEL DE ACESSO: %d",c.nivelacesso);gotoxy(61,8);putchar(186);
gotoxy(35,9);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
getchar();

}fclose(file);}else{printf("Erro ao abrir arquivo!");}

ModificaCadastro();
}
