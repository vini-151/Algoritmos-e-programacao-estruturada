#include <stdio.h>
#include <string.h>

void mostraMes (int num){
    int dias;
    char nomeMes[15];
    switch (num){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        dias = 31;
        if (num == 1){
            strcpy(nomeMes, "Janeiro");
        }else if (num == 3){
            strcpy(nomeMes, "Marco");
        }else if (num == 5){
            strcpy(nomeMes, "Maio");
        }else if (num == 7){
            strcpy(nomeMes, "Julho");
        }
        break;
    
    default:
        break;
    }
}