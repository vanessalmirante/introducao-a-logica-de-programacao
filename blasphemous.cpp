
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
