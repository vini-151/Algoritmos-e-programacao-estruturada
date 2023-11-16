#include <stdio.h>
#include <string.h> // strcmp
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#define TAM 1000

typedef struct{
    int id;
    char nome [20];
    char email[50];
    char sexo[15];
    char endereco[50];
    double altura   ;
    int vacina; // 1 - sim.  0  - não
}Pessoa;

void cadastrar(Pessoa p[], int indice){
    int arroba = 1;
    printf("Insira  o nome.\n");
    fflush(stdin);
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);
    
    do{
        arroba = 1;
        printf("Insira o seu email.\n");
        fflush(stdin);    
        fgets(p[indice].email, sizeof(p[indice].email), stdin);
        fflush(stdin);
        if (strchr(p[indice].email, '@') == NULL){
            printf("Nao existe.\n");
            arroba = 0;
        }
    } while (arroba != 1);

    do{
        printf("Digite seu sexo (Feminino, Masculino ou indiferente).\n");
        fflush(stdin);
        fgets(p[indice].sexo, sizeof(p[indice].sexo), stdin);
        fflush(stdin);
        p[indice].sexo[strcspn(p[indice].sexo, "\n")] = '\0'; 
        for (int j = 0; j < sizeof(p[indice].sexo); j++) {
            p[indice].sexo[j] = toupper(p[indice].sexo[j]); 
        }
    } while (strcmp(p[indice].sexo, "FEMININO") != 0 && strcmp(p[indice].sexo, "MASCULINO") != 0 && strcmp(p[indice].sexo, "INDIFERENTE") != 0);
    
    printf("Insira o endereco.\n");
    fflush(stdin);
    fgets(p[indice].endereco, sizeof(p[indice].endereco), stdin);
    fflush(stdin);

    do{
        printf("Insira sua altura (entre 1 metro a 2 metros).\n");
        scanf("%lf", &p[indice].altura);
        if (p[indice].altura < 1 || p[indice].altura > 2){
            printf("Altura incompativel.\n");
        }
    } while (p[indice].altura < 1 || p[indice].altura > 2);

    printf("Voce foi vacinado? 1 - Sim. 0 - Nao");
    scanf("%i", &p[indice].vacina);

    //gerando um id  de 4 digitos aleatorios
    srand(time(NULL));
    p[indice].id = rand() % 9000 + 1000;

    printf("Cadastro realizado com sucesso! ID: %i \n", p[indice].id);
}

void alterar(Pessoa p[], int tamanhoLista, int id){
    int arroba = 1;
    int opcao;
    if (tamanhoLista == 0){
        printf("Nao ha usuarios cadastrados");
    }else{
        for (int i = 0; i < tamanhoLista; i++){
            if(p[i].id == id){
                printf("Usuario de Id: %i encontrado.\n", id);
                do{
                    printf("Digite o numero correspondente a o que deseja alterar");
                    printf("1 - Nome.\n 2 - Email.\n 3 - Sexo.\n 4 - Endereco.\n 5 - Altura.\n 6 - Vacina\n. 7 - Todos os itens.\n");
                    scanf("%i", &opcao);
                } while (opcao != 1 || opcao != 2 || opcao != 3 || opcao != 4 || opcao != 5 || opcao != 6);
                switch (opcao){
                    case 1:
                        printf("Insira  o nome.\n");
                        fflush(stdin);
                        fgets(p[i].nome, sizeof(p[i].nome), stdin);
                        fflush(stdin);
                        break;
                    case 2:
                        do{
                            arroba = 1;
                            printf("Insira o seu email.\n");
                            fflush(stdin);    
                            fgets(p[i].email, sizeof(p[i].email), stdin);
                            fflush(stdin);
                            if (strchr(p[i].email, '@') == NULL){
                                printf("Nao existe.\n");
                                arroba = 0;
                            }
                        }while(arroba != 1);
                        break;
                    case 3:
                        do{
                            printf("Digite seu sexo (Feminino, Masculino ou indiferente).\n");
                            fflush(stdin);
                            fgets(p[i].sexo, sizeof(p[i].sexo), stdin);
                            fflush(stdin);
                            p[i].sexo[strcspn(p[i].sexo, "\n")] = '\0'; 
                            for (int j = 0; j < sizeof(p[i].sexo); j++) {
                                p[i].sexo[j] = toupper(p[i].sexo[j]); 
                            }
                        } while (strcmp(p[i].sexo, "FEMININO") != 0 && strcmp(p[i].sexo, "MASCULINO") != 0 && strcmp(p[i].sexo, "INDIFERENTE") != 0);
                        break;
                    case 4:
                        printf("Insira o endereco.\n");
                        fflush(stdin);
                        fgets(p[i].endereco, sizeof(p[i].endereco), stdin);
                        fflush(stdin);
                        break;
                    case 5:
                        do{
                            printf("Insira sua altura (entre 1 metro a 2 metros).\n");
                            scanf("%lf", &p[i].altura);
                            if (p[i].altura < 1 || p[i].altura > 2){
                                printf("Altura incompativel.\n");
                            }
                        } while (p[i].altura < 1 || p[i].altura > 2);
                        break;
                    case 6:
                        printf("Voce foi vacinado? 1 - Sim. 0 - Nao");
                        scanf("%i", &p[i].vacina);
                        break;
                    case 7:
                        printf("Insira  o nome.\n");
                        fflush(stdin);
                        fgets(p[i].nome, sizeof(p[i].nome), stdin);
                        fflush(stdin);

                        do{
                            arroba = 1;
                            printf("Insira o seu email.\n");
                            fflush(stdin);    
                            fgets(p[i].email, sizeof(p[i].email), stdin);
                            fflush(stdin);
                            if (strchr(p[i].email, '@') == NULL){
                                printf("Nao existe.\n");
                                arroba = 0;
                            }
                        }while(arroba != 1);    

                        do{
                            printf("Digite seu sexo (Feminino, Masculino ou indiferente).\n");
                            fflush(stdin);
                            fgets(p[i].sexo, sizeof(p[i].sexo), stdin);
                            fflush(stdin);
                            p[i].sexo[strcspn(p[i].sexo, "\n")] = '\0'; 
                            for (int j = 0; j < sizeof(p[i].sexo); j++) {
                                p[i].sexo[j] = toupper(p[i].sexo[j]); 
                            }
                        } while (strcmp(p[i].sexo, "FEMININO") != 0 && strcmp(p[i].sexo, "MASCULINO") != 0 && strcmp(p[i].sexo, "INDIFERENTE") != 0);
                        
                        printf("Insira o endereco.\n");
                        fflush(stdin);
                        fgets(p[i].endereco, sizeof(p[i].endereco), stdin);
                        fflush(stdin);

                        do{
                            printf("Insira sua altura (entre 1 metro a 2 metros).\n");
                            scanf("%lf", &p[i].altura);
                            if (p[i].altura < 1 || p[i].altura > 2){
                                printf("Altura incompativel.\n");
                            }
                        } while (p[i].altura < 1 || p[i].altura > 2);

                        printf("Voce foi vacinado? 1 - Sim. 0 - Nao");
                        scanf("%i", &p[i].vacina);

                }
            }
        }
    }
}

void excluir(Pessoa p[], int tamanhoLista, int id){
     if (tamanhoLista == 0){
        printf("Nao ha usuarios cadastrados");
    }else{
        for (int i = 0; i < tamanhoLista; i++){
            if(p[i].id == id){
                printf("Usuario de Id: %i encontrado.\n", id);
                for (int j = i; j < tamanhoLista; j++){
                    p[j] = p[j - 1];
                }
                printf("Registro deletado com sucesso!\n");
            }
        }
    } 
}

void buscar(Pessoa p[], int tamanhoLista, int id){
    if (tamanhoLista == 0){
        printf("Nao ha usuarios cadastrados.\n");
    }else{
        for (int i = 0; i < tamanhoLista; i++){
            if (p[i].id == id){
                printf("Usuario de registro %i encontrado!\n", id);
                printf("Nome: %s\n", p[i].nome);
                printf("Email: %s\n", p[i].email);
                printf("Sexo: %s\n", p[i].sexo);
                printf("Endereco: %s\n", p[i].endereco);
                printf("Altura: %.2lf", p[i].altura);
                if (p[i].vacina == 1){
                    printf("Vacina - Sim\n");
                }else{
                    printf("Vacina - Nao\n");
                }
            }
        }
    }
}

void imprimir(Pessoa p[], int tamanhoLista){
    if (tamanhoLista == 0){
        printf("Nao ha usuarios cadastrados.\n");
    }else{
        for (int i = 0; i < tamanhoLista; i++){
            printf("Nome: %s\n", p[i].nome);
            printf("Id: %i", p[i].id);
            printf("Email: %s\n", p[i].email);
            printf("Sexo: %s\n", p[i].sexo);
            printf("Endereco: %s\n", p[i].endereco);
            printf("Altura: %.2lf", p[i].altura);  
            if (p[i].vacina == 1){
                printf("Vacina - Sim\n");
            }else{
                printf("Vacina - Nao\n");
            }          
        }
    }
} 


int main(){
    Pessoa p[TAM];
    int opcao, id;
    char menu;
    int totalCadastrados = 0;
    printf("Sistema de cadastro.\n");
    do{
        printf("Escolha a opcao desejada:\n");
        printf(" I - Incuir.\n A - Alterar.\n E - Excluir.\n B - Buscar.\n C - Imprimir cadastrados.\n");
        scanf("%c", &menu);
        menu = toupper(menu);
        switch (menu){
        case 'I':
            totalCadastrados++;
            cadastrar(p, totalCadastrados);
            break;
        case 'A':
            printf("Digite o ID:\n");
            scanf("%i", &id);
            alterar(p, totalCadastrados, id);
            break;
        case 'E':
            printf("Digite o ID:\n");
            scanf("%i", &id);
            excluir(p, totalCadastrados, id);
            break;
        case 'B':
            printf("Digite o ID:\n");
            scanf("%i", &id);
            buscar(p, totalCadastrados, id);
            break;
        case 'C':
            imprimir(p, totalCadastrados);
            break;
        }
        printf("Deseja realizar outra operacao? 1 - Sim / 0 - Nao\n");
        scanf("%i", &opcao);
    } while (opcao != 0);
    
    return 0;

}
