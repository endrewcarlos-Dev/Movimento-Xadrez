#include <stdio.h>

     int main (){
        
        int movimento = 0, torre = 0, rainha = 0, bispo = 0;

        printf("\nMovimento do Bispo\n");
        while (bispo < 5){  
            printf("Cima, direita\n");
            bispo++;
        }
        
        printf("\nMovimento do Rainha\n");
        do{
           printf("Esquerda\n");
           rainha++;
        } while (rainha < 8);
        
        printf("\nMovimento do torre\n");
        for (torre = 0; torre < 5; torre++)
        {
            printf("Direita\n");
        }

        printf("\nMovimento do Cavalo\n");
        while (movimento < 2)
        {
            for (int cavalo = 0; cavalo < 1; cavalo++)
            {
                printf("Baixo\n");
            } 
            
            movimento++;
        }
        
        for (movimento = 0; movimento < 1; movimento++)
        {
            printf("Esquerda\n");
        }
        
        
        
        return 0;
     }