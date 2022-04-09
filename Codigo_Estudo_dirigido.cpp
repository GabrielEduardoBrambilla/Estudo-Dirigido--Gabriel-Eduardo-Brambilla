#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>

using namespace std;

std :: vector<int> lista;
int soma = 0,contador = 0;
int media;
void opcoes();
void somatoria();
void mediatoria();

void opcoes(){
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite 1 para; Imprimir o somatório dos elementos de sua lista "<<endl;
    cout << "Digite 2 para; Imprimir a média de sua lista " <<endl;
    cout << "Digite 3 para; Imprimir a média e o somatório " <<endl;
    cout << "Digite 4 para; Substituir por zero todos os valores negativos e imprimir a média da lista" <<endl;
    cout << "Digite 5 para; Substituir por zero todos os valores repetidos e imprimir a média e o somatório da lista" <<endl;
    cout << "Digite 6 para; Ordenar a lista em ordem crescente" <<endl;
    cout << "Digite 0 para; Sair do aplicativo" <<endl;
    cout << "***************Digite o numero desejado e presione enter*******************"<<endl;
}
void somatoria(){
    soma = 0,contador = 0;
    for(contador=0; contador != lista.size(); contador++){
    soma = soma  + lista[contador];
 }
}
void mediatoria(){
 void somatoria();
    media= soma/contador;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int metodo, i;
    string c;

    cout << "********************Insira quantos numeros desejar em sua lista*********************"<<endl;
        cout << "***************************Digite 0 quando desejar parar****************************"<<endl;
            cout << "*********************O numero zero nao fara parte de sua lista**********************"<<endl;

        do{
            cout << "Digite um numero para sua lista; ";
            cin >> i;
            lista.push_back(i);
        }while(i != 0 );

 lista.pop_back();
 system("cls");

    do {
        opcoes();
        cin >> metodo;

        switch(metodo){
                case 1:
                {   somatoria();
                    cout <<"O somatorio e; "<<soma<<endl;
                }
                break;

                case 2:
                {mediatoria();
                    cout << "A média de sua lista é; "<<media<<endl;
                }
                break;

                case 3:
                {
                  mediatoria();
                  somatoria();
                    cout << "A média de sua lista é; "<<media<<endl;
                    cout << "***********&&***********"<<endl;
                    cout << "A soma de sua lista e; "<<soma<<endl;
                }
                break;

                case 4:
                {
                    for(int i= 0; i != lista.size(); i++){
                        if(lista[i] < 0){
                            lista[i] = 0;
                        }
                        mediatoria();
                        cout << "A média de sua lista positiva é; "<<media<<endl;
                   }
                }
                break;

                case 5:
                {
                    sort(lista.begin(), lista.end());
                    for(int i= 0; i != lista.size(); i++){
                        if(lista[i] == lista[i+1]){
                            lista[i]= 0;
                       }
                    }
                    mediatoria();
                    somatoria();
                        cout << "A média de sua lista positiva é; "<<media<<endl;
                        cout <<"O somatorio e; "<<soma<<endl;
                }
                break;
                case 6:
                {
                    cout<<"******************SUA LISTA ORDENADA EM ORDEM CRESCENTE********************"<<endl;
                    std::sort(lista.begin(), lista.end());
                    for(int i = 0; i != lista.size(); i++){
                        cout <<"                          " << lista[i]<<endl;
                    }
                }
                break;

        }

        cout << "**********Pressione qualquer numero diferente de 0 para continuar**********"<<endl;
        cout << "*******************************Ou 0 para parar*****************************"<<endl;
        cin >> metodo;

        system("cls");

     }while( metodo != 0);

    return 0;
}
