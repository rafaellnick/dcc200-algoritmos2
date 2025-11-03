#include <iostream>
using namespace std;
/*
int fat(int n){
    if(n<=0) return 1;
    else return n*fat(n-1);
}
/*
void imprimeIntervalo(int a, int b, int inc){
    if(a>b) return;
    cout<< a << " ";
    imprimeIntervalo(a+inc, b, inc);

}
void imprimeDecrescente(int n){
    if(n==0) return;
    cout<< n<< " ";
    imprimeDecrescente(n-1);
}*/
/*
bool ehPrimoAux(int n, int i){
    if(n<=2) return(n==2);
    if(n%i == 0) return false;
    if(i*i > n) return true;
    return ehPrimoAux(n,i+1);
}
bool ehPrimo(int n){
    if(n<2) return false;
    return ehPrimoAux(n, 2);
}*/
void ponteiros(){
    /*int *pt; //1a
    cout<< &pt<<endl;; //1b
    int x; //1c
    cin>>x; //1d
    pt = &x; //1e
    *pt = *pt*10; //1f
    cout << *pt<<endl;//1g
    *pt = *pt+10;//1h
    cout<< *pt;//1i*/
    //2

}
/*
void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}*/
/*
int main(){

    //cout<<fat(5);
    //imprimeIntervalo(1,30, 3);
    //imprimeDecrescente(30);
    /* for(int i=1; i<=20; i++){
        cout<<i<<(ehPrimo(i)? " eh Primo":" nao eh Primo")<<endl;
           }
 /* int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;
    *pti1 = c;
    *pti2 = c;
    pti = v;
    for(int i=0; i<3; i++){
        v[i] = 0;
    }
    for(int i=0; i<3;i++){

        (*pti)++;
        pti++;
    }
    for(int i=0; i<3; i++){
            cout<<"vetor na posicao "<< i<<": ";
            cout<< v[i]<< " "<<endl;
    }
    *pti1 = v[0]+99;
    v[0] = (*pti1)+(*pti2);
    cout<< "a: "<<a<< ", b: "<< b <<",c: "<<c<<" "<< endl;
    cout<< v[0];
    (*pti2)++;
    cout<< "a: "<<a<< ", b: "<< b <<",c: "<<c<<" "<< endl;
    ponteiros();

 /* int x=23;
    float y=9.7;
    int *pt1;
    pt1=&x;
    float *pt2;
    pt2=&y;
    cout<<(pt1+16)<< " "<< endl;
    float *pt3;
    pt3 = pt2;
    pt3++;
    cout<< "end de pt3: "<<&pt3<< " end de pt2: "<< pt3<< endl;

    int x=10, y=20;
    troca(&x, &y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
*/


//AlocDin

float prodEscalar(int x, float *vet1[], float *vet2[]){
    float *prodEsc = new float[x];
    for(int i=0;i<x;i++){
        prodEsc[i] = (*vet1[i])*(*vet2[i]);
    }
    return *prodEsc;
}

int main(){
   /* int x;
    cin>>x;
    int *vet = new int [x];
    for(int i=0; i<x;i++){
        cin >> vet[i];
    }
    int media = 0;
    for(int i=0;i<x;i++) media+=vet[i];
    media = media/x;
    cout<< media;
    delete [] vet;*/
    int x;
    cin>>x;
    float *vet1 = new float [x];
    float *vet2 = new float [x];
    return 0;
}
