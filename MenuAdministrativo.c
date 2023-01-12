#include "main.h"
#define MAX_ALUNOS 50

    void gotoxy(int n, int l)
{
  COORD c;
  c.X = n;
  c.Y = l;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void listarC2 ();
void limpaBuffer();
void gotoxy();
void menu();
void login();
void cadastrarA();
void CadastroCurso();
void listarA();
void alterarA();
void relatorioA();
void excluirA();
void excluirC();
void ListarParaExcluir();
void pesquisarA();
void CadastroCurso();
void cadastrarC();
typedef struct
{
    char  nome[40];
    char  email[40];
    char  celular[20];
    int   idade;
    int   IDaluno;
    int   aluno_A;
} ACAD;
ACAD AC [MAX_ALUNOS];


void CadastroAlunos(){
   int op;
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



gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("    ESCOLA PR - TECH   ");gotoxy(60,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);  printf("   *** SECRETARIA ***");gotoxy(60,4);putchar(186);gotoxy(118,6);printf("%c",186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,6);putchar(186);  printf("[1] - CADASTRAR ALUNOS");gotoxy(60,6);putchar(186);
gotoxy(35,7);putchar(186);  printf("[2] - LISTAR ALUNOS");gotoxy(60,7);putchar(186);
gotoxy(35,8);putchar(186);  printf("[3] - ALTERAR ALUNOS");gotoxy(60,8);putchar(186);
gotoxy(35,9);putchar(186);  printf("[4] - REMOVER ALUNOS");gotoxy(60,9);putchar(186);
gotoxy(35,10);putchar(186); printf("[5] - PESQUISAR ALUNO");gotoxy(60,10);putchar(186);
gotoxy(35,11);putchar(186); printf("[6] - AREA DOS CURSOS");gotoxy(60,11);putchar(186);
gotoxy(35,12);putchar(186); printf("[7] - MENU PRINCIPAL");gotoxy(60,12);putchar(186);
gotoxy(35,13);putchar(186); printf("[8] - FECHAR PROGRAMA");gotoxy(60,13);putchar(186);
gotoxy(35,14);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
gotoxy(36,15);printf("ESCOLHA UMA OPCAO: ");scanf("%d",&op);





        getchar();
        switch(op)
        {
        case 1:
            cadastrarA();
            break;
        case 2:
            listarA();
            break;
        case 3:
            alterarA();
            break;
        case 4:
            excluirA();
            break;
        case 5:
            pesquisarA();
            break;
        case 6:
            CadastroCurso();
            break;
        case 7:
            login();
            break;
        case 8:
            printf("OBRIGADO POR UTILIZAR NOSSO SISTEMA :)\n");
            system("pause");
            exit(0);
        default:

            CadastroAlunos();

getchar();
    }
}



void cadastrarA(){
    system("cls");
    int op,c,l;
    struct AC;
    FILE *a;
    a = fopen("alunoinfo.dat", "ab");
    if (a == NULL){printf("\nErro na abertura do arquivo");}
    else
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


gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("    ESCOLA PR - TECH   ");gotoxy(60,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("** CADASTRO DE ALUNOS **");gotoxy(60,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
gotoxy(35,6);printf("ID-ALUNO: ");scanf("%d",&AC->IDaluno); fflush(stdin);
gotoxy(35,7);printf("NOME: ");fgets(AC->nome,40,stdin);
gotoxy(35,8);printf("IDADE: ");scanf("%d",&AC->idade);fflush(stdin);
gotoxy(35,9);printf("CELULAR: ");fgets(AC->celular,20,stdin);
gotoxy(35,10);printf("E-MAIL: ");fgets(AC->email,40,stdin);
gotoxy(35,11);

        AC->aluno_A=1;
        fwrite(&AC, sizeof(ACAD), 1, a);
        fclose(a);
gotoxy(35,12);printf("ALUNO CADASTRADO COM SUCESSO !!!\n");
printf("\n\t\t\t");


gotoxy(35,14);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
 gotoxy(35,15);printf("%c",186);        printf("1- NOVO CADASTRO"); gotoxy(55,15);printf("%c",186);
 gotoxy(35,16);printf("%c",186);        printf("0- VOLTAR AO MENU"); gotoxy(55,16);printf("%c",186);
 gotoxy(35,17);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

 gotoxy(35,18);                         printf("ESCOLHA UMA OPCAO: ");scanf("%d", &op);

        getchar();
        system("pause");

        if (ferror(a)){printf("Erro na gravacao ");}
        else{printf("Erro ao abrir o arquivo");}
        switch(op){

            case 1:
            cadastrarA();
            break;
            case 0:
            CadastroAlunos();
            break;
  printf("\n\n\t\t\t");



            default:
            CadastroAlunos();

            }}

 }

void listarA (){
int i;
int j=1;
int c,l;
FILE *a;
a = fopen("alunoinfo.dat", "a+b");
    if (a == NULL)
    {printf("\nErro na abertura do arquivo.\n");}
    else
    {system("cls");


gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("       ESCOLA PR - TECH   ");gotoxy(67,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("   **  LISTA DOS ALUNOS  **");gotoxy(67,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);

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


        while (!feof(a))
            {i=fread(&AC, sizeof(ACAD), 1, a);
            if (ferror(a)){printf("Erro na leitura do arquivo");}
            else{
                if (i != 0){


gotoxy(35,6);putchar(186);printf("ID-ALUNO: %d",AC->IDaluno);gotoxy(67,6);putchar(186);
gotoxy(35,7);putchar(186);printf("NOME: %s",AC->nome);gotoxy(67,7);putchar(186);
gotoxy(35,8);putchar(186);printf("IDADE: %d\n",AC->idade);gotoxy(67,8);putchar(186);
gotoxy(35,9);putchar(186);printf("CELULAR: %s",AC->celular);gotoxy(67,9);putchar(186);
gotoxy(35,10);putchar(186);printf("E-MAIL: %s",AC->email);gotoxy(67,10);putchar(186);
gotoxy(35,11);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
j++;
getchar();
setbuf(stdin,NULL);
                        }}}fclose(a);}

gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,13);printf("%c",186);printf("TOTAL DE ALUNOS: %d", j - 1); gotoxy(56,13);printf("%c",186);
gotoxy(35,14);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

gotoxy(35,16);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,17);printf("%c",186);printf("*** FIM DA LISTA ***");gotoxy(56,17);printf("%c",186);
gotoxy(35,18);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);



printf("\n\n\t\t\t");


                    system("pause");
                    CadastroAlunos();

                    }


void alterarA(){
    struct AC;
    system("cls");
    FILE *a;
    a = fopen("alunoinfo.dat", "rb+");
    int l,c,id, i = 1;
    if(a){
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
gotoxy(35,4);putchar(186);printf("   ** LISTA DOS CADASTRO **");gotoxy(67,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);




while(fread(&AC, sizeof(ACAD), 1, a)){
gotoxy(35,5);putchar(204);
gotoxy(35,6);putchar(186);printf("[%d]-INDICE",i);gotoxy(67,6);putchar(186);
gotoxy(35,7);putchar(186);printf("NOME: %s",AC->nome);gotoxy(67,7);putchar(186);
gotoxy(35,8);putchar(186);printf("IDADE: %d\n",AC->idade);gotoxy(67,8);putchar(186);
gotoxy(35,9);putchar(186);printf("CELULAR: %s",AC->celular);gotoxy(67,9);putchar(186);
gotoxy(35,10);putchar(186);printf("E-MAIL: %s",AC->email);gotoxy(67,10);putchar(186);
gotoxy(35,11);putchar(186);printf("ID-AlUNO: %d\n",AC->IDaluno);gotoxy(67,11);putchar(186);
gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
getchar();
i++;

        }
gotoxy(32,14);printf("DIGITE O INDICE [I] QUE DESEJA ALTERAR:");
        scanf("%d", &id);
        getchar();
        id--;

        if(id >= 0 && id < i - 1)
        {
gotoxy(35,17);printf("NOVO NOME: ");fgets(AC->nome, 40 , stdin);
gotoxy(35,18);printf("ALTERAR IDADE: ");scanf("%d", &AC->idade);fflush(stdin);
gotoxy(35,19);printf("NOVO CELULAR: ");fgets(AC->celular,20,stdin);
gotoxy(35,20);printf("NOVO E-MAIL: ");fgets(AC->email, 40,stdin);
gotoxy(35,21);printf("NOVO ID-ALUNO: ");scanf("%d", &AC->IDaluno);fflush(stdin);

            fseek(a, id * sizeof(ACAD), SEEK_SET);
            fwrite(&AC, sizeof(ACAD), 1, a);
        gotoxy(35,23);printf("USUARIO ATUALIZADO COM SUCESSO\n");
printf("\n\t\t\t");
        }fclose(a);}
         system("pause");
         CadastroAlunos();

}

void excluirA (){
FILE *a;
FILE *temp;
    a = fopen("alunoinfo.dat", "rb");
    temp = fopen("temp.dat", "wb");

    if (a == NULL){printf("Erro na abertura do arquivo.");}
    else{

    struct AC;
    int IDaluno;
    ListarParaExcluir();
gotoxy(36,14);printf( "DIGITE ID QUE DESEJA EXCLUIR:");
    scanf("%d", &IDaluno);
    getchar();

        while(fread(&AC, sizeof(ACAD),1, a)==1)
            {

            if (IDaluno!=AC->IDaluno)
            {fwrite(&AC, sizeof(ACAD),1, temp);
            }}}

            if(ferror(temp)){printf("Erro ao remover");}
            else{
                    gotoxy(35,16);printf("ALUNO REMOVIDO COM SUCESSO!\n\n");}

fclose(a);
fclose(temp);
remove ("alunoinfo.dat");
rename ("temp.dat","alunoinfo.dat");
                           system ("pause");
                           CadastroAlunos();
                           }

void pesquisarA(){
    int c,l;
 FILE *a;
    a = fopen("alunoinfo.dat", "rb+");
    if (a == NULL)
    {
        printf("Erro na abertura do arquivo.");
    }
    else
        {
            system ("cls");
            char noome[MAX_ALUNOS];
            struct CA;
            int op;
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
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,4);putchar(186);printf("PESQUISA DE ALUNOS  ");gotoxy(54,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
gotoxy(25,7);printf ("DIGITE O NOME PARA PESQUISAR: ");
           scanf("%99[^\n]%*c", noome);
           system ("cls");
gotoxy(10,10);printf("ALUNO COM O NOME: %s   ", noome);
            ACAD AC;
while(1)
{
        size_t result = fread(&AC, sizeof(ACAD),1, a);
        if(result==0)
        break;
        char noomeaux[MAX_ALUNOS];
        strcpy (noomeaux,AC.nome);

        if(strstr(noomeaux,noome)!=NULL)
        {
gotoxy(40,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(40,4);putchar(186);printf ("PESQUISA DE ALUNOS   ");gotoxy(59,4);putchar(186);
gotoxy(40,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
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

   gotoxy(35,9);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
   gotoxy(35,10);printf("%c",186);printf("NOME: %s",AC.nome);gotoxy(67,10);printf("%c",186);
   gotoxy(35,11);printf("%c",186);printf("IDADE: %d\n",AC.idade);gotoxy(67,11);printf("%c",186);
   gotoxy(35,12);printf("%c",186);printf("CELULAR: %s",AC.celular);gotoxy(67,12);printf("%c",186);
   gotoxy(35,13);printf("%c",186);printf("E-MAIL: %s",AC.email);gotoxy(67,13);printf("%c",186);
   gotoxy(35,14);printf("%c",186); printf("ID-ALUNO: %d\n",AC.IDaluno);gotoxy(67,14);printf("%c",186);
   gotoxy(35,15);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

   getchar();

        }

}
 fclose(a);
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


fseek(stdin, 0, SEEK_END);

 gotoxy(35,19);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
 gotoxy(35,20);printf("%c",186);        printf("1- NOVA PESQUISA"); gotoxy(55,20);printf("%c",186);
 gotoxy(35,21);printf("%c",186);        printf("0- VOLTAR AO MENU"); gotoxy(55,21);printf("%c",186);
 gotoxy(35,22);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

 gotoxy(35,23);                         printf("ESCOLHA UMA OPCAO: ");
        scanf("%d", &op);
        getchar();
                switch(op)
        {
            case 1:
                pesquisarA();
            break;
            case 0:
              CadastroAlunos();
            break;
            default:
            fflush(stdin);
            CadastroAlunos();

        }}}

void menu();
void cadastrarC();
void listarC();
void alterarC();
void excluirC();

typedef struct
{
    char  nomec[40];
    int   valor;
    int   IDcurso;
    int   curso_A;
} CURSO;
CURSO CC;


void CadastroCurso(){
int op;
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


gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("   ESCOLA PR-TECH  ");gotoxy(57,2);putchar(186);
gotoxy(35,3);putchar(204);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(185);gotoxy(118,5);printf("%c",186);
gotoxy(35,4);putchar(186);  printf(" *** SECRETARIA ***");gotoxy(57,4);putchar(186);gotoxy(118,6);printf("%c",186);
gotoxy(35,5);putchar(204);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(205);putchar(185);gotoxy(118,7);printf("%c",186);
gotoxy(35,6);putchar(186);  printf("1- CADASTRAR CURSO");gotoxy(57,6);putchar(186);
gotoxy(35,7);putchar(186);  printf("2- LISTAR CURSO");gotoxy(57,7);putchar(186);
gotoxy(35,8);putchar(186);  printf("3- ALTERAR CURSO");gotoxy(57,8);putchar(186);
gotoxy(35,9);putchar(186);  printf("4- REMOVER CURSO");gotoxy(57,9);putchar(186);
gotoxy(35,10);putchar(186); printf("5- MENU ANTERIOR");gotoxy(57,10);putchar(186);
gotoxy(35,11);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
gotoxy(37,12);printf("ESCOLHA UMA OPCAO: ");
 scanf("%d", &op);


        getchar();
        switch(op)
        {
        case 1:
            cadastrarC();
            break;
        case 2:
            listarC();
            break;
        case 3:
            alterarC();
            break;
        case 4:
            excluirC();
            break;
        case 5:
            CadastroAlunos();
            break;
        default:
            CadastroCurso();
    }
    while(op!=0);
    }




void cadastrarC(){
    system("cls");
int l,d;
    struct CC;
    FILE *c;
    c = fopen("cadcurso.dat", "ab");
    if (c == NULL){printf("\nErro na abertura do arquivo");}
    else
    {
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


gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);printf("  ESCOLA PR - TECH   ");gotoxy(57,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf(" CADASTRO DE CURSOS \n");gotoxy(57,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
gotoxy(35,6);printf("ID-CURSO: "); scanf("%d",&CC.IDcurso); fflush(stdin);
gotoxy(35,7);printf("NOME DO CURSO: ");fgets(CC.nomec,40,stdin);
gotoxy(35,8);printf("VALOR DO CURSO: ");scanf("%d",&CC.valor);fflush(stdin);

CC.curso_A=1;
fwrite(&CC, sizeof(CURSO), 1, c);
fclose(c);
gotoxy(33,12);printf(" CURSO CADASTRADO COM SUCESSO !");
printf("\n\n\t\t\t\t");
system("pause");
return CadastroCurso();
    }}

void listarC (){
int i,d,l,j = 1;
FILE *c;
c = fopen("cadcurso.dat", "a+b");
    if (c == NULL)
    {printf("\nErro na abertura do arquivo.\n");}
    else
    {
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



gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("     ESCOLA PR - TECH   ");gotoxy(63,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("  ** LISTA DOS CURSOS **");gotoxy(63,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);



            while (!feof(c))
            {i=fread(&CC, sizeof(CURSO), 1, c);
            if (ferror(c)){printf("Erro na leitura do arquivo");}
            else{
            if (i != 0){

  gotoxy(35,6);putchar(186);printf("ID-CURSO: %d",CC.IDcurso);gotoxy(63,6);putchar(186);
  gotoxy(35,7);putchar(186);printf("NOME: %s",CC.nomec);gotoxy(63,7);putchar(186);
  gotoxy(35,8);putchar(186);printf("VALOR: %d\n",CC.valor);gotoxy(63,8);putchar(186);
  gotoxy(35,9);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
  j++;
  getchar();


                        }}}fclose(c);
             }
             gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,13);printf("%c",186);printf(" TOTAL DE CURSOS: %d", j - 1); gotoxy(56,13);printf("%c",186);
gotoxy(35,14);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);




gotoxy(35,16);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,17);printf("%c",186);printf("*FIM DA LISTA DE CURSOS*");gotoxy(60,17);printf("%c",186);
gotoxy(35,18);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);


             printf("\n\n\t\t\t\t");
             system("pause");

             CadastroCurso();

             }

void alterarC(){
    struct CC;
    FILE *c;
    c = fopen("cadcurso.dat", "rb+");
    int id,d,l, i = 1;
    if(c){
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

gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("     ESCOLA PR - TECH   ");gotoxy(63,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("**ALTERAR DADOS DO CURSO**");gotoxy(63,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);

while(fread(&CC, sizeof(CURSO), 1, c)){

  gotoxy(35,6);printf("%c",186);printf(" INDICE [%d]",i);gotoxy(63,6);printf("%c",186);
  gotoxy(35,7);printf("%c",186);printf("___________________________");gotoxy(63,7);printf("%c",186);
  gotoxy(35,8);printf("%c",186);printf(" ID-CURSO: %d",CC.IDcurso);gotoxy(63,8);printf("%c",186);
  gotoxy(35,9);printf("%c",186);printf(" NOME: %s",CC.nomec);gotoxy(63,9);printf("%c",186);
  gotoxy(35,10);printf("%c",186);printf(" VALOR: %d",CC.valor);gotoxy(63,10);printf("%c",186);
  gotoxy(35,11);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
  i++;
  getchar();
        }

 gotoxy(36,12);printf("DIGITE O INDICE PARA ALTERAR: ");
        scanf("%d", &id);
        getchar();
        id--;
        if(id >= 0 && id < i - 1)
        {

            gotoxy(36,14);printf("NOVO NOME: ");fgets(CC.nomec,40,stdin);
            gotoxy(36,15);printf("ALTERAR VALOR: ");scanf("%d", &CC.valor);fflush(stdin);
            gotoxy(36,16);printf("NOVO ID-CURSO: ");scanf("%d", &CC.IDcurso);fflush(stdin);

            fseek(c, id * sizeof(CURSO), SEEK_SET);
            fwrite(&CC, sizeof(CURSO), 1, c);

            gotoxy(36,19); printf("CURSO ATUALIZADO COM SUCESSO");
            printf("\n\n\t\t\t\t");

        }fclose(c);}
    else
        {printf("Erro ao abrir arquivo!");}
        system("pause");

return CadastroCurso();}

void excluirC(){
FILE *c;
FILE *temp;
c = fopen("cadcurso.dat", "rb");
temp = fopen("temp.dat", "wb");

    if(c == NULL){printf("Erro na abertura do arquivo");}
    else{
    int IDcurso;
    listarC2();


    gotoxy(36,16);printf("DIGITE A ID A SER REMOVIDA: ");
    scanf("%d", &IDcurso);


     gotoxy(36,19); printf("CURSO REMOVIDO COM SUCESSO!\t\t\t\n");

     system("pause");

     printf("\n\t\t\t\t\t");
        while(fread(&CC, sizeof(CURSO),1, c)==1)
{
            if (IDcurso!=CC.IDcurso)
        {fwrite(&CC, sizeof(CURSO),1, temp);


            }}}

            if(ferror(temp)){printf("Erro ao remover");}
            else{


       }

fclose(c);
fclose(temp);
remove ("cadcurso.dat");
rename ("temp.dat","cadcurso.dat");
CadastroCurso();
}

void ListarParaExcluir (){
int i,c,l;
FILE *a;
a = fopen("alunoinfo.dat", "a+b");

    if (a == NULL)
    {printf("Erro na abertura do arquivo.");}
    else
    {
        system("cls");
        gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("       ESCOLA PR - TECH   ");gotoxy(67,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);printf("%c",186);printf(" LISTA DE ALUNOS PARA EXCLUIR");gotoxy(67,4);printf("%c",186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);

        while (!feof(a))
            {i=fread(&AC, sizeof(ACAD), 1, a);
            if (ferror(a)){printf("Erro na leitura do arquivo");}
            else{
                if (i != 0){
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





gotoxy(35,6);putchar(186);gotoxy(67,6);putchar(186);
gotoxy(35,7);putchar(186);printf("ID-ALUNO: %d",AC->IDaluno);gotoxy(67,7);putchar(186);
gotoxy(35,8);putchar(186);printf("NOME: %s",AC->nome);gotoxy(67,8);putchar(186);
gotoxy(35,9);putchar(186);printf("IDADE: %d",AC->idade);gotoxy(67,9);putchar(186);
gotoxy(35,10);putchar(186);printf("CELULAR: %s",AC->celular);gotoxy(67,10);putchar(186);
gotoxy(35,11);putchar(186);printf("EMAIL: %s",AC->email);gotoxy(67,11);putchar(186);
gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
getchar();
         }}}fclose(a);
         }}

void listarC2 (){
int i,d,l;
FILE *c;
c = fopen("cadcurso.dat", "a+b");
    if (c == NULL)
    {printf("Erro na abertura do arquivo.");}
    else
    {
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
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,4);putchar(186);printf("LISTA DOS CURSOS P/ EXCLUIR");gotoxy(63,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);



            while (!feof(c))
            {i=fread(&CC, sizeof(CURSO), 1, c);
            if (ferror(c)){printf("Erro na leitura do arquivo");}
            else{
                if (i != 0){

  gotoxy(35,6);putchar(186);printf("ID-CURSO: %d",CC.IDcurso);gotoxy(63,6);putchar(186);
  gotoxy(35,7);putchar(186);printf("NOME: %s",CC.nomec);gotoxy(63,7);putchar(186);
  gotoxy(35,8);putchar(186);printf("VALOR: %d",CC.valor);gotoxy(63,8);putchar(186);
  gotoxy(35,9);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
  getchar();


                        }}}fclose(c);}}
