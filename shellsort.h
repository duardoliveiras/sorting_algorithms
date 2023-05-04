#ifndef SHELLSORT_H_INCLUDED
#define SHELLSORT_H_INCLUDED

void sllsort(int n, int *vPtr){
    int h, i, j, a;
    h=1;
    while(h<n){
        h=3*h+1;
        }
    while(h>=1){
    h=h/3;
        for(i=h; i<n; i++){
        a = vPtr[i];
        j=i-h;
            while(j>=0 && vPtr[j]>a){
                vPtr[j+h] = vPtr[j];
                j=j-h;
            }
            vPtr[j+h] = a;
        }
    }
}

#endif // SHELLSORT_H_INCLUDED
