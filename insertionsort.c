#include <stdlib.h>
#include <stdio.h>
#define TAM 10


void imprimeVetor(int vetor[]){
    int i;
    printf("\n");
    for(i = 0; i < TAM; i++){
        printf("|%d|", vetor[i]);
    }
}

void insertion_sort(int vetor[TAM]){

    int i, j, atual;

    for(i = 1; i < TAM; i++){

        //Elemento atual em an�lise
        atual = vetor[i];

        //Elemento anterior ao analisado
        j = i - 1;

        //Analisando membros anteriores
        while( (j >=0) && (atual < vetor[j])){

            //Posiciona os elmeentos uma posi��o para frente
            vetor[j + 1] = vetor[j];

            //Faz o j andar para tr�s
            j = j - 1;

        }

        //Agora que o espa�o foi aberto, colocamos o atual (Menor n�mero) na posi��o correta
        vetor[j + 1] = atual;

        //Mostra a lista atualizada
        imprimeVetor(vetor);

    }

}

int main(){

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    insertion_sort(vetor);

    imprimeVetor(vetor);

    return 0;
}
