/*
Atlantis
Autor: Pedro Vidal
Você é um explorador que descobriu a cidade de Atlantis pouco antes dela afundar e conseguiu presenciar e fotografar os últimos momentos da
cidade do seu helicóptero. Utilizando essa foto, você conseguiu determinar a altura de cada parte da cidade em metros no momento 0, ou seja, 
antes da água inundar a cidade. A cada hora, a água subia 1 metro. Você deseja saber um pouco mais sobre os últimos momentos dessa grande 
civilização e por isso deseja saber quantas partes da cidade foram inundadas dado a foto original, e quantas horas se passaram desde o momento 0.

Entrada
A primeira linha da entrada contêm dois inteiros, ‘N’ e ‘M’ (1 <= N,M <= 300), que representam a largura e o comprimento da foto original. Cada
uma das próximas ‘N’ linhas contêm ‘M’ inteiros ‘A’ (1 <= A <= 1000), que representam a altura de cada parte da cidade no momento 0. A próxima linha
contêm um inteiro ‘Q’ (1 <= Q <= 10000), o número de consultas que você irá fazer. A linha seguinte contêm ‘Q’ inteiros ‘H’ (1 <= H <= 1000), que
representam o número de horas que se passaram desde o instante 0, para cada uma das ‘Q’ consultas.

Saída
Para cada consulta você deve imprimir um número inteiro, que é o número de partes da cidade que já foram inundadas. Ou seja, basta verificar
na foto (mapa – matriz) o número de partes da cidade que são menores ou iguais ao tempo ‘H’ dado para uma certa consulta ‘Q’, já que a cada hora o
nível do mar se eleva em 1 metro.
*/

#include <iostream>
using namespace std;

int main() {
int N, M, Q, q; cin>>N>>M;
int m[N*M];
for(int i=0; i<(N*M); i++)cin>>m[i];
for(int i=0; i<(N*M)-1; i++){
  int menor=i;
  for(int j=i+1; j<(N*M); j++){
    if(m[j]<m[menor])menor=j;
  }
  int aux=m[i];
    m[i]=m[menor];
    m[menor]=aux;
}

cin>>Q;
for(int i=0; i<Q; i++){
  cin>>q;
  int li=0, ls=(N*M)-1, meio;
  while(li<=ls){
    meio=(li+ls)/2; 
    if(q<m[meio])ls=meio-1;
    else if(q>m[meio])li=meio+1;
    else break;
  }
  if(q==m[meio] && q!=m[meio+1]){
   cout<<meio+1<<endl;
  }
  else if(q==m[meio] && q==m[meio+1]){
    while (q==m[meio+1]){
      meio++;
    }
    cout<<meio+1<<endl;
  }
  else{
    if(m[meio]>q)cout<<meio<<endl;
    else if(m[meio]<q)cout<<meio+1<<endl;
  }

}
 
 return 0;

}
