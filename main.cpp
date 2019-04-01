#include <iostream>
using namespace std;

/**
 * Dado qualquer vetor a função é capaz de identificar se ela é ordernada de forma crescente ou descrescente
 * @param vet vetor a ser analizado
 * @param tamanho tamanho do vetor a ser analizado
 */
void isSortCres(int vet[], int tamanho){

    int count = 0;
    int count2 = 1;


    if(vet[0] > vet[2] ){//ele pode ser decrescente

        int count = tamanho -1;
        int count2 = tamanho - 2;

        for(int i=0; i < tamanho; i++){
            if(vet[count] >= vet[count2]){
                cout << " NAO ORDENADO" <<endl;
                break;
            }else{

            }
            count--;
            count2--;
        }
        cout << "ordenado... decrescente"  <<endl;
    }else{//ele é crescente
        for(int i=0; i < tamanho; i++){
            if(vet[count] <= vet[count2]){

            }else{
                cout << " NAO ORDENADO" <<endl;
                break;
            }
            count++;
            count2++;
        }
        cout << "ordenado... crescente"  <<endl;
    }


}

void imprimeLista(int vet[], int tamanho){
    for(int i=0; i < tamanho; i++){
        cout << vet[i]<<endl;
    }
}

/**
 * Função responsável por receber um vetor e copiar-lo para outro
 * @param vet1 vetor original
 * @param vet2 novo vetor
 * @param tamanho tamanho dos dois vetores
 */
void coppyList(int vet1[], int vet2[], int tamanho){

    for(int i=0; i < tamanho;i++){
        vet2[i] = vet1[i];
    }

}


/**
 * Metodo auxiliar que verificar se o 'vet' contém o 'objetivo'
 * @param objetivo
 * @param vet
 * @param tamanho
 * @return true caso contenha
 */
bool contain(int objetivo, int vet[], int tamanho){
    for(int i=0; i < tamanho; i++){
        if(vet[i] == objetivo)
            return true;
    }
    return false;
}

/**
 * função responsável por copiar um vetor no outro e eleiminar elemntos repetidos
 * @param vet1
 * @param vet2
 * @param tamanho
 * @return novo tamanho da nova lista sem os repetidos
 */
int coppyAndRemove(int vet1[], int vet2[], int tamanho){

    vet2[0] = vet1[0];
    int aux = 0;

    for(int i=1; i < tamanho-1; i++){
       if(!contain(vet1[i],vet2,10)){
           vet2[aux] = vet1[i];
           aux++;
       }

    }

    return aux;

}

/**
 * Dado um vetor 'original', ele gera o 'novo' inversamente
 * @param original vetor original
 * @param novo novo vetor gerado com base no original
 * @param tamanho tamanho
 */
void inverte(int original[], int novo[], int tamanho){

    int aux  = tamanho-1;
    for (int i=0; i < 10; i++){
        novo[i] = original[aux--];
    }
}

int main(){



    cout << "Letra A" <<endl;
    int l1[10] = {1,2,3,4,5,7,7,8,9,10};
    isSortCres(l1,10);


    cout << "Letra B" <<endl;
    int l2[10] = {};
    coppyList(l1, l2, 10);
    for(int i =0; i < 10; i++){
        cout << l2[i] <<endl;
    }


    cout << "Letra C" <<endl;
    int lista[10] = {8,2,3,4,5,8,8,8,9,10};
    int lista2[10] = {};
    int novoTamanho =  coppyAndRemove(lista, lista2,10);

    for(int i =0; i < novoTamanho; i++){
        cout << lista2[i] <<endl;
    }

    cout << "Letra D" <<endl;
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int vetor2[10] = {};
    inverte(vetor, vetor2, 10);
    imprimeLista(vetor2, 10);

    return 0;
}