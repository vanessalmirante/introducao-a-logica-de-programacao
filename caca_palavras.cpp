/*
Caça palavras
Caça palavras é sem dúvida um passatempo muito apreciado pelos alunos de ILP-PD, tanto é que os professores da disciplina resolveram treinar as
habilidades de percepção de seus pupilos. Como você não foge de um desafio, terá o privilégio de fazer um programa que encontra uma palavra 
escondida no meio de várias letras. A disposição da palavra pode ser na horizontal ou vertical, e além disso, existe a possibilidade da palavra
estar escrita de trás para frente.

Entrada
A entrada será dada por uma grade de caracteres com dimensões N x N, portanto será dado primeiramente um inteiro ‘N’ (6 <= N <= 10). Cada uma das 
‘N’ linhas seguintes possuirá ‘N’ caracteres, separados por espaços, sendo que estespodem ser somente letras minúsculas no intervalo a - z. Por 
fim, na última linha, será dada a palavra a ser buscada e que terá tamanho ‘X’ (3 <= X <= 8).

Saída
Você deverá imprimir as coordenadas da linha e coluna, na grade de caracteres, de onde começa a palavra buscada, seguidas na mesma linha, das
coordenadas de onde termina a palavra buscada. Garantimos que a palavra sempre estará na grade e que sempre caberá nela.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
int N, tam=0,k=0;
  cin>>N;
char m[N][N];
string p;

for(int i=0; i<N; i++){
  for(int t=0;t<N; t++){
    cin>>m[i][t];
  }
}
  cin>>p;
  tam=p.size();

for(int i=0; i<N; i++){
  for(int t=0;t<N; t++){
    if(m[i][t]==p[k] && m[i][t+1]==p[k+1] && t+1<N && k<tam){
      k++;
    }
    else if(m[i][t]==p[k] && m[i][t-1]==p[k-1] && t-1>=0 && k==tam-1){
      cout<<i<<" "<<t-(tam-1)<<" "<<i<<" "<<t<<endl; return 0;
    }
  }
}

k=0;
for(int i=N-1; i>=0; i--){
  for(int t=N-1;t>=0; t--){
    if(m[i][t]==p[k] && m[i][t-1]==p[k+1] && t-1>=0 && k<tam){ 
      k++;
    }
    else if(m[i][t]==p[k] && m[i][t+1]==p[k-1] && t+1<N && k==tam-1){
      cout<<i<<" "<<t+(tam-1)<<" "<<i<<" "<<t<<endl; return 0;
    }
  }
}

k=0;
for(int i=0; i<N; i++){
  for(int t=0;t<N; t++){
    if(m[t][i]==p[k] && m[t+1][i]==p[k+1] && t+1<N && k<tam){ 
      k++;
    }
    else if(m[t][i]==p[k] && m[t-1][i]==p[k-1] && t-1>=0 && k==tam-1){
      cout<<t-(tam-1)<<" "<<i<<" "<<t<<" "<<i<<endl; return 0;
    }
  }
}

k=0;
for(int i=N-1; i>=0; i--){
  for(int t=N-1;t>=0; t--){
    if(m[t][i]==p[k] && m[t-1][i]==p[k+1] && t-1>=0 && k<tam){ 
      k++;
    }
    else if(m[t][i]==p[k] && m[t+1][i]==p[k-1] && t+1<N && k==tam-1){
      cout<<t+(tam-1)<<" "<<i<<" "<<t<<" "<<i<<endl; return 0;
    }
  }
}

  return 0;
}
