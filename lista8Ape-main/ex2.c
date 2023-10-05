#include <stdio.h>

int main (){
    char elevador;
    char periodo;
    int cont = 0;
    int contElevAmat = 0;
    int contElevBmat = 0;
    int contElevCmat = 0;
    int contElevAvesp = 0;
    int contElevBvesp = 0;
    int contElevCvesp = 0;
    int contElevAnot = 0;
    int contElevBnot = 0;
    int contElevCnot = 0;
    int contMat = 0;
    int contVesp = 0;
    int contNot = 0;




    for (int i = 0; i < 5; i++){
        //coletando dados
        printf("Qual elevador voce mais utiliza? (A, B, C)\n");
        scanf("%c", &elevador);
        fflush(stdin);
        printf("Qual o periodo que voce utiliza o elevador? M = matutino. V = Vespertino. N = Noturno\n");
        scanf("%c", &periodo);
        fflush(stdin);

        //contando periodos e elevadores utilizados 
        if (periodo == 'M' || periodo == 'm'){
            contMat++;
            if (elevador == 'A' || elevador == 'a'){
                contElevAmat++;
            }else if(elevador == 'B' || elevador == 'b'){
                contElevBmat++;
            }else if(elevador == 'C' || elevador == 'c'){
                contElevCmat++;
            }
        }else if (periodo == 'V' || periodo == 'v'){
            contVesp++;
            if (elevador == 'A' || elevador == 'a'){
                contElevAvesp++;
            }else if(elevador == 'B' || elevador == 'b'){
                contElevBvesp++;
            }else if(elevador == 'C' || elevador == 'c'){
                contElevCvesp++;
            }
                 
        }else if(periodo == 'N' || periodo == 'n'){
            contNot++;
            if (elevador == 'A' || elevador == 'a'){
                contElevAnot++;
            }else if(elevador == 'B' || elevador == 'b'){
                contElevBnot++;
            }else if(elevador == 'C' || elevador == 'c'){
                contElevCnot++;
            }            
        }
    }
    printf("%i, %i, %i", contMat, contVesp, contNot);
    printf("%i, %i, %i", contElevAmat, contElevBmat, contElevCmat);

    if(contMat > contVesp && contMat > contNot){
        if (contElevAmat > contElevBmat && contElevAmat > contElevCmat){
            printf("O periodo mais utilizado: Matutino com o elevador A");
        }else if(contElevBmat > contElevAmat && contElevBmat > contElevCmat){
            printf("O periodo mais utilizado: Matutino com o elevador B");
        }else if (contElevCmat > contElevAmat && contElevCmat > contElevBmat){
            printf("O periodo mais utilizado: Matutino com o elevador C");
        }else{
            printf("O periodo mais utilizado foi o matuitino com empate entre elevadores");
        }    
    }else if(contVesp > contMat && contVesp > contNot){
        if (contElevAvesp > contElevBvesp && contElevAvesp > contElevCvesp){
            printf("O periodo mais utilizado: Vespertino com o elevador A");
        }else if(contElevBvesp > contElevAvesp && contElevBvesp > contElevCvesp){
            printf("O periodo mais utilizado: Vespertino com o elevador B");
        }else if (contElevCvesp > contElevAvesp && contElevCvesp > contElevBvesp){
            printf("O periodo mais utilizado: Vespertino com o elevador C");
        }else{
            printf("O periodo mais utilizado foi o vespertino com empate entre elevadores");
        }
    }else if(contNot > contMat && contNot > contVesp){
        if (contElevAnot > contElevBnot && contElevAnot > contElevCnot){
            printf("O periodo mais utilizado: Noturno com o elevador A");
        }else if(contElevBnot > contElevAnot && contElevBnot > contElevCnot){
            printf("O periodo mais utilizado: Noturno com o elevador B");
        }else if (contElevCnot > contElevAnot && contElevCnot > contElevBnot){
            printf("O periodo mais utilizado: Noturno com o elevador C");
        }else{
            printf("O periodo mais utilizado foi o noturno com empate entre elevadores");   
        }
    }
}



//   A CONTINUAR 
