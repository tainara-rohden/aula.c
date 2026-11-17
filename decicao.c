#include <stdio.h>

int main(void){
    float nota1,nota2,nota3,media;

    printf("digite a perimeira nota\n");
    if(scanf("%f", &nota1) != 1) return 1;

    printf("digite a segunda nota nota\n");
    if(scanf("%f", &nota2) != 1) return 1;

    media = (nota1 + nota2 )/2;
    printf("media: %.2f\n", media);

        if(media >= 6.0){
            printf("aprovado\n");

        }
        else{
            printf("reprovado\n");
        }














    return 0;

}