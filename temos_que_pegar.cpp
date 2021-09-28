/*
Temos que pegar!
Autor: Elivelton Rangel
Ash Ketchum é um jovem treinador que está iniciando sua jornada na região de Kanto, e sonha em se tornar um verdadeiro mestre pokemon, descobrindo
o máximo de novos monstrinhos para registrar na sua pokedex. Ash precisa melhorar o sistema de sua pokedex, incluindo opções de classificar os 
pokemons vistos por nível ou nome, facilitando a busca por mais informações, quando necessário.Cada pokemon possui um nome e um nível de força
único inicial que determina o seu poder de batalha contra outros rivais. Ajude Ash construindo um programa que classifique os pokemon por nível de
força ou pelo nome, podendo ambas as classificações serem exibidas em ordem crescente ou decrescente. Ash só pode registrar um único pokemon de
determinado tipo, não havendo, portanto, repetições de tipo e de poder.

Entrada
A primeira linha consiste de três informações, sendo a primeira um inteiro ‘Q’ (1 <= Q <= 151), representando a quantidade de pokemon que o programa
irá classificar. A segunda informação é um caractere que define a forma de classificação dos pokemon, sendo ‘N’ para nome e ‘L’ para nível. E a
terceira informação é um caractere que indica a ordem de classificação, sendo ‘C’ para crescente e ‘D’ para decrescente. Cada uma das próximas ‘Q’
linhas informam o nome de um pokemon com seu respectivo nível de força.

Saída
Devem ser impressos os pokemon de forma ordenada, conforme a configuração de entrada. Imprima o nome antes do nível, sempre.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
int Q, aux1;
char T, O; cin>>Q>>T>>O;
int n[Q];
string q[Q], aux;

for(int i=0; i<Q; i++){
  cin>>q[i]>>n[i];
}
if(T=='N'&& O=='C'){
  for(int i=0; i<Q-1; i++){
    int menor=i;
    for(int j=i+1; j<Q; j++){
      if(q[j]<q[menor]){
        menor=j;
      }
    }
    aux=q[i];
    q[i]=q[menor];
    q[menor]=aux;

    aux1=n[i];
    n[i]=n[menor];
    n[menor]=aux1;
  }
  for(int i=0; i<Q; i++){
  cout<<q[i]<<" "<<n[i]<<endl;
  }
}
else if(T=='N'&& O=='D'){
  for(int i=0; i<Q-1; i++){
    int maior=i;
    for(int j=i+1; j<Q; j++){
      if(q[j]>q[maior]){
        maior=j;
      }
    }
    aux=q[i];
    q[i]=q[maior];
    q[maior]=aux;

    aux1=n[i];
    n[i]=n[maior];
    n[maior]=aux1;
  }
  for(int i=0; i<Q; i++){
  cout<<q[i]<<" "<<n[i]<<endl;
  }
}
else if(T=='L'&& O=='C'){
  for(int i=0; i<Q-1; i++){
    int menor=i;
    for(int j=i+1; j<Q; j++){
      if(n[j]<n[menor]){
        menor=j;
      }
    }
    aux=q[i];
    q[i]=q[menor];
    q[menor]=aux;

    aux1=n[i];
    n[i]=n[menor];
    n[menor]=aux1;
  }
  for(int i=0; i<Q; i++){
  cout<<q[i]<<" "<<n[i]<<endl;
  }
}
else if(T=='L'&& O=='D'){
  for(int i=0; i<Q-1; i++){
    int maior=i;
    for(int j=i+1; j<Q; j++){
      if(n[j]>n[maior]){
        maior=j;
      }
    }
    aux=q[i];
    q[i]=q[maior];
    q[maior]=aux;

    aux1=n[i];
    n[i]=n[maior];
    n[maior]=aux1;
  }
  for(int i=0; i<Q; i++){
  cout<<q[i]<<" "<<n[i]<<endl;
  }
}
  return 0;
}
