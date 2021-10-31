#include <stdio.h>
#include <stdlib.h>


void quickSort(int *vetor, int inicio, int fim);
int particiona(int *vetor, int inicio, int end);

int main(){
    int vetor[7]={23,4,67,-8,90,54,21};

    int i;
    printf("\n\n\tValores do vetor desordenado:");
    for(i = 0; i<7; i++){
        printf("  [%d]", vetor[i]);
    }

    int inicio, fim;

    printf("\n\n\tVetor ordenado por QuickSort: ");
    //Chamada da funcao para ordenar o vetor.
    quickSort(vetor, 0, 6);
    for(i = 0; i<7; i++){
        printf("  [%d]", vetor[i]);
    }
    printf("\n\n\n");
}


//Função de ordenação.
void quickSort(int *vetor, int inicio, int fim){
    int pivo;
    if(fim > inicio){
        pivo = particiona(vetor, inicio, fim); //separa os dados em duas partições.
        quickSort(vetor, inicio, pivo-1); //chama a função para as duas metades
        quickSort(vetor, pivo+1, fim);    //por RECURSÃO.
    }
}


//Função Particiona.
int particiona(int *vetor, int inicio, int end){
    int esq, dir, pivo, aux;

    esq = inicio;
    dir = end;
    pivo = vetor[inicio]; //o pivo recebe o valor do início do vetor.

    while(esq < dir){
        while(vetor[esq] <= pivo){//enquanto o elemento for menor ou igual ao pivo
            esq++; //avança posição da esquerda.
        }
        while(vetor[dir] > pivo){//enquanto o elemento for maior ou igual ao pivo
            dir--; //recua posição da direita.
        }
        if(esq < dir){ // troca esq e dir.
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;
        }
    }
    vetor[inicio] = vetor[dir];
    vetor[dir] = pivo;
    return dir;
}
