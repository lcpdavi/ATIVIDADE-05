#include <stdio.h>

int main() {
    int tempoServico = 0, bonus = 0;
    float aumentoSalario, salarioAtual, percentual, novoSalario;

    printf("Insira o salario atual: \n");
    scanf("%f", &salarioAtual);
    printf("Insira o tempo de servico: \n");
    scanf("%d", &tempoServico);

    if (salarioAtual < 500 && tempoServico < 1) {
        aumentoSalario = salarioAtual * 0.25;
    } else if (salarioAtual >= 500 && salarioAtual < 1000 && tempoServico >= 1 && tempoServico < 3) {
        aumentoSalario = salarioAtual * 0.20;
        bonus = 100;
    } else if (salarioAtual > 1000 && salarioAtual < 1500 && tempoServico >= 4 && tempoServico < 6) {
        aumentoSalario = salarioAtual * 0.15;
        bonus = 200; 
    } else if (salarioAtual > 1500 && salarioAtual < 2000 && tempoServico >= 7 && tempoServico < 10) {
        aumentoSalario = salarioAtual * 0.10;
        bonus = 300;
    } else if (salarioAtual > 2000 && tempoServico >= 10){
        bonus = 500; 
    }
    //aumentoSalario = aumentoSalario + salarioAtual ;
    //aumentoSalario += salarioAtual ;

    
    novoSalario = salarioAtual + aumentoSalario + bonus;

    printf("O reajuste foi de %.2f\n", aumentoSalario);
    printf("O novo salario e %.2f\n", novoSalario);
}