#include <iostream>
using namespace std;
int main()
{
	int a[4],i,p[4],l,n;
	cout<<"ingrese los valores a ordenar\n";
	i=1;
	do{
		cin>>a[i];
		i=i+1;
	}while(i<=4);
	i=1;
	do{
		l=1;
		n=0;
		do{
			if(a[i]>=a[l]){
				n=n+1;
			}
			l=l+1;
		}while(l<=4);
		p[n]=a[i];
		i=i+1;
	}while(i<=4);
	cout<<"El orden correcto de los valores de mayor a menor es: \n"<<p[4]<<" "<<p[3]<<" "<<p[2]<<" "<<p[1]<<"\n";
	cout<<"El orden correcto de los valores de menor a mayor es: \n"<<p[1]<<" "<<p[2]<<" "<<p[3]<<" "<<p[4]<<"\n";
}
