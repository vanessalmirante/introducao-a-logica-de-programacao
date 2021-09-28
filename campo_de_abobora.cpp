/*
Campo de abóboras
Hagrid está tendo um dia cheio com Picuço e pediu ajuda a Harry e Ron. Eles precisam ajudá-lo a coletar abóboras. A plantação é grande e para 
acelerar o trabalho, Hagrid pede que Harry fique responsável pela colheita em uma determinada linha, começando na esquerda e indo até o fim dela 
na direita. Da mesma forma, Hagrid pede que Ron colha as abóboras em outra linha, porém agora, Ron começa em cima e vai até o fim dela na parte de baixo 
da plantação.
Hagrid quer saber ao fim da tarefa qual dos dois coletou mais abóboras, levando-se em consideração seu peso. Só tome cuidado com o ponto de intersecção 
entre as duas linhas que Harry e Ron irão coletar as abóboras. Somente um deles fica com a abóbora que está lá, ela é do primeiro que lá chegar, 
ou seja, ela pertence àquele que estiver mais próximo dela a partir do ponto de início de sua colheita, e se der empate na distância, a abóbora fica 
com Ron.

Entrada
Seu programa receberá primeiramente um inteiro ‘N’ (1 ≤ ‘N’ ≤ 100), representando o tamanho da plantação de abóboras, que é um campo de proporção NxN 
(N linhas horizontais por N linhas verticais). A seguir serão dadas ‘N’ linhas, onde em cada uma serão dados ‘N’ inteiros ‘P’ (1 <= P <= 100), que
representam o peso de cada abóbora no campo. Há uma abóbora em cada posição do campo NxN. Por fim, a última linha da entrada contêm as linhas ‘X’ e ‘Y’ 
(0 <= X,Y < N) que Harry e Ron irão coletar, respectivamente. Cuidado que a linha de Ron na verdade se trata de uma coluna na matriz da plantação.

Saída
Imprima o peso total da colheita de Harry e a seguir, na linha de baixo, imprima o peso total da colheita de Ron, como nos exemplos abaixo.
*/
#include <iostream>
using namespace std;

int main() {
int N, X, Y, sH=0, sR=0, d=0;
  cin>>N;
int P[N][N];

for (int i=0; i<N; i++){
  for(int t=0; t<N; t++){
    cin>>P[i][t];
  }
}
  cin>>X>>Y;
for (int i=0; i<N; i++){
  sH+=P[X][i];  
}
for (int i=0; i<N; i++){
  sR+=P[i][Y];  
}
d=P[X][Y];
X=N-X;
Y=N-Y;
if(X>Y){
  sH=sH-d;
  cout<<"Harry "<<sH<<endl<<"Ron "<<sR<<endl;
}
else if(X<Y){
  sR=sR-d;
  cout<<"Harry "<<sH<<endl<<"Ron "<<sR<<endl;
}
else if(X==Y){
  sH=sH-d;
  cout<<"Harry "<<sH<<endl<<"Ron "<<sR<<endl;
}

 return 0;
}
