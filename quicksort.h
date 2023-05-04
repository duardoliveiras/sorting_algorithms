#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

void qcksort(int *vPtr, int in, int fi){
    int i,j,x,y;
    i = in;
    j = fi;
    x = vPtr[(in+fi)/2];
        while(i <= j){
            while(vPtr[i] < x && i < fi)
                i++;
            while(vPtr[j] > x && j > in)
                j--;
            if(i <= j){
            y=vPtr[i];
            vPtr[i]=vPtr[j];
            vPtr[j]=y;
            i++; j--;
            }
        }
        if(j > in)
            qcksort(vPtr, in, j);
        if(i < fi)
            qcksort(vPtr, i ,fi);

}

#endif // QUICKSORT_H_INCLUDED
