#include<iostream>
using namespace std;
int main()
{
	int h[3],m[3],s[3],t,i;
	float a[3];
	i=1;
	do{
		cout<<"ingrese el tiempo "<<i<<"\n\n";
		cout<<"inserte las horas\n";
		cin>>h[i];
		cout<<"inserte los minutos\n";
		cin>>m[i];
		cout<<"inserte los segundos\n";
		cin>>s[i];
		a[i]=(h[i]*3600)+(m[i]*60)+s[i];
		i=i+1;
	}while(i<=2);
	i=1;
	do{
		cout<<h[i]<<":"<<m[i]<<":"<<s[i]<<"\n";
		i=i+1;
	}while(i<=2);
	if(a[1]>a[2]){
		a[3]=a[1]-a[2];
	}else{
		a[3]=a[2]-a[1];
	}
	a[3]=a[3]/3600;
	t=a[3];
	h[3]=t;
	a[3]=a[3]-t;
	
	a[3]=a[3]*60;
	t=a[3];
	m[3]=t;
	a[3]=a[3]-t;
	
	a[3]=a[3]*60;
	t=a[3];
	s[3]=t;
	a[3]=a[3]-t;
	
	cout<<h[3]<<":"<<m[3]<<":"<<s[3]<<"\n";
}
