#include "main.h"
#define MAX_ALUNOS 50
typedef struct
{
    char nome[MAX_ALUNOS];
    int matricula;
    int faltas;
    float nota1[10];
    float nota2[10];
    float nota3[10];
    float nota4[10];
}Aluno;

Aluno CA [MAX_ALUNOS];
void login();
void menu();
void cadastrar();
void remover();
void aprovados();
void reprovados ();
void pesquisar();
void listaralunos2();
void listaralunos();
void Professor();
void gotoxy();

void ModuloProfessor()
{
    system ("cls");
    int op,c,l;
    do
    {
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
gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("      ESCOLA PR-TECH   ");gotoxy(65,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);  printf("    *** PROFESSOR ***");gotoxy(65,4);putchar(186);gotoxy(118,6);printf("%c",186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,6);putchar(186);  printf("[1] - LANCAMENTO NOTAS/FALTAS");gotoxy(65,6);putchar(186);
gotoxy(35,7);putchar(186);  printf("[2] - LISTAR ALUNOS");gotoxy(65,7);putchar(186);
gotoxy(35,8);putchar(186);  printf("[3] - REMOVER ALUNO");gotoxy(65,8);putchar(186);
gotoxy(35,9);putchar(186);  printf("[4] - ALUNOS APROVADOS");gotoxy(65,9);putchar(186);
gotoxy(35,10);putchar(186); printf("[5] - ALUNOS REPROVADOS");gotoxy(65,10);putchar(186);
gotoxy(35,11);putchar(186); printf("[6] - PEQUISAR ALUNOS");gotoxy(65,11);putchar(186);
gotoxy(35,12);putchar(186); printf("[7] - MENU PRINCIPAL");gotoxy(65,12);putchar(186);
gotoxy(35,13);putchar(186); printf("[8] - FECHAR O PROGRAMA");gotoxy(65,13);putchar(186);
gotoxy(35,14);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
gotoxy(36,15);printf("ESCOLHA UMA OPCAO: ");scanf("%d",&op);
        getchar();
        switch(op)
        {
            case 1:
                cadastrar();
            break;
            case 2:
                listaralunos();
            break;
            case 3:
                remover();
            break;
            case 4:
                aprovados();
            break;
            case 5:
                reprovados();
            break;

            case 6:
                pesquisar();
            break;
            case 7:
                login();
                break;
            case 8:
                printf("OBRIGADO POR UTILIZAR NOSSO SISTEMA :)\n\n");
                system("pause");
                exit(0);
            default:
                fflush(stdin);
                ModuloProfessor();
                break;
        }
        getchar();
        }
while(op!=0);
}
void cadastrar()
{
    system("cls");
    int op,c,l;
    struct CA;
    FILE *arquivo;
    arquivo = fopen("cadaluno.dat", "ab");
    if (arquivo!=NULL)
    {
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

gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("    ESCOLA PR - TECH   ");gotoxy(65,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("*LANCAMENTOS DE NOTAS/FALTAS*");gotoxy(65,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);



gotoxy(35,6);printf("DIGITE A MATRICULA: ");scanf("%d", &CA->matricula);getchar();
gotoxy(35,7);printf("NOME DO ALUNO: ");fgets(CA->nome,sizeof(CA->nome),stdin);

gotoxy(35,9);printf("DIGITE AS FALTAS/NOTAS");

gotoxy(35,10);printf("NUMERO DE FALTAS: ");scanf("%d", &CA->faltas);
gotoxy(35,12);printf("NOTAS DOS BIMESTRES");
gotoxy(35,13);printf("1 - BIMESTRE: ");scanf("%f", CA->nota1);
gotoxy(35,14);printf("2 - BIMESTRE: ");scanf("%f", CA->nota2);
gotoxy(35,15);printf("3 - BIMESTRE: ");scanf("%f", CA->nota3);
gotoxy(35,16);printf("4 - BIMESTRE: ");scanf("%f", CA->nota4);
gotoxy(35,18);printf("NOTAS/FALTAS LANCADAS!");

       fwrite(&CA, sizeof(Aluno),1, arquivo);
       fclose(arquivo);


 gotoxy(35,20);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
 gotoxy(35,21);printf("%c",186);        printf("1- NOVO LANCAMENTO"); gotoxy(55,21);printf("%c",186);
 gotoxy(35,22);printf("%c",186);        printf("0- VOLTAR AO MENU"); gotoxy(55,22);printf("%c",186);
 gotoxy(35,23);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

 gotoxy(35,24);printf("ESCOLHA UMA OPCAO: ");scanf("%d", &op);

 getchar();

    }
    else
    {
        printf("Erro ao abrir o arquivo");
    }
         switch(op)
        {
            case 1:
                cadastrar();
            break;
            case 0:
                ModuloProfessor();
            break;
        }

}
void remover()
{
    FILE *arquivo, *temporario;
    arquivo = fopen("cadaluno.dat", "rb");
    temporario = fopen("temp.dat", "wb");
    if (arquivo == NULL)
    {printf("Erro na abertura do arquivo.");}
    else{

int c,l;
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




    struct CA;
    int matricula;
    listaralunos2();
 gotoxy(32,16);    printf("DIGITE A MATRICULA A SER REMOVIDA: ");
    scanf("%d", &matricula);
    getchar();

        while(fread(&CA, sizeof(Aluno),1, arquivo)==1)
        {
            if (matricula!=CA->matricula)
            {
                fwrite(&CA, sizeof(Aluno),1, temporario);
            }
        }
    }

    if(ferror(temporario))
    {
        printf("Erro ao remover");
    }
    else
    {
 gotoxy(33,20);   printf("ALUNO REMOVIDO COM SUCESSO!\n");
    printf("\n\n\t\t\t\t");

    }

fclose(arquivo);
fclose(temporario);
remove ("cadaluno.dat");
rename ("temp.dat","cadaluno.dat");

}
void aprovados()
{


    FILE *arquivo;
    arquivo = fopen("cadaluno.dat", "rb");
    if (arquivo == NULL)
    {
    printf("\nErro na abertura do arquivo.\n");
    }
    else
    {
    system("cls");

    int c,l;
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

    struct CA;
    float media;
    int i = 1;

    gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("    ESCOLA PR - TECH   ");gotoxy(65,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("  *LISTA ALUNOS APROVADOS*");gotoxy(65,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);


    while (fread(&CA, sizeof(Aluno),1, arquivo)==1)
    {
        media = 0;
        media = *CA->nota1 + *CA->nota2 + *CA->nota3 + *CA->nota4;
        media = media/4;
                if (media >= 5.0)
        {

   gotoxy(35,6);putchar(186);printf("NOME: %s",CA->nome);gotoxy(65,6);putchar(186);
   gotoxy(35,7);putchar(186);printf("MATRICULA: %d",CA->matricula);gotoxy(65,7);putchar(186);
   gotoxy(35,8);putchar(186);printf("FALTAS %d", CA->faltas);gotoxy(65,8);putchar(186);
   gotoxy(35,9);putchar(186);printf("MEDIA: %.2f", media);gotoxy(65,9);putchar(186);
   gotoxy(35,10);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
                i++;
                getchar();



        }

    }

gotoxy(35,16);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,17);printf("%c",186);printf("TOTAL DE ALUNOS APROVADOS: %d", i - 1); gotoxy(64,17);printf("%c",186);
gotoxy(35,18);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);




    }

    fclose(arquivo);
}
void reprovados()
{


    FILE *arquivo;
    arquivo = fopen("cadaluno.dat", "rb");
    if (arquivo == NULL)
    {
    printf("Erro na abertura do arquivo.\n");
    }
    else
    {
    system("cls");
int c,l;
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






    struct CA;
    float media;
    int i = 1;
gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("    ESCOLA PR - TECH   ");gotoxy(65,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("    *LISTA ALUNOS REPROVADOS*");gotoxy(65,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);


    while (fread(&CA, sizeof(Aluno),1, arquivo)==1)
    {
        media = 0;
        media = *CA->nota1 + *CA->nota2 + *CA->nota3 + *CA->nota4;
        media = media/4;
                if (media < 5.0)


        {

   gotoxy(35,6);putchar(186);printf("NOME: %s",CA->nome);gotoxy(65,6);putchar(186);
   gotoxy(35,7);putchar(186);printf("MATRICULA: %d",CA->matricula);gotoxy(65,7);putchar(186);
   gotoxy(35,8);putchar(186);printf("FALTAS %d", CA->faltas);gotoxy(65,8);putchar(186);
   gotoxy(35,9);putchar(186);printf("MEDIA: %.2f", media);gotoxy(65,9);putchar(186);
   gotoxy(35,10);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
                i++;
                getchar();

        }

    }

gotoxy(35,16);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,17);printf("%c",186);printf("TOTAL DE ALUNOS REPROVADOS: %d", i - 1); gotoxy(65,17);printf("%c",186);
gotoxy(35,18);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);


    }

    fclose(arquivo);
}
void pesquisar()
{
 float media;
    FILE *arquivo;
    arquivo = fopen("cadaluno.dat", "rb+");
    if (arquivo == NULL)
    {printf("Erro na abertura do arquivo.");}
    else
        {
system ("cls");

int c,l;
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

gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("      ESCOLA PR - TECH   ");gotoxy(65,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("   ***PESQUISAR ALUNOS ***");gotoxy(65,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);





            char noome[MAX_ALUNOS];
            struct CA;
            int op;

         gotoxy(35,7);  printf ("DIGITE O NOME PARA PESQUISAR: ");
           scanf("%99[^\n]%*c", noome);
      gotoxy(35,8);     printf("ALUNOS COM O NOME \"%s\"  ", noome);
            Aluno CA;
while(1)
{
        size_t result = fread(&CA, sizeof(Aluno),1, arquivo);
        if(result==0)
        break;
        char noomeaux[MAX_ALUNOS];
        strcpy (noomeaux,CA.nome);

        if(strstr(noomeaux,noome)!=NULL)
        {

                                int c,l;
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

gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("      ESCOLA PR - TECH  ");gotoxy(65,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("   ***PESQUISAR ALUNOS***");gotoxy(65,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);




        media = 0;
        media = *CA.nota1 + *CA.nota2 + *CA.nota3 + *CA.nota4;
        media = media/4;


gotoxy(35,9);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,10);printf("%c",186);printf(" NOME: %s",CA.nome);gotoxy(58,10);putchar(186);
gotoxy(35,11);printf("%c",186);printf(" MATRICULA: %d",CA.matricula);gotoxy(58,11);putchar(186);
gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,13);printf("%c",186);printf(" FALTAS: %d", CA.faltas);gotoxy(58,13);putchar(186);
gotoxy(35,14);printf("%c",186);printf(" 1 BIMESTRE: %.2f",*CA.nota1);gotoxy(58,14);putchar(186);
gotoxy(35,15);printf("%c",186);printf(" 2 BIMESTRE: %.2f",*CA.nota2);gotoxy(58,15);putchar(186);
gotoxy(35,16);printf("%c",186);printf(" 3 BIMESTRE: %.2f",*CA.nota3);gotoxy(58,16);putchar(186);
gotoxy(35,17);printf("%c",186);printf(" 4 BIMESTRE: %.2f",*CA.nota4);gotoxy(58,17);putchar(186);
gotoxy(35,18);putchar(186);printf(" MEDIA: %.2f", media);gotoxy(58,18);putchar(186);
gotoxy(35,19);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

        }

}
fclose(arquivo);


	fseek(stdin, 0, SEEK_END);



 gotoxy(35,20);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
 gotoxy(35,21);printf("%c",186);        printf("1- NOVA PESQUISA"); gotoxy(55,21);printf("%c",186);
 gotoxy(35,22);printf("%c",186);        printf("0- VOLTAR AO MENU"); gotoxy(55,22);printf("%c",186);
 gotoxy(35,23);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
 gotoxy(35,24);printf("ESCOLHA UMA OPCAO: ");scanf("%d", &op);
 getchar();

                switch(op)
        {
            case 1:
                pesquisar();
            break;
            case 0:
                ModuloProfessor();
            break;
        }}}
void listaralunos(){

int i,j = 1;
FILE *arquivo;
arquivo = fopen("cadaluno.dat", "a+b");
    if (arquivo == NULL)
    {
    printf("\nErro na abertura do arquivo.\n");
    }
    else
    {
        system("cls");
gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("    ESCOLA PR - TECH   ");gotoxy(65,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("    *LISTA NOTAS/FALTAS*");gotoxy(65,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);



        while (!feof(arquivo))
            {
                i=fread(&CA, sizeof(Aluno), 1, arquivo);
                if (ferror(arquivo))
                {
                    printf("Erro na leitura do arquivo");
                }
                        else
                    {
                        if (i != 0)
                        {
                            int c,l;
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






gotoxy(35,6);printf("%c",186);printf("MATRICULA: %d",CA->matricula);gotoxy(65,6);printf("%c",186);
gotoxy(35,7);printf("%c",186);printf("NOME: %s",CA->nome);gotoxy(65,7);printf("%c",186);
gotoxy(35,8);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,9);printf("%c",186);printf("FALTAS: %d", CA->faltas);gotoxy(65,9);printf("%c",186);
gotoxy(35,10);printf("%c",186);printf("1 - BIMESTRE: %.2f",*CA->nota1);gotoxy(65,10);printf("%c",186);
gotoxy(35,11);printf("%c",186);printf("2 - BIMESTRE: %.2f",*CA->nota2);gotoxy(65,11);printf("%c",186);
gotoxy(35,12);printf("%c",186);printf("3 - BIMESTRE: %.2f",*CA->nota3);gotoxy(65,12);printf("%c",186);
gotoxy(35,13);printf("%c",186);printf("4 - BIMESTRE: %.2f",*CA->nota4);gotoxy(65,13);printf("%c",186);
gotoxy(35,14);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
j++;
getchar();

                        }
                    }
            }
fclose(arquivo);


gotoxy(35,16);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,17);printf("%c",186);printf("TOTAL DE ALUNOS: %d", j - 1); gotoxy(56,17);printf("%c",186);
gotoxy(35,18);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

gotoxy(35,20);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,21);printf("%c",186);printf("*** FIM DA LISTA ***");gotoxy(56,21);printf("%c",186);
gotoxy(35,22);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);


}}


void listaralunos2(){

int i;
FILE *arquivo;
arquivo = fopen("cadaluno.dat", "a+b");
    if (arquivo == NULL)
    {
    printf("\nErro na abertura do arquivo.\n");
    }
    else
    {
        system("cls");
gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("    ESCOLA PR - TECH   ");gotoxy(65,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("    *LISTA NOTAS/FALTAS*");gotoxy(65,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);



        while (!feof(arquivo))
            {i=fread(&CA, sizeof(Aluno), 1, arquivo);
                if (ferror(arquivo))
                {printf("Erro na leitura do arquivo");}
                    else
                    {if (i != 0){
int c,l;
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



gotoxy(35,6);printf("%c",186);printf("MATRICULA: %d",CA->matricula);gotoxy(65,6);printf("%c",186);
gotoxy(35,7);printf("%c",186);printf("NOME: %s",CA->nome);gotoxy(65,7);printf("%c",186);
gotoxy(35,8);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,9);printf("%c",186);printf("FALTAS: %d", CA->faltas);gotoxy(65,9);printf("%c",186);
gotoxy(35,10);printf("%c",186);printf("1 - BIMESTRE: %.2f",*CA->nota1);gotoxy(65,10);printf("%c",186);
gotoxy(35,11);printf("%c",186);printf("2 - BIMESTRE: %.2f",*CA->nota2);gotoxy(65,11);printf("%c",186);
gotoxy(35,12);printf("%c",186);printf("3 - BIMESTRE: %.2f",*CA->nota3);gotoxy(65,12);printf("%c",186);
gotoxy(35,13);printf("%c",186);printf("4 - BIMESTRE: %.2f",*CA->nota4);gotoxy(65,13);printf("%c",186);
gotoxy(35,14);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
getchar();

}}}
fclose(arquivo);}}


