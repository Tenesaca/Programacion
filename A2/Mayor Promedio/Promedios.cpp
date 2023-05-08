#include <iostream>
using namespace std;
int main()
{
	int l,i,c;
	float a[i],p;
	i=1;
	cout<<"ingrese cuantos promedios colocara\n";
	cin>>l;
	cout<<"ingrese los promedios\n";
	do{
		cin>>a[i];
		if(a[i]>=c){
			p=a[i];
		}
		i=i+1;
	}while(i<=l);
	cout<<"El mayor promedio es: "<<p;
	return 0;
}
