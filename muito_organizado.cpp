/*
Quill é muito organizado!
Autor: Iure Vieira Guimarães
No universo de Guardiões da Galáxia é possível passear por vários planetas muito rapidamente através de pontos de salto que existem nas galáxias. 
Peter Quill, não sabe exatamente por quais planetas a tripulação passou nos últimos anos, mas ele tem armazenado em um vetor quais foram estes. 
Para não demorar procurando, ele pediu que você desenvolvesse um programa que informe, de forma bastante rápida, se eles já visitaram determinado
planeta. A tripulação trata os planetas como números inteiros, pois Groot nunca consegue lembrar dos nomes.

Tarefa
Dado um vetor ordenado com os números dos planetas que já foram visitados, você deve informar a posição do planeta no vetor de Quill. Isso confirmará 
que o planeta já foi visitado e ainda provará para Gamora que Quill é organizado.

Entrada
Será dado um inteiro ‘N’ (1 <= ’N’ <= 50000), que representa a quantidade de planetas que já foram visitados pela tripulação. Na próxima linha serão 
dados os códigos dos planetas visitados. Na linha seguinte serão informados vários inteiros ‘P’ (1 <= ‘P’ <= 50000) que representam os números dos
planetas que precisam ser verificados. Caso o número seja 0, você deverá finalizar o programa.

Saída
Para cada planeta que for verificado, você deverá imprimir uma linha. Caso o planeta já tenha sido visitado, você deverá informar o índice desse 
planeta no vetor. Caso não tenha sido visitado, você deverá imprimir "Nao foi visitado ainda.", sem aspas.

*/
#include <iostream>
using namespace std;

int main() {
int N, P; cin>>N;
int n[N];
for(int i=0; i<N; i++){
  cin>>n[i];
}

for(;;){
cin>>P;
if(P==0)break;
int li=0, ls=N, meio;
  while(li<=ls){
    meio=(li+ls)/2;
    if(P<n[meio])ls=meio-1;
    else if(P>n[meio])li=meio+1;
    else break;
  }
if(P==n[meio])cout<<meio<<endl;
else cout<<"Nao foi visitado ainda."<<endl;
}
  return 0;
}
