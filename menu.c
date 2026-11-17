#include <stdio.h>

int main(void){
    int opcao;
    float nota1,nota2,media;

    do{
        printf("\n1--calcular media\n0--sair\nEscolha");
        if(scanf"%d",&opcao) !=1 return 1;
        if(opcao == 1){//funcão que calcula a media
             printf("digite a perimeira nota\n");
    if(scanf("%f", &nota1) != 1) return 1;

    printf("digite a segunda nota nota\n");
    if(scanf("%f", &nota2) != 1) return 1;

    if(nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10){

        printf("nota invalida. Use valores de 0 a 10.\n");
        return 1;
    }



    media = (nota1 + nota2 )/2;
    printf("media: %.2f\n", media);

        if(media >= 6.0){
            printf("aprovado\n");

        }
        else{
            printf("reprovado\n");
        }

        }// final da função calcula media
        else if("opção !=0){
          printf("opção invalida");

        }
    }while(opcao !=0);
    printf("até logo\n")
   














    return 0;

}