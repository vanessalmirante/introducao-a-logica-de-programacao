/*
Ori and the Blind Forest
"Ori And The Blind Forest" conta a história de Ori, um espírito materializado que foi adotado por Naru, uma espécie de urso que há muito tempo
vivia em uma floresta encantada. Mas infelizmente ocorre a morte de Naru. Ori se vê sozinho na imensidão verde e assume a responsabilidade de 
explorar a floresta para sobreviver. Uma nova versão do jogo está quase completa, faltando apenas implementar uma verificação dos valores de XP 
obtidos por Ori para saber se ele consegue subir de nível. Sua tarefa será dizer se Ori conseguiu passar de nível, sendo que para isso lhe será 
dado o XP obtido por ele em cada missão que ele cumpriu, e além disso, será dada uma pontuação bônus para cada missão, onde cada bônus será multiplicado
pela pontuação obtida naquela missão.

Entrada
A primeira linha contém um inteiro ‘M’ (1 <= M <= 1000), representando o total de XP necessário para subir de nível. A linha seguinte contém um 
inteiro ‘N’ (1 <= N <= 1000), representando a quantidade de missões cumpridas por Ori em determinado mapa de fase. Na linha seguinte serão dados 
‘N’ inteiros ‘X’ (1 <= X <= 100), que representam o XP de cada missão. Na última linha serão dados ‘N’ inteiros ‘B’ (1 <= B <= 100), que representam 
o bônus que deve ser multiplicado pela pontuação da respectiva missão. Ou seja, o primeiro valor de bônus dado, será multiplicado pelo XP da primeira 
missão, o segundo valor de bônus será multiplicado pelo XP da segunda missão, e assim sucessivamente.

Saída
Você deverá imprimir “Upou de Nivel!”, se o total de XP for maior ou igual a quantidade ‘M’ necessária para upar de nível, ou “Nao foi dessa
vez!”, caso contrário.
*/
#include <iostream>
using namespace std;

int main() {
int M, N, XP=0;
cin>>M>>N;
int X[N], B[N];  

for(int i=0; i<N; i++){
  cin>>X[i];
}  
for(int i=0; i<N; i++){
  cin>>B[i];
}
for(int i=0; i<N; i++){
  X[i]= X[i]*B[i];
}

for(int i=0; i<N; i++){
  XP+=X[i];
}

if(XP>= M){
  cout<<"Upou de Nivel!"<<endl;
}
else{
  cout<<"Nao foi dessa vez!"<<endl;
}

  return 0;
}
