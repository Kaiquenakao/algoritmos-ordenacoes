#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void imprimeVetor(int vetor[]){
    int i;
    printf("\n");
    for(i = 0; i < TAM; i++){
        printf("|%d|", vetor[i]);
    }
}

void selection_sort(int vetor[TAM]){

    int posicaoDoMenorValor, aux, i, j;

    for(i = 0; i < TAM; i++){

        //Recebe a posicao inicial para o menor valor#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void imprimeVetor(int vetor[]){
    int i;
    printf("\n");
    for(i = 0; i < TAM; i++){
        printf("|%d|", vetor[i]);
    }
}

void selection_sort(int vetor[TAM]){

    int posicaoDoMenorValor, aux, i, j;

    for(i = 0; i < TAM; i++){

        //Recebe a posicao inicial para o menor valor
        posicaoDoMenorValor = i;

        //Analisa os elementos na frente
        for(j = i + 1; j < TAM; j++){

            //Caso encontre um valor menor na frente dos analisados
            if(vetor[j] < vetor[posicaoDoMenorValor]){
                posicaoDoMenorValor = j;
            }

        }

        //Verifica se houve mudança e troca os valores
        if(posicaoDoMenorValor != i){
            aux = vetor[i];
            vetor[i] = vetor[posicaoDoMenorValor];
            vetor[posicaoDoMenorValor] = aux;
        }

        imprimeVetor(vetor);

    }

}

int main(){

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    selection_sort(vetor);

    imprimeVetor(vetor);

    return 0;
}

        posicaoDoMenorValor = i;

        //Analisa os elementos na frente
        for(j = i + 1; j < TAM; j++){

            //Caso encontre um valor menor na frente dos analisados
            if(vetor[j] < vetor[posicaoDoMenorValor]){
                posicaoDoMenorValor = j;
            }

        }

        //Verifica se houve mudança e troca os valores
        if(posicaoDoMenorValor != i){
            aux = vetor[i];
            vetor[i] = vetor[posicaoDoMenorValor];
            vetor[posicaoDoMenorValor] = aux;
        }

        imprimeVetor(vetor);

    }

}

int main(){

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    selection_sort(vetor);

    imprimeVetor(vetor);

    return 0;
}
