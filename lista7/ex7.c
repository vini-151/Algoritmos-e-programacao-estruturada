#include <stdio.h>

int main (){
    char sexo;
    char corOlho;
    char corCabelo;
    int idade, salario;
    int contSexo = 0;
    int contCorOlho = 0;
    int contCorCabelo = 0; 
    int contIdade = 0;
    int pessoasProcuradas = 0;
    int pessoasPesquisadas = 0;
    int percent;

    do
    {
        do{
            printf("Digite o sexo (M- masculino / F- feminino):\n ");
            scanf(" %c", &sexo);
            if(sexo == 'f' || sexo == 'F'){
                contSexo++;
            }           
        }while (!(sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f'));

        pessoasPesquisadas++;
    
        do{
            printf("Insira a cor dos olhos: a (azuis), v (verdes), c (castanhos), p (pretos)");
            scanf("%c", &corOlho);
            if (corOlho == 'c' || corOlho == 'C')
            {
                contCorOlho++;
            }
            
        }while (!(corOlho == 'a' || corOlho == 'A' || corOlho == 'v' || corOlho == 'V' || corOlho == 'c' || corOlho == 'C' || corOlho == 'p' || corOlho == 'P'));
        do{
            printf("Insira a cor dos cabelos: l (loiro), c (castanho), p (preto), r (ruivo)");
            scanf("%c", &corCabelo);
            if (corCabelo == 'c' || corCabelo == 'C')
            {
                contCorCabelo++;
            }
            
        }while (!(corCabelo == 'l' || corCabelo == 'L' || corCabelo == 'c' || corCabelo == 'C' || corCabelo == 'p' || corCabelo == 'P' || corCabelo == 'r' || corCabelo == 'R'));

        do{
            printf("Insira o salario:\n");
            scanf("%i", &salario);
        }while (salario <= 0);
    
        do{
            printf("Insira a idade (entre 10 e 100 anos). Para indicar finalizacao de pesquisa, digite -1\n");
            scanf("%i", &idade);
            if (idade >= 18 && idade <=35){
                contIdade++;
            }
        }while ((idade < 10 || idade > 100) && idade != -1);
        if (contSexo == 1 && contCorOlho ==1 && contCorCabelo == 1 && contIdade == 1){
            pessoasProcuradas++;
        }else{
        }
        /*resetando contadores*/
        contSexo--;
        contCorOlho--;
        contCorCabelo--;
        contIdade--;
    }while (!(idade == -1));
    /*Como precisamos criar uma pessoa fictícia para finalizar a pesquisa, devemos fazer uma subtração dela*/
    pessoasPesquisadas--;

    percent = (pessoasProcuradas * 100) / pessoasPesquisadas;

    printf("Pessoas pesquisadas: %i\n", pessoasPesquisadas);
    printf("Pessoas procuradas: %i\n", pessoasProcuradas);    
    printf("Percentual %i por cento\n", percent);
}