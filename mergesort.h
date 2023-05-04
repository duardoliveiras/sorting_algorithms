#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED





void mgsort(int *vPtr, int in, int fi){
        int m;
        if(in<fi){

        m = floor((in+fi)/2);
        mgsort(vPtr,in,m);
        mgsort(vPtr,m+1,fi);
        merg(vPtr,in,m,fi);


        }

        }


void merg(int *vPtr, int in, int m, int fi){
        int *v, x, y, tam, i, j, k;
        int fi1 = 0, fi2 = 0;

        tam = fi-in+1;

        x = in;
        y = m+1;

        v = (int *) malloc(tam*sizeof(int));

if(v != NULL){
        for(i=0; i<tam; i++){

            if(!fi1 && !fi2){

                    if(vPtr[x] < vPtr[y]){
                        v[i]= vPtr[x++];
                        }else{
                            v[i]= vPtr[y++];
                        }
                            if(x>m)
                            fi1=1;
                                    if(y>fi)
                                    fi2=1;

            }

            else{
                    if(!fi1){
                    v[i]=vPtr[x++];
                    }   else{
                        v[i]=vPtr[y++];
                        }
            }
        }



                for(j=0,k=in;j<tam;j++,k++){
                vPtr[k] = v[j];
                }
}

   free(v);
}

#endif // MERGESORT_H_INCLUDED
