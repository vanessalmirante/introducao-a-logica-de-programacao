/*
Blasphemous
Autor: Manollo Castro de Pinho Martinez
Blasphemous é um jogo no estilo Roguelike que vai ficando cada vez mais desafiador de acordo com seu progresso dentro do jogo. 
Você se depara com muitos chefões que irão testar sua paciência para poder passar por eles. Além disso, nesse jogo temos também 
os altares que são chamados de “Prie Dieu” e neles você recarrega a sua vida e salva o game.

Tarefa
Lucas Souza está viciado no jogo, então ele decidiu simular o dano máximo que ele leva de todos os chefes, além de verificar se os
altares de Prie Dieu são suficientes para salvá-lo. Assim, ele pediu pra você desenvolver um programa que dadas as informações 
sobre as fases do jogo, tais como altares e o dano dos chefões, determine se ele conseguiria ou não terminar o jogo.

Entrada
Na primeira linha da entrada será dado um inteiro ‘N’ (1 <= N <= 100), que indica o número de fases do jogo. Na linha seguinte serão
dados ‘N’ inteiros ‘X’ (0 <= X <= 1000) que representam cada fase do jogo, sendo que ‘X’ pode ter três valores diferentes: I) fase
com caminho livre é representada pelo valor 0 (zero); II) fases com altares de Prie Dieu serão identificadas com valor 1 (um); III) e
as fases que tiverem chefes serão identificadas com valores inteiros no intervalo 2 <= X <= 1000, sendo que este valor inteiro é o dano
que o chefão causa ao personagem naquela fase. Por fim será dado um inteiro ‘M’ (1 <= M <= 1000), que representa a vida do Penitente.

Saída
A Saída vai consistir de uma frase. Caso Lucas consiga passar de todos os chefões ele deve imprimir “Yes, you can”, caso contrário deve 
imprimir “You Died”. 
*/
#include <iostream>
using namespace std;

int main() {
int N, M, m, cont=0;
  cin>>N;
int X[N];

for(int i=0; i<N; i++){
  cin>>X[i];
}
cin>>M;
m=M;
for(int i=0; i<N; i++){
  if(X[i]==0){
    continue;
  }
  else if(X[i]==1){
    m=M;
  }
  else if(X[i]>1){
    m= m-X[i];
    if(m<=0){
    cont++;
    }
  }
}
if(cont == 0){
  cout<<"Yes, you can"<<endl;
}
else{
  cout<<"You Died"<<endl;
}

  return 0;
}
