#include "main.h"
//Modificar cadastro
typedef struct{
    char usuario[50];
    int senha;
    int nivelacesso;
}Cadastro;
void ListarUsuarios2();
void gotoxy();
void MenuDiretor();

void ModificaCadastro(){
    system("cls");
     FILE *file;
    file = fopen("cadastros.dat", "rb+");
    Cadastro c;
    int d,l,id, i = 1;

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
gotoxy(35,4);putchar(186);printf(" ALTERAR CADASTRO  ");gotoxy(58,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
while(fread(&c, sizeof(Cadastro), 1, file)){
ListarUsuarios2();



            printf("[%d]\nUsuario: %s\nSenha: %d\nNivel de acesso: %d\n-----------------\n", i, c.usuario, c.senha, c.nivelacesso);
            i++;

        }

        printf("\n\tDigite o indice do cadastro que deseja alterar:\n\n");
        scanf("%d", &id);
        getchar();
        id--;

        if(id >= 0 && id < i - 1){
            printf("Novo usuario: ");
            scanf("%s", c.usuario);
            printf("Nova senha: ");
            scanf("%d", &c.senha);
            printf("Novo nivel de acesso: ");
             scanf("%d", &c.nivelacesso);
            fseek(file, id * sizeof(Cadastro), SEEK_SET);
            fwrite(&c, sizeof(Cadastro), 1, file);
            printf("Usuario atualizado com sucesso\n");
        }
        fclose(file);
    }
    else{
        printf("\nErro ao abrir arquivo!\n");}

        system("pause");
        MenuDiretor();
}

