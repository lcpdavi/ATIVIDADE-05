#include<stdio.h>

int main(){
    //Faça um algoritmo que calcule a media ponderada das notas de 3 provas.
    //A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a 
    //média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação 
    //deve ser igual ou  superior a 7.0 pontos. 

    float Media, nota1 = 8, nota2 = 6, nota3 = 9;

   Media = (nota1 + nota2 + nota3 * 2) / 4;

   if(Media >= 7){
     printf("Nota: %.2f. Aprovado", Media);
    }else{
     printf("Nota: %.2f. Aprovado", Media);
    }


    
}
    
