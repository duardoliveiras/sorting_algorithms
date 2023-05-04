#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#include "bubblesort.h"
#include "selectionsort.h"
#include "insertionsort.h"
#include "shellsort.h"
#include "mergesort.h"
#include "heapsort.h"
#include "quicksort.h"
#include "countingsort.h"
#include "analisedetempo.h"




void funcaorandom(int *vPtr, int n){
        int randomIndex;
        int fullrand = 0;
        int i=0;
                    while(i<n){
                    fullrand = rand();
                    randomIndex = fullrand % 10;
                    vPtr[i] = randomIndex;
                    i++;
                    }
}

void funcaocrescente(int *vPtr, int n){
       int i = 0;

                    for(i=0;i<n;i++){
                    vPtr[i] = i;
                    }


}

void funcaodecrescente(int *vPtr, int n){
        int i=0;
        int b = n;
                    for(i=0;i<n;i++){
                    vPtr[i] = b-1;
                    b--;
                    }

}
void printvetor(int *vPtr,int n){
    int i=0;
                for(i=0; i<n; i++){
                printf("%d ",vPtr[i]);
                }
                printf("\n");
}




int main(){



    srand(time(NULL));

    int escolha=0;
    int ordem=0;
    int nPersonalizado;
    int *vPtr;
    clock_t temp;




    printf("Escolha uma forma de criacao:\n1-Aleatorio\n2-Ordem crescente\n3-Ordem decrescente\n");
    scanf("%d",&ordem);

    printf("\nDigite o tamanho de elementos:\n");
    scanf("%d",&nPersonalizado);
    vPtr = malloc(nPersonalizado*sizeof(int));

    int in = nPersonalizado-nPersonalizado;
    int fi = nPersonalizado-1;
    int me = floor((in+fi)/2);


    if(ordem == 1){ //caso medio

    funcaorandom(vPtr, nPersonalizado);
    printf("\nSeu vetor gerado e:\n");
    printvetor(vPtr,nPersonalizado);

    if(nPersonalizado >= 20000){
        printf("\nMetodos recomendados: 4,5,6,7,8. Os metodos de ordernacao simples custam muito para ordenar um vetor tao grande\n");
        }

    printf("\nEscolha um metodo de ordenação, digite o valor exibido:\n1-Bubblesort\n2-Selectionsort\n3-Insertionsort\n4-Shellsort\n5-Mergesort\n6-Heapsort\n7-Quicksort\n8-Countingsort\n");
    scanf("%d",&escolha);

        if(escolha == 1){
        temp = clock();
        bbsort(nPersonalizado, vPtr);
        temp = clock()-temp;

        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        bco = comparabubble(nPersonalizado);
        bmo = movimentabubble(ordem,nPersonalizado);
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 2){
        temp = clock();
        slsort(nPersonalizado, vPtr);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        sco = comparaselection(nPersonalizado);
        smo = movimentaselection(nPersonalizado);
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 3){
        temp = clock();
        istsort(nPersonalizado, vPtr);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        ico = comparainsertion(ordem,nPersonalizado);
        imo = movimentainsertion(ordem,nPersonalizado);
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 4){
        temp = clock();
        sllsort(nPersonalizado, vPtr);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 5){
        temp = clock();
        mgsort(vPtr,in,fi);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 6){
        temp = clock();
        hpsort(vPtr,nPersonalizado);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 7){
        temp = clock();
        qcksort(vPtr, in, fi);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 8){
        temp = clock();
        countsort(vPtr,nPersonalizado,ordem);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else return 1;


    }else if(ordem == 2){
    funcaocrescente(vPtr, nPersonalizado);
    printf("\nSeu vetor gerado e:\n");
    printvetor(vPtr,nPersonalizado);

    if(nPersonalizado >= 20000){
        printf("\nMetodos recomendados: 4,5,6,7. Os metodos de ordernacao simples custam muito para ordenar um vetor tao grande\n");
        }

    printf("\nEscolha um metodo de ordenação, digite o valor exibido:\n1-Bubblesort\n2-Selectionsort\n3-Insertionsort\n4-Shellsort\n5-Mergesort\n6-Heapsort\n7-Quicksort\n8-Countingsort\n");
    scanf("%d",&escolha);

        if(escolha == 1){
        temp = clock();
        bbsort(nPersonalizado, vPtr);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        bco = comparabubble(nPersonalizado);
        bmo = movimentabubble(ordem,nPersonalizado);
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 2){
        temp = clock();
        slsort(nPersonalizado, vPtr);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        sco = comparaselection(nPersonalizado);
        smo = movimentaselection(nPersonalizado);
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 3){
        temp = clock();
        istsort(nPersonalizado, vPtr);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        ico = comparainsertion(ordem,nPersonalizado);
        imo = movimentainsertion(ordem,nPersonalizado);
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 4){
        temp = clock();
        sllsort(nPersonalizado, vPtr);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 5){
        temp = clock();
        mgsort(vPtr,in,fi);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 6){
        temp = clock();
        hpsort(vPtr,nPersonalizado);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 7){
        temp = clock();
        qcksort(vPtr, in, fi);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 8){
        temp = clock();
        countsort(vPtr,nPersonalizado,ordem);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else return 1;


    }else if(ordem == 3){
    funcaodecrescente(vPtr, nPersonalizado);
    printf("\nSeu vetor gerado e:\n");
    printvetor(vPtr,nPersonalizado);

    if(nPersonalizado >= 20000){
        printf("\nMetodos recomendados: 4,5,6,7. Os metodos de ordernacao simples custam muito para ordenar um vetor tao grande\n");
        }

    printf("\nEscolha um metodo de ordenação, digite o valor exibido:\n1-Bubblesort\n2-Selectionsort\n3-Insertionsort\n4-Shellsort\n5-Mergesort\n6-Heapsort\n7-Quicksort\n8-Countingsort\n");
    scanf("%d",&escolha);

        if(escolha == 1){
        temp = clock();
        bbsort(nPersonalizado, vPtr);
        temp = clock()-temp;

        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        bco = comparabubble(nPersonalizado);
        bmo = movimentabubble(ordem,nPersonalizado);
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 2){
        temp = clock();
        slsort(nPersonalizado, vPtr);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        sco = comparaselection(nPersonalizado);
        smo = movimentaselection(nPersonalizado);
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 3){
        temp = clock();
        istsort(nPersonalizado, vPtr);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        ico = comparainsertion(ordem,nPersonalizado);
        imo = movimentainsertion(ordem,nPersonalizado);
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 4){
        temp = clock();
        sllsort(nPersonalizado, vPtr);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 5){
        temp = clock();
        mgsort(vPtr,in,fi);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 6){
        temp = clock();
        hpsort(vPtr,nPersonalizado);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 7){
        temp = clock();
        qcksort(vPtr, in, fi);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else if(escolha == 8){
        temp = clock();
        countsort(vPtr,nPersonalizado,ordem);
        temp = clock()-temp;
        printf("\n\nSeu vetor ordenado e:\n");
        printvetor(vPtr,nPersonalizado);
        printf("\n");
        printf("\nO tempo do algoritmo foi de: %f \n", ((float)temp*1000)/CLOCKS_PER_SEC);
        return 0;
        }else return 1;


    }else return 1;








free(vPtr);



return 0;

}
