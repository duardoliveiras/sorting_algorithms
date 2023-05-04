#ifndef HEAPSORT_H_INCLUDED
#define HEAPSORT_H_INCLUDED

void createhp(int *vPtr,int in,int fi){
    int a = vPtr[in];
    int j = in*2+1;
        while(j<=fi){
            if(j<fi){
                    if(vPtr[j] < vPtr[j+1]){
                    j = j+1;
                    }
                    }
            if(a < vPtr[j]){
                vPtr[in] = vPtr[j];
                in = j;
                j = 2*in+1;

                    }else{
                    j = fi+1;
                    }

}

vPtr[in] = a;

}




void hpsort(int *vPtr, int n){

    int i,a;
    for(i=(n-1/2); i>=0; i--){
        createhp(vPtr, i, n-1);
    }for(i=n-1; i>=1; i--){
        a = vPtr[0];
        vPtr[0] = vPtr[i];
        vPtr[i] = a;
        createhp(vPtr,0,i-1);
        }
}



















#endif // HEAPSORT_H_INCLUDED
