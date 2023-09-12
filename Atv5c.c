#include<stdio.h>

int main(){
    //Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. 
    //As condições para aposentadoria são: • Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;
    //Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 

    int idade = 0, tempodeServico = 0;

    printf("Insira a idade: \n");
    scanf("%d", &idade);

    printf("Insira o tempo de servico: \n");
    scanf("%d", &tempodeServico);

    if(idade >= 65 ){
        printf("Pode se aposentar! \n");

    }else if(tempodeServico >= 30){
        printf("Pode se aposentar! \n");
    
    }else if(idade >= 60 && tempodeServico >= 25){
        printf("Pode se aposenar! \n");
        
    }else if(idade <= 59 && tempodeServico <= 24){
        printf("Nao pode se aposentar! \n");
    }

    
}