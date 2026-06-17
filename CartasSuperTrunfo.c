#include <stdio.h>

int main() {
    int carta1, carta2;
    char estado1, estado2;
    char Codigo1[4], Codigo2[4];
    char Nome1[20], Nome2[20];
    
    int Populacao1, Populacao2;
    int NPT1, NPT2;

    float Area1, Area2;
    float PIB1, PIB2;

     printf("Estado da primeira carta: ");
    scanf(" %c", &estado1);
    printf("Codigo da carta: ");
    scanf("%s", Codigo1 );
    printf("Nome da cidade: ");
    scanf("%s", Nome1);
    printf("População: ");
    scanf("%d", &Populacao1);
    printf("Área: ");
    scanf("%f", &Area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &NPT1);



    printf("Estado da segunda carta: ");
    scanf(" %c", &estado2);
    printf("Código da carta: ");
    scanf("%s", Codigo2);
    printf("Nome da cidade: ");
    scanf("%s", Nome2);
    printf("População: ");
    scanf("%d", &Populacao2);
    printf("Área: ");
    scanf("%f", &Area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &NPT2);

    printf(
        "carta 1:\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome: %s\n"
        "População: %d\n"
        "Área: %.2f\n"
        "PIB: %.2f\n"
        "Número de pontos turisticos: %d\n",
        estado1, Codigo1, Nome1, Populacao1, Area1, PIB1, NPT1 );

    printf(
        "carta 2:\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome: %s\n"
        "População: %d\n"
        "Área: %.2f\n"
        "PIB: %.2f\n"
        "Número de pontos turisticos: %d\n",
        estado2, Codigo2, Nome2, Populacao2, Area2, PIB2, NPT2 );

    return 0;
}
