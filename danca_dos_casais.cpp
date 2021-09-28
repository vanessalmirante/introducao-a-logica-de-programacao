/*
Dança dos casais
Dançar é um exercício prazeroso e tem uma conexão social muito grande. Tanto é assim que numa escola de dança os professores revolveram fazer uma 
festa e decidiram organizar os casais de uma forma diferente. Cada casal seria formado da seguinte maneira: pega-se o homem mais velho e a mulher 
mais nova para formar o primeiro par, depois pega-se o segundo mais velho com a segunda mais jovem, e assim sucessivamente até todos os pares estarem
formados. Saiba que pra festa ser um sucesso o número de homens e mulheres é igual.

Entrada
A entrada é composta por um inteiro, não nulo, ‘P’ (1 <= P <= 1000), representando a quantidade de homens e, consequentemente, também representando
o número de mulheres que participarão da festa. Na próxima linha serão dados ‘P’ inteiros ‘I’ (18 <= I <= 100) que representam as idades dos participantes
homens. Na próxima linha serão dados ‘P’ inteiros ‘I’ (18 <= I <= 100) que representam as idades das participantes mulheres.

Saída
Você deverá imprimir ‘P’ linhas. Em cada linha você deverá imprimir as idades dos casais formados, começando do primeiro casal, aquele cujo homem 
é o mais velho e a mulher é a mais jovem, terminando com o casal em que o homem é o mais novo e a mulher é a mais velha. Para cada casal imprima a
idade do homem primeiro, seguido da idade da mulher, separado por espaço.
*/

#include <iostream>
using namespace std;

int main() {
int P, aux; cin>>P;
int I_h[P], I_m[P];

for(int i=0; i<P; i++){
  cin>>I_h[i];
}
for(int i=0; i<P-1; i++){
  int maior=i;
  for(int j=i+1; j<P; j++){
    if(I_h[j]>I_h[maior]){
      maior=j;
    }
  }
  aux=I_h[i];
  I_h[i]=I_h[maior];
  I_h[maior]=aux;
}
for(int i=0; i<P; i++){
  cin>>I_m[i];
}
for(int i=0; i<P-1; i++){
  int menor=i;
  for(int j=i+1; j<P; j++){
    if(I_m[j]<I_m[menor]){
      menor=j;
    }
  }
  aux=I_m[i];
  I_m[i]=I_m[menor];
  I_m[menor]=aux;
}

for(int i=0; i<P; i++){
  cout<<I_h[i]<<" "<<I_m[i]<<endl;
}
  return 0;
}
