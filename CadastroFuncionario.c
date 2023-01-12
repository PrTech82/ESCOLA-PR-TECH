#include "main.h"
void listarF2();
void gotoxy();
void MenuDiretor();
void excluirF();

typedef struct
{
    char  nome[40];
    char  celular[40];
    char  email[540];
    char  setor[20];
    int  salario;
    int  IDfunc;

}CadFuncionario;
CadFuncionario cf;

void cadastrarF(){
    int c,l;
    system ("cls");
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

CadFuncionario cf;
FILE *f;
f = fopen("cadfunc.dat", "ab");
if (f == NULL){
    printf("\nErro na abertura do arquivo");
    } else {



gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("    ESCOLA PR - TECH   ");gotoxy(61,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf(" CADASTRO DE FUNCIONARIO \n");gotoxy(61,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

gotoxy(35,6);    printf("ID DO FUNCINARIO: ");
    scanf("%d", &cf.IDfunc);
     getchar();
 gotoxy(35,7);   printf("NOME: ");
    scanf("%s", cf.nome);
    getchar();
    fflush(stdin);
 gotoxy(35,8);   printf("CELULAR: ");
    scanf("%s", cf.celular);
    getchar();
    fflush(stdin);
gotoxy(35,9);    printf("E-MAIL: ");
    scanf("%s", cf.email);
    getchar();
    fflush(stdin);
 gotoxy(35,10);   printf("SETOR DO FUNCIONARIO: ");
    scanf("%s", cf.setor);
    getchar();
    fflush(stdin);
gotoxy(35,11);    printf("SALARIO DO FUNCIONARIO: ");
    scanf("%d", &cf.salario);
    getchar();
    fflush(stdin);

    fwrite(&cf, sizeof(CadFuncionario), 1, f);
    if (ferror(f)){
        printf("\nErro na gravacao\n ");
        } else {

    gotoxy(34,19);    printf(" FUNCIONARIO CADASTRADO COM SUCESSO!");
        getchar();

        }
        fclose(f);
    } MenuDiretor();
}



void listarF (){
    int c,l;
system("cls");
    CadFuncionario cf;
    int i = 0;

    FILE *f;
    f = fopen("cadfunc.dat", "rb");

    if (f){
        while(!feof(f))
            {
    if (fread(&cf, sizeof(CadFuncionario), 1, f))

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


gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("       ESCOLA PR - TECH   ");gotoxy(67,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("    LISTA DOS FUNCIONARIOS ");gotoxy(67,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);

gotoxy(35,6);putchar(186);printf("ID-FUNCIONARIO: %d",cf.IDfunc);gotoxy(67,6);putchar(186);
gotoxy(35,7);putchar(186);printf("NOME: %s",cf.nome);gotoxy(67,7);putchar(186);
gotoxy(35,8);putchar(186);printf("CELULAR: %s",cf.celular);gotoxy(67,8);putchar(186);
gotoxy(35,9);putchar(186);printf("E-MAIL: %s",cf.email);gotoxy(67,9);putchar(186);
gotoxy(35,10);putchar(186);printf("SETOR: %s",cf.setor);gotoxy(67,10);putchar(186);
gotoxy(35,11);putchar(186);printf("SALARIO: %d",cf.salario);gotoxy(67,11);putchar(186);
gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
i++;
fflush(stdin);
getchar();


}


 gotoxy(35,16);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
 gotoxy(35,17);printf("%c",186);printf("TOTAL DE FUNCIONARIOS: %d", i - 1); gotoxy(61,17);printf("%c",186);
 gotoxy(35,18);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

gotoxy(35,21);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,22);printf("%c",186);printf("*** FIM DA LISTA ***");gotoxy(56,22);printf("%c",186);
gotoxy(35,23);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);







 printf("\n\t\t\t");


        fclose(f);
    }


    else{
        printf("Erro ao abrir arquivo!");}
        system("pause\n");
       MenuDiretor();
}



void alterarF(){
system("cls");
FILE *f;
f = fopen("cadfunc.dat", "rb+");
CadFuncionario cf;
int c,l,id, i = 0;

    if(f){
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

gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("       ESCOLA PR - TECH   ");gotoxy(67,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("    LISTA DE FUNCIONARIOS");gotoxy(67,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
while(fread(&cf, sizeof(CadFuncionario), 1, f)){



gotoxy(35,6);putchar(186);printf("[%d]-INDICE",i);gotoxy(67,6);putchar(186);
gotoxy(35,7);putchar(186);printf("ID-FUNC.: %d\n",cf.IDfunc);gotoxy(67,12);putchar(186);
gotoxy(35,8);putchar(186);printf("NOME: %s",cf.nome);gotoxy(67,7);putchar(186);
gotoxy(35,9);putchar(186);printf("CELULAR: %s",cf.celular);gotoxy(67,8);putchar(186);
gotoxy(35,10);putchar(186);printf("E-MAIL: %s",cf.email);gotoxy(67,9);putchar(186);
gotoxy(35,11);putchar(186);printf("SETOR: %s",cf.setor);gotoxy(67,10);putchar(186);
gotoxy(35,12);putchar(186);printf("SALARIO: %d",cf.salario);gotoxy(67,11);putchar(186);
gotoxy(35,13);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
i++;
getchar();
        }
 gotoxy(33,15);       printf("DIGITE O INDICE [I] QUE DESEJA ALTERAR:");scanf("%d", &id);
        getchar();
        id--;
        if(id >= 0 && id < i - 1){
gotoxy(35,17);printf("NOVO ID: ");scanf("%d", &cf.IDfunc);fflush(stdin);
gotoxy(35,18);printf("NOVO NOME: ");scanf("%s", cf.nome);fflush(stdin);

gotoxy(35,19);printf("NOVO CELULAR: ");scanf("%s", cf.celular);fflush(stdin);

gotoxy(35,20);printf("NOVO E-MAIL: ");scanf("%s", cf.email);fflush(stdin);

gotoxy(35,21);printf("NOVO SETOR: ");scanf("%s", cf.setor);fflush(stdin);

gotoxy(35,22);printf("NOVO SALARIO: ");scanf("%d", &cf.salario);fflush(stdin);



            fseek(f, id * sizeof(CadFuncionario), SEEK_SET);

            fwrite(&cf, sizeof(CadFuncionario), 1, f);

 gotoxy(35,24); printf("FUNCIONARIO ATUALIZADO COM SUCESSO");
 printf("\n\n\t\t\t\t");
        }fclose(f);}
    else{
        printf("Erro ao abrir arquivo!\n");}
        system("pause");
        MenuDiretor();
}

void excluirF(){
FILE *f;
FILE *temp;
f = fopen("cadfunc.dat", "rb");
temp = fopen("temp.dat", "wb");

    if(f == NULL){printf("Erro na abertura do arquivo");}
    else{
    int IDfunc;
    listarF2();



    gotoxy(36,14);printf("DIGITE O ID A SER REMOVIDO: ");
    scanf("%d", &IDfunc);
    getchar();


        while(fread(&cf, sizeof(CadFuncionario),1, f)==1)
            {
            if (IDfunc!=cf.IDfunc)
            {fwrite(&cf, sizeof(CadFuncionario),1, temp);
            }}}

            if(ferror(temp)){printf("Erro ao remover");}
            else{
            gotoxy(36,22); printf("FUNCIONARIO REMOVIDO COM SUCESSO!");}
printf("\n\n\t\t\t\t");
system("pause");
fclose(f);
fclose(temp);
remove ("cadfunc.dat");
rename ("temp.dat","cadfunc.dat");
MenuDiretor();
}


void listarF2 (){
 int c,l;
system("cls");
    CadFuncionario cf;
    FILE *f;
    f = fopen("cadfunc.dat", "rb");

    if
    (f){
        while(!feof(f)){
     if
    (fread(&cf, sizeof(CadFuncionario), 1, f))

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


gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("       ESCOLA PR - TECH   ");gotoxy(67,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("    LISTA DOS FUNCIONARIOS ");gotoxy(67,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);


gotoxy(35,6);putchar(186);printf("ID-FUNCIONARIO: %d",cf.IDfunc);gotoxy(67,6);putchar(186);
gotoxy(35,7);putchar(186);printf("NOME: %s",cf.nome);gotoxy(67,7);putchar(186);
gotoxy(35,8);putchar(186);printf("CELULAR: %s",cf.celular);gotoxy(67,8);putchar(186);
gotoxy(35,9);putchar(186);printf("E-MAIL: %s",cf.email);gotoxy(67,9);putchar(186);
gotoxy(35,10);putchar(186);printf("SETOR: %s",cf.setor);gotoxy(67,10);putchar(186);
gotoxy(35,11);putchar(186);printf("SALARIO: %d",cf.salario);gotoxy(67,11);putchar(186);
gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

fflush(stdin);
getchar();

}fclose(f);}
else{printf("Erro ao abrir arquivo!");}


}
