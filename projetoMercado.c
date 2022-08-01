#include <stdio.h>

int main(){
    float PrecoPacoteDeArroz = 12.5;
    float PrecoPacoteDeFeijao = 8;
    float PrecoCaixaDeOvos = 6.5;
    float PrecoRefrigerante = 5.5;
    float PrecoSalgadinho = 3.5;
    float valorCompra, troco, valorRecebido;

    int QntPacoteDeArroz, QntPacoteDeFeijao, QntCaixaDeOvos, QntRefrigerante, QntSalgadinho;

    printf("\n\n====================\n");
    printf("    SUPERMERCADO\n");
    printf("====================");

    printf("\n\n====================\n");
    printf(" Pacote de arroz");
    printf("\n PRECO: %.2f\n", PrecoPacoteDeArroz);
    printf(" QUANTIDADE:");
    scanf("%d", &QntPacoteDeArroz);

    printf("====================\n");
    printf(" Pacote de feijao");
    printf("\n PRECO: %.2f\n", PrecoPacoteDeFeijao);
    printf(" QUANTIDADE:");
    scanf("%d", &QntPacoteDeFeijao);

    printf("====================\n");
    printf(" Caixa de ovos");
    printf("\n PRECO: %.2f\n", PrecoCaixaDeOvos);
    printf(" QUANTIDADE:");
    scanf("%d", &QntCaixaDeOvos);

    printf("====================\n");
    printf(" Refrigerante");
    printf("\n PRECO: %.2f\n", PrecoRefrigerante);
    printf(" QUANTIDADE:");
    scanf("%d", &QntRefrigerante);

    printf("====================\n");
    printf(" Salgadinho");
    printf("\n PRECO: %.2f\n", PrecoSalgadinho);
    printf(" QUANTIDADE:");
    scanf("%d", &QntSalgadinho);

    valorCompra = (QntPacoteDeArroz * PrecoPacoteDeArroz) + (QntPacoteDeFeijao * PrecoPacoteDeFeijao) + (QntCaixaDeOvos * PrecoCaixaDeOvos) + (QntRefrigerante * PrecoRefrigerante) + (QntSalgadinho * PrecoSalgadinho);

    printf("====================\n");
    printf(" VALOR DA SUA COMPRA: R$%.2f", valorCompra);

    printf("\n VALOR RECEBIDO: R$");
    scanf("%f", &valorRecebido);
    printf("====================\n");

    troco = (valorRecebido - valorCompra);
    printf(" TROCO: R$%.2f \n\n\n\n\n\n", troco);
}
