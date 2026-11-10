#include <stdio.h>

int main(void){
    float nota1,nota2,nota3,media;

    printf("digite a perimeira nota\n");
    scanf("%f", &nota1);

    printf("digite a segunda nota nota\n");
    scanf("%f", &nota2);

    printf("digite a terceira nota nota\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;
    printf("media: %.2f\n", media);

    return 0;

}