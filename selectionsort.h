#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED



void slsort(int n, int *vPtr){
    int i, j, a, m;
        for(i=0;i<n-1;i++){
        m = i;
        for(j=i+1;j<n;j++){
            if(vPtr[j]< vPtr[m]){
            m = j;
            }

        } a = vPtr[m];
          vPtr[m] = vPtr[i];
          vPtr[i] = a;









        }
    }

#endif // SELECTIONSORT_H_INCLUDED
