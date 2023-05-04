#ifndef COUNTINGSORT_H_INCLUDED
#define COUNTINGSORT_H_INCLUDED

void countsort(int *vPtr, int n, int ordem){

    int i, j, k;
    int maxi;

    if(ordem == 2 || ordem == 3){
    maxi = n;
    }else if(ordem == 1){
    maxi = 10;
    }
    int contagem[maxi];

        for(i=0; i<maxi; i++){
            contagem[i]=0;
        }for(i=0; i<n; i++){
            contagem[vPtr[i]]++;
        }for(i=0, j=0; j<maxi; j++){
            for(k=contagem[j];k>0;k--){
                vPtr[i++] = j;
            }
        }

}








#endif // COUNTINGSORT_H_INCLUDED
