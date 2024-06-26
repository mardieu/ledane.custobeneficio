#include <stdio.h>
#include <math.h>

double produto1();
double produto2();
double comparativo();

int main(){

    // em fase inicial de teste
    
    printf("\n -- Calculador Custo Benefício -- \n");
    printf("Criado especialmente para os produtos Le'Dane.\n");

    int escolha;
    
    printf("\nGostaria de (escolha o número):\n");
    printf("1 - Calcular um produto.\n");
    printf("2 - Comparar 2 produtos (cálculo + comparação).\n");
    printf("R: ");
    scanf("%i", &escolha);

    int potes;
    int ml;
    double preco;

    switch (escolha)
    {

    case 1:
        printf("\nQuantos potes?\n");
        printf("R: ");
        scanf("%i", &potes);

        printf("\nQuantos ml (por unidade?)\n");
        printf("R: ");
        scanf("%i", &ml);

        printf("\nQual o preço?\n");
        printf("R: ");
        scanf("%lf", &preco);

        printf("\n");

        int total_ml;
        total_ml = potes * ml;

        printf("\n\e[1mTotal em mililitros: %i.\e[m\n", total_ml);

        double custo_beneficio;
        custo_beneficio = preco / total_ml;

        if (custo_beneficio < 1)
        {
            printf("\nCusto benefício: R$%.2lf/ml.\n", custo_beneficio);
            printf("Ou seja, %.2lf centavos por cada ml.\n\n", custo_beneficio);
        }else{
            printf("\nCusto benefício: R$%.2lf/ml.\n", custo_beneficio);
            printf("Ou seja, %.2lf reais por cada ml.\n\n.", custo_beneficio);
        }
        break;

    case 2:
        comparativo();
        break;
    default:
        printf("\nEscolha um dos números!\n");
        break;
    }

    return 0;
}

double produto1(){
    printf("\n - Primeiro adicione o produto 1! -\n");
    int potes1;
    int ml1;
    double preco1;

    printf("\nQuantos potes?\n");
    printf("R: ");
    scanf("%i", &potes1);

    printf("\nQuantos ml (por unidade?)\n");
    printf("R: ");
    scanf("%i", &ml1);

    printf("\nQual o preço?\n");
    printf("R: ");
    scanf("%lf", &preco1);

    printf("\n");

    int total_ml1;
    total_ml1 = potes1 * ml1;

    printf("\e[1mTotal em mililitros: %i.\e[m\n", total_ml1);

    double custo_beneficio1;
    custo_beneficio1 = preco1 / total_ml1;

    return custo_beneficio1;
}

double produto2(){
    printf("\n - Agora adicione produto 2! - \n");
    int potes2;
    int ml2;
    double preco2;

    printf("\nQuantos potes?\n");
    printf("R: ");
    scanf("%i", &potes2);

    printf("\nQuantos ml (por unidade?)\n");
    printf("R: ");
    scanf("%i", &ml2);

    printf("\nQual o preço?\n");
    printf("R: ");
    scanf("%lf", &preco2);

    printf("\n");

    int total_ml2;
    total_ml2 = potes2 * ml2;

    printf("\e[1mTotal em mililitros: %i.\e[m\n", total_ml2);

    double custo_beneficio2;
    custo_beneficio2 = preco2 / total_ml2;

    return custo_beneficio2;
}

double comparativo(){

    double custo_beneficio1 = produto1();
    double custo_beneficio2 = produto2();

    printf("Custo benefício do produto 1: R$%.2lf/ml\n", custo_beneficio1);
    printf("Custo benefício do produto 2: R$%.2lf/ml\n", custo_beneficio2);

    // quanto menor, melhor!

    if (custo_beneficio1 > custo_beneficio2)
    {
        printf("\nO PRODUTO 2 é melhor. Produto 2 > 1.\n\n");
    }else if (custo_beneficio1 == custo_beneficio2)
    {
        printf("\nOs dois produtos tem o mesmo custo-benefício.\n\n");
    }else
    {
        printf("\nO PRODUTO 1 é melhor. 1 > 2.\n\n");
    }
    
    
}
