#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED



void bbsort(int n, int *vPtr){
        int i, j, a;

        for(i=1; i<n; i++){
        for(j=0; j<n-i; j++){
            if(vPtr[j]>vPtr[j+1]){
                a = vPtr[j+1];
                vPtr[j+1]=vPtr[j];
                vPtr[j] = a;




            }
        }
    }
}











#endif // BUBBLESORT_H_INCLUDED
