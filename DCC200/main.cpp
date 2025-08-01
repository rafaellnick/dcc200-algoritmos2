#include <iostream>
using namespace std;
//Ponteiros e alocdin
//ex: int(tipo do elemento apontado) *(operador de indirecao) ptr(nome do ponteiro)
//declaracao: int * ptr = &ch; - ponteiro ptr recebe o end. de memoria de ch
//o ponteiro aponta para um endereco de memoria
/*
int main(){
    int total=6;//declara uma variavel
    int * ptr;//declara um ponteiro
    ptr = &total; //atribui o end de total a ptr
    cout<< total<<endl; //Imprime o conteudo de total
    cout<<*ptr<<endl; //Imprime conteudo do end de memoria apontado por ptr
    cout<< ptr<<endl; //Imprime o conteudo de ptr(neste caso, o end de memoria)

    *ptr = *ptr+1; //altera o valor do conteudo, no caso 6+1 = 7
    cout<< total;
    return 0;
}*/

//Ponteiro de Ponteiro(ponteiros multiplos)
//o ponteiro **ptr aponta para o conteudo apontado por um *ptr
//ou seja: **ptr->*ptr2->x
/*
int main(){
    int x, *p, **q;
    x=5;
    p=&x;//aponta para o end de x
    q=&p;//aponta para o endereco de p
    cout<< **q<<endl;//imprime o conteudo de X: q aponta para p e p aponta para x(**q->*p->x)
    **q+=1;
    cout<<x<<endl;
    return 0;
}
*/

//Alocacao Dinamica
//se aloca dinamincamente com o operador new
//declaracao: int *pi(ptr compat com o tipo de dado nece)= new(operador) int(tipo de dado)
/*
int main(){
    int * pi = new int;
    *pi = 1001;
    cout<<*pi<<endl; // valor armazenado no end de memoria apontado por pi
    cout<< pi<<endl; //end de memoria apontado por pi

    double *pd = new double;
    *pd =500.35;
    cout<<*pd<<endl; //valor armazenado no end de memoria apontado  por pd
    cout<<pd<<endl<<endl; // end de memoria apontado por pd

    return 0;
}*/

//Recursividade
//sintaxe:
// void recursao(){
//         recursao();}
//
//int main(){
//      recursao();}
//Funcao vai se chamar ate que uma condicao especifica seja satisfeita
