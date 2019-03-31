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
            if(vet[count] >= vet[count2]){//{10,9,8,7,1,5,4,3,2,1}
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

int main(){


    //letra A
    int l1[10] = {1,2,3,4,5,7,7,8,9,10};
    isSortCres(l1,10);

    //letra B
    int l2[10] = {};
    coppyList(l1, l2, 10);
    for(int i =0; i < 10; i++){
        cout << l2[i] <<endl;
    }

    return 0;
}