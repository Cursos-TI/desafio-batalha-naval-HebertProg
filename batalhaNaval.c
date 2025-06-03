#include<stdio.h>

#define LINHAS 10// Função para definir a quantidade de linhas
#define COLUNAS 10//Função para definir a quantidade de colunas

int main(){
    char Letra_coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};//Array de caracteres para localização do tabuleiro
    int Tabuleiro[LINHAS][COLUNAS];//vetor bidimenssional "Matriz" , decarado as  funções DEFINE para facilitar na dimenssão da matriz
    


    printf("TABULEIRO DE BATALHA NAVAL\n");//print com o nome do tabuleiro 
    
    printf("   ");//espaço para ajustar o enquadramento da matriz 

    for(int j = 0; j < COLUNAS; j++) {// função for usada pra chamar o array de caracteres de A até J... 
        printf("%c ", Letra_coluna[j]);//imprenssão do array ou vetor de caracteres 

    }
    printf("\n");// contra barra n para pular  uma linha 

    for (int i = 0; i < LINHAS; i++) {// função for com a condição i<LINHAS que é = a 10 declarada na função Define.
        printf("%2d ", i+1);//print para imprimir os numeros para localização do tabuleiro  
        for (int j = 0; j < COLUNAS; j++){//for aninhado para coluna que irá  ser j< COLUNAS  que é = 10  declarado na função DEFINE 
             
            Tabuleiro[i][j] = 0;// inicialização da matriz ela será toda = 0 que será o mar como solicitado no desafio
        
    for(int j = 2; j < 5; j++) {// for para posicionamento do navio na horizontal 
        Tabuleiro[2][j] = 3;//o índice 2 que será a linha (3) irá receber o valor 3 .
        for(int i = 2; i < 5; i++) {// for para posicionamento do navio na vertical 
            Tabuleiro[i][6] = 3;// O Índice 6 que será letra (G) irá receber o valor 3
        }
    }   
        printf("%d ", Tabuleiro[i][j]);//impressão do tabuleiro 
    
    }
        printf("\n");//contra barra N para pular uma linha . 
    
}
return 0;


}