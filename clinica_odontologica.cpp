/*
Cliníca Odontológica
Autor: Rafael Sampaio
Uma clínica percebeu que sua recepcionista perdia muito tempo ao telefone enquanto atendia clientes tentando agendar suas consultas no melhor
dia do mês. Para otimizar o tempo da atendente, escreva um programa de agendamento de consultas. Para cada paciente, o sistema deverá verificar
a data de preferência do paciente e verificar na agenda do dentista se tem possibilidade de agendamento naquele dia. Se o dia de preferência do
paciente estiver ocupado, deve-se agendar o dia livre mais próximo à frente. Não havendo data livre à frente, informar que não foi possível agendar.

Entrada
A entrada é composta primeiramente por uma string ‘Nd’, representando o nome do dentista. Na linha seguinte tem-se um inteiro ‘N’ (1 <= N <= 30)
que indicará quantos dias o dentista irá atender durante o mês, sendo uma consulta por dia. A seguir, na mesma linha, serão dados os ‘N’ inteiros
‘D’ (1 <= D <= 30) que representam os dias de atendimento do dentista, em ordem crescente. Na próxima linha será dado um inteiro ‘P’ (1 <= P <= 60),
representando a quantidade de pacientes aguardando agendamento. Em cada uma das ‘P’ linhas seguintes, serão dados um inteiro ‘A’ (1 <= A <= 30), 
representando o dia em que o paciente ‘Pi’ gostaria de marcar sua consulta, seguido de uma string ‘Np’, representando o nome do paciente.

Saída
O sistema deve responder para cada paciente a seguinte mensagem: “NOME_PACIENTE agendado com o(a) Dr(a). NOME_DENTISTA para dia DIA_MÊS.”. Caso 
não seja possível encontrar a data ideal, o sistema deve informar “Não foi possível agendar a consulta para NOME_PACIENTE.”. Sendo que NOME_PACIENTE,
NOME_DENTISTA e DIA_MÊS, representam respectivamente, o nome do paciente, o nome do dentista e a data da consulta. Os nomes dos pacientes e do dentista
terão apenas o primeiro nome.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
string Nd, Np; 
int N, p, A, cont=0;
  cin>>Nd;
  cin>>N;
int D[N];
for(int i=0; i<N; i++){
  cin>>D[i];
}
  cin>>p;
for(int i=0; i<p; i++){
  cin>>A;
  cin>>Np;
  for(int t=0; t<N; t++){
    if(A==D[t]){
     A=D[t];
     D[t]=0;
     cont++;
     break;  
    }
    else if(A<D[t]){
     A=D[t]; 
     D[t]=0;
     cont++;
     break;
    }
  }
  if(cont!=0){
    cout<<Np<<" agendado com o(a) Dr(a). "<<Nd<<" para dia "<<A<<".";  
  }
  else if (cont==0){
    cout<<"Não foi possível agendar a consulta para "<<Np<<".";
  }
  cont=0;
  cout<<endl;
} 

  return 0;
}
