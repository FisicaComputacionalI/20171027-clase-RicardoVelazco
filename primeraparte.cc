//Primera parte de la tarea leerdiagramadeflujo
//Ricardo Velazco Castillo
//Viernes 27 de Octubre de 2017
#include <iostream>
using namespace std;
int esPrimo(int x){
  int flag=0;
  for(int i=2; i<=(x/2); i++){
  if (x%i==0)
    flag=1;
  }
  return flag;
}
int main(){
  int s=12;
  int p=0;
  cout<<"dame un numero natural "<< endl;
  cin>>p;
    do{
      if(p%2==0)
	p=p+1;
	if(esPrimo(p)==1)
	  p=p+2;
    }
    while(esPrimo(p)==1);
	cout<<"el valor de p es "<<p<<endl;
      return 0;
}
