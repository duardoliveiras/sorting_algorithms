#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED

void  istsort(int n, int *vPtr){
    int i, j, a;
    for(i=1;i<n;i++){
    a = vPtr[i];
    j=i-1;
        while(j>=0 && vPtr[j]>a){
            vPtr[j+1] = vPtr[j];
            j=j-1;
        }
          vPtr[j+1]=a;
    }







}

#endif // INSERTIONSORT_H_INCLUDED
