#ifndef ANALISEDETEMPO_H_INCLUDED
#define ANALISEDETEMPO_H_INCLUDED

int bco,bmo;
int sco,smo;
int ico,imo;

    int comparabubble(int n){
    bco = (n*n-n)/2;
    printf("\n Comparacao: %d - ",bco);
    return bco;
    }
    int movimentabubble(int ordem, int n){
    if(ordem == 1){//caso medio
    bmo = ((n*n-n)/4)*3;
    printf(" Movimentacao: %d\n",bmo);
    return bmo;
    }else if(ordem == 2){//melhor caso
    bmo = 0;
    printf(" Movimentacao: %d\n",bmo);
    return bmo;
    }else if(ordem == 3){//pior caso
    bmo = 3*(n*n-n)/2;
    printf(" Movimentacao: %d\n",bmo);
    return bmo;
    }
    }


    int comparaselection(int n){
    sco = (n*n-n)/2;
    printf("\n Comparacao: %d - ",sco);
    return sco;
    }
    int movimentaselection(int n){
    smo = 3*(n-1);
    printf(" Movimentacao: %d\n",smo);
    return smo;
    }

    int comparainsertion(int ordem,int n){
    if(ordem == 1){
    ico = (((n*n)/4)+((n)/4)-1/2);
    printf("\n Comparacao: %d - ",ico);
    return ico;
    }else if(ordem == 2){
    ico = n-1;
    printf("\n Comparacao: %d - ",ico);
    return ico;
    }else if(ordem == 3){
    ico = (((n*n)/2)-(n/2));
    printf("\n Comparacao: %d - ",ico);
    return ico;
    }
    }
    int movimentainsertion(int ordem,int n){
    if(ordem == 1){
    imo = (((n*n)+n-2)/2);
    printf(" Movimentacao: %d\n",imo);
    return imo;
    }else if(ordem == 2){
    imo = 2*n-2;
    printf(" Movimentacao: %d\n",imo);
    return imo;
    }else if(ordem == 3){
    imo = (((n*n)+(3*n)-4)/2);
    printf(" Movimentacao: %d\n",imo);
    return imo;
    }
    }



#endif // ANALISEDETEMPO_H_INCLUDED
